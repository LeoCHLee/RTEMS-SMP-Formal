# ISSUES

## CURRENT WORK

Developing `proto_sem` to aid in developing formal semantics for the whole `spin2test` language chain: Promela, Observations, Refinement, RTEMS C Testcode.

If we don't run System and Clock, the Promela model works,
but the code generation fails because the the Segment 1  & 2 slots get filled with Runner/Worker code, but the C boilerplate code expects those to being Segments3 onwards.
We need a better way to relate Promela proctypes and their process ids to C test code "Segments"

Should we have "tiny" versions of System and Clock for when they are not needed?


In `proto/SimpleBinarySemaphores` we use Promela/SPIN to explore the automatic use of simple binary semaphores to orchestrate test code.

## PUZZLING

### STATUS

 * `allmodels` - 1 test fails (msg-mgr)
 * `barrier-mgr` - all tests pass  
 * `chains` - all tests pass 
 * `event-mgr` - all tests pass
 * `msg-mgr` - 1 test fails  - receive suceeds when timeout expected
 * `sem-mgr` - all tests pass

 * `barrier-mgr` fixed by changing sis core argument from `-m 2` to `-m 4`.
 * `msg-mgr` now has only one test-fail: 
    `F:0.17:0:@X/PML-MessageMgr017:tr-msg-mgr-model-17.c:194:RTEMS_SUCCESSFUL == RTEMS_TIMEOUT`

Maybe the issue is that when timeout occurs we first check to see if a message
has (JUST!) arrived, in which case we are satisfied, otherwise we complain.
 

### Current command behaviour:
 
 * `zero`,`clean`,`spin`,`gentests`, `copy`, `allsteps` require `xxx-mgr`

 * `allsteps` fails with a lookup error if first model is not `xx-model`,
    but fails with an informative error message if first is OK, 
    but subsequent are bad.

 * `models.yml` is used when `alltests` is specified
 

### Model.h files

File `tr-<modelname>-model.h` currently defines test helpers 
(like `mergeopts`,`ObtainSema`).
It also has a fixed list declaring the `RtemsModel<Mgr>_RunN` functions.
This part should be auto-generated, in the way that `tc-<model>.c` is.

### Using tx-support.h

We do something strange here:

```
LowerPriority: |
  SetSelfPriority( PRIO_LOW );
  rtems_task_priority prio;
  rtems_status_code sc;
  sc = rtems_task_set_priority( RTEMS_SELF, RTEMS_CURRENT_PRIORITY, &prio );
  T_rsc_success( sc );
  T_eq_u32( prio, PRIO_LOW );
```

We use `tx-support` function `SetSelfPriority` to set priority to low
(it uses `rtems_task_set_priority` under the hood).
We then use `rtems_task_set_priority` to set priority to itself,
and check its previous value was low.
This is done everywhere, even in the Event Manager.

Two uses in `tr-event-send-receive.c` :

```
case PRIO_HIGH:
        prio = SetSelfPriority( ctx->sender_prio );
        T_eq_u32( prio, PRIO_LOW );
        break;

  SetSelfPriority( PRIO_NORMAL );
  ctx->worker_id = CreateTask( "WORK", PRIO_LOW );
  StartTask( ctx->worker_id, Worker, ctx );        
```


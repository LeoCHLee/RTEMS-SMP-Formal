/* SPDX-License-Identifier: BSD-2-Clause */

/**
 * @file
 *
 * @ingroup RTEMSTestCaseRtemsSemVal
 */

/*
 * Copyright (C) 2020 embedded brains GmbH (http://www.embedded-brains.de)
 *               2022 Trinity College Dublin (http://www.tcd.ie)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Do not manually edit this file.  It is part of the RTEMS quality process
 * and was automatically generated.
 *
 * If you find something that needs to be fixed or worded better please
 * post a report to an RTEMS mailing list or raise a bug report:
 *
 * https://docs.rtems.org/branches/master/user/support/bugs.html
 *
 * For information on updating and regenerating please refer to:
 *
 * https://docs.rtems.org/branches/master/eng/req/howto.html
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/rtems/tasksdata.h>
#include <rtems/score/statesimpl.h>
#include <rtems/score/threadimpl.h>

#include "tr-sem-mgr-model.h"

#include <rtems/test.h>

/**
 * @defgroup RTEMSTestCaseRtemsSemVal
 *
 * @ingroup RTEMSTestSuiteTestsuitesValidation0
 *
 * @brief Tests the rtems_semaphore_create, rtems_semaphore_ident, 
 * rtems_semaphore_delete, rtems_semaphore_obtain, rtems_semaphore_release,
 * rtems_semaphore_flush and rtems_semaphore_set_priority 
 * directives.
 *
 * This test case performs the following actions:
 *
 * - Runs tests for Semaphore Manager
 *
 * @{
 */

/**
 * @fn void T_case_body_RtemsSemVal void )
 */
T_TEST_CASE( RtemsModelSemMgr0 )
{
  RtemsModelSemMgr_Run0();
}

T_TEST_CASE( RtemsModelSemMgr1 )
{
  RtemsModelSemMgr_Run1();
}

T_TEST_CASE( RtemsModelSemMgr2 )
{
  RtemsModelSemMgr_Run2();
}

T_TEST_CASE( RtemsModelSemMgr3 )
{
  RtemsModelSemMgr_Run3();
}

T_TEST_CASE( RtemsModelSemMgr4 )
{
  RtemsModelSemMgr_Run4();
}

T_TEST_CASE( RtemsModelSemMgr5 )
{
  RtemsModelSemMgr_Run5();
}

T_TEST_CASE( RtemsModelSemMgr6 )
{
  RtemsModelSemMgr_Run6();
}

T_TEST_CASE( RtemsModelSemMgr7 )
{
  RtemsModelSemMgr_Run7();
}

T_TEST_CASE( RtemsModelSemMgr8 )
{
  RtemsModelSemMgr_Run8();
}

T_TEST_CASE( RtemsModelSemMgr9 )
{
  RtemsModelSemMgr_Run9();
}

T_TEST_CASE( RtemsModelSemMgr10 )
{
  RtemsModelSemMgr_Run10();
}

T_TEST_CASE( RtemsModelSemMgr11 )
{
  RtemsModelSemMgr_Run11();
}

T_TEST_CASE( RtemsModelSemMgr12 )
{
  RtemsModelSemMgr_Run12();
}

T_TEST_CASE( RtemsModelSemMgr13 )
{
  RtemsModelSemMgr_Run13();
}

T_TEST_CASE( RtemsModelSemMgr14 )
{
  RtemsModelSemMgr_Run14();
}

T_TEST_CASE( RtemsModelSemMgr15 )
{
  RtemsModelSemMgr_Run15();
}

T_TEST_CASE( RtemsModelSemMgr16 )
{
  RtemsModelSemMgr_Run16();
}

T_TEST_CASE( RtemsModelSemMgr17 )
{
  RtemsModelSemMgr_Run17();
}

T_TEST_CASE( RtemsModelSemMgr18 )
{
  RtemsModelSemMgr_Run18();
}

T_TEST_CASE( RtemsModelSemMgr19 )
{
  RtemsModelSemMgr_Run19();
}

T_TEST_CASE( RtemsModelSemMgr20 )
{
  RtemsModelSemMgr_Run20();
}

T_TEST_CASE( RtemsModelSemMgr21 )
{
  RtemsModelSemMgr_Run21();
}

T_TEST_CASE( RtemsModelSemMgr22 )
{
  RtemsModelSemMgr_Run22();
}

T_TEST_CASE( RtemsModelSemMgr23 )
{
  RtemsModelSemMgr_Run23();
}

T_TEST_CASE( RtemsModelSemMgr24 )
{
  RtemsModelSemMgr_Run24();
}

T_TEST_CASE( RtemsModelSemMgr25 )
{
  RtemsModelSemMgr_Run25();
}

T_TEST_CASE( RtemsModelSemMgr26 )
{
  RtemsModelSemMgr_Run26();
}

T_TEST_CASE( RtemsModelSemMgr27 )
{
  RtemsModelSemMgr_Run27();
}

T_TEST_CASE( RtemsModelSemMgr28 )
{
  RtemsModelSemMgr_Run28();
}

T_TEST_CASE( RtemsModelSemMgr29 )
{
  RtemsModelSemMgr_Run29();
}

T_TEST_CASE( RtemsModelSemMgr30 )
{
  RtemsModelSemMgr_Run30();
}

T_TEST_CASE( RtemsModelSemMgr31 )
{
  RtemsModelSemMgr_Run31();
}

T_TEST_CASE( RtemsModelSemMgr32 )
{
  RtemsModelSemMgr_Run32();
}

T_TEST_CASE( RtemsModelSemMgr33 )
{
  RtemsModelSemMgr_Run33();
}

T_TEST_CASE( RtemsModelSemMgr34 )
{
  RtemsModelSemMgr_Run34();
}

T_TEST_CASE( RtemsModelSemMgr35 )
{
  RtemsModelSemMgr_Run35();
}

T_TEST_CASE( RtemsModelSemMgr36 )
{
  RtemsModelSemMgr_Run36();
}

T_TEST_CASE( RtemsModelSemMgr37 )
{
  RtemsModelSemMgr_Run37();
}

T_TEST_CASE( RtemsModelSemMgr38 )
{
  RtemsModelSemMgr_Run38();
}

T_TEST_CASE( RtemsModelSemMgr39 )
{
  RtemsModelSemMgr_Run39();
}

T_TEST_CASE( RtemsModelSemMgr40 )
{
  RtemsModelSemMgr_Run40();
}

T_TEST_CASE( RtemsModelSemMgr41 )
{
  RtemsModelSemMgr_Run41();
}

T_TEST_CASE( RtemsModelSemMgr42 )
{
  RtemsModelSemMgr_Run42();
}

T_TEST_CASE( RtemsModelSemMgr43 )
{
  RtemsModelSemMgr_Run43();
}



/** @} */

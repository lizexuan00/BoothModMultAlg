/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/sasak/Desktop/workshop3/BoothModMultAlg/test_BoothModMultAlg.v";
static int ng1[] = {0, 0};
static int ng2[] = {100, 0};



static void Cont_8_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t4, 16, t7, 16);
    t9 = (t0 + 3896);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 3800);
    *((int *)t14) = 1;

LAB1:    return;
}

static void NetDecl_9_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1344U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 3960);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t18 = (t0 + 3816);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_15_2(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);

LAB4:    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5596);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 5596);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(22, ng0);
    xsi_vlog_stop(1);

LAB1:    return;
LAB6:    xsi_set_current_line(18, ng0);

LAB8:    xsi_set_current_line(19, ng0);
    *((int *)t10) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t11 = (t10 + 4);
    *((int *)t11) = 0;
    t12 = (t0 + 2064);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 16);
    t13 = (t0 + 1904);
    xsi_vlogvar_assign_value(t13, t10, 16, 0, 16);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3288);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 5596);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

}


extern void work_m_00000000001031504028_1163568434_init()
{
	static char *pe[] = {(void *)Cont_8_0,(void *)NetDecl_9_1,(void *)Initial_15_2};
	xsi_register_didat("work_m_00000000001031504028_1163568434", "isim/test_BoothModMultAlg_isim_beh.exe.sim/work/m_00000000001031504028_1163568434.didat");
	xsi_register_executes(pe);
}

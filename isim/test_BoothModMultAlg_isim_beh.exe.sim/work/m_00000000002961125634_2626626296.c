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
static const char *ng0 = "C:/Users/sasak/Desktop/workshop3/BoothModMultAlg/BoothModMultAlg.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {7, 0};
static int ng5[] = {1, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};



static void Always_13_0(char *t0)
{
    char t8[8];
    char t9[8];
    char t15[8];
    char t33[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    int t35;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 3248);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(14, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t8, 17, 17, 2U, t4, 16, t2, 1);
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 17);
    xsi_set_current_line(16, ng0);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 768);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_divide(t8, 32, t6, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t4, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 3248);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(16, ng0);

LAB11:    xsi_set_current_line(17, ng0);
    t16 = (t0 + 2360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t15 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 7U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 7U);

LAB12:    t27 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t27, 32);
    if (t28 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB15;

LAB16:    t3 = ((char*)((ng5)));
    t35 = xsi_vlog_unsigned_case_compare(t15, 32, t3, 32);
    if (t35 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng6)));
    t35 = xsi_vlog_unsigned_case_compare(t15, 32, t3, 32);
    if (t35 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_rshift(t8, 17, t4, 17, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 17);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB8;

LAB13:    xsi_set_current_line(18, ng0);
    t29 = (t0 + 2200);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t31, 32, t32, 32);
    t34 = (t0 + 2200);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 32);
    goto LAB29;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1640U);
    t16 = *((char **)t7);
    t7 = ((char*)((ng3)));
    t17 = (t0 + 2520);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t7, 32, t19, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_arith_lshift(t9, 32, t16, 16, t8, 32);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t6, 32, t9, 32);
    t20 = (t0 + 2200);
    xsi_vlogvar_assign_value(t20, t33, 0, 0, 32);
    goto LAB29;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    t16 = (t0 + 1640U);
    t17 = *((char **)t16);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t7, 32, t17, 16);
    t16 = ((char*)((ng3)));
    t18 = (t0 + 2520);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t9, 0, 8);
    xsi_vlog_signed_multiply(t9, 32, t16, 32, t20, 32);
    memset(t33, 0, 8);
    xsi_vlog_signed_arith_lshift(t33, 32, t8, 32, t9, 32);
    memset(t36, 0, 8);
    xsi_vlog_signed_add(t36, 32, t6, 32, t33, 32);
    t27 = (t0 + 2200);
    xsi_vlogvar_assign_value(t27, t36, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 2200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 1640U);
    t16 = *((char **)t7);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t16, 16);
    t7 = ((char*)((ng3)));
    t17 = (t0 + 2520);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t9, 0, 8);
    xsi_vlog_signed_multiply(t9, 32, t7, 32, t19, 32);
    memset(t33, 0, 8);
    xsi_vlog_signed_arith_lshift(t33, 32, t8, 32, t9, 32);
    memset(t36, 0, 8);
    xsi_vlog_signed_minus(t36, 32, t5, 32, t33, 32);
    t20 = (t0 + 2200);
    xsi_vlogvar_assign_value(t20, t36, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 2200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1640U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    t16 = (t0 + 2520);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t18, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_arith_lshift(t9, 32, t7, 16, t8, 32);
    memset(t33, 0, 8);
    xsi_vlog_signed_minus(t33, 32, t5, 32, t9, 32);
    t19 = (t0 + 2200);
    xsi_vlogvar_assign_value(t19, t33, 0, 0, 32);
    goto LAB29;

LAB27:    goto LAB25;

}


extern void work_m_00000000002961125634_2626626296_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000002961125634_2626626296", "isim/test_BoothModMultAlg_isim_beh.exe.sim/work/m_00000000002961125634_2626626296.didat");
	xsi_register_executes(pe);
}

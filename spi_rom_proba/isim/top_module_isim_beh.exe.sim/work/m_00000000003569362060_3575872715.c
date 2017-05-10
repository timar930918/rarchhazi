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
static const char *ng0 = "C:/Company/GitProject/rarchhazi/spi_rom_proba/spi_interface.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {3U, 0U};



static void Always_64_0(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 8688);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);

LAB9:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 4168);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);

LAB10:    t16 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 2, t16, 2);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB8;

LAB11:    xsi_set_current_line(67, ng0);
    t19 = (t0 + 4008);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 4328);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t24, 8, t21, 24);
    t25 = (t0 + 4808);
    xsi_vlogvar_assign_value(t25, t18, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 4488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4808);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB15;

}

static void Cont_73_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8704);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_74_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 8720);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_76_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_77_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_79_5(char *t0)
{
    char t6[8];
    char t20[8];
    char t36[8];
    char t44[8];
    char t80[8];
    char t102[8];
    char t110[8];
    char t126[8];
    char t134[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;

LAB0:    t1 = (t0 + 7128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 8752);
    *((int *)t2) = 1;
    t3 = (t0 + 7160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t44, t6, 8);

LAB12:    t72 = (t44 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t44);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t12 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 8, 0LL);

LAB26:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(87, ng0);

LAB30:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t23 = (t16 | t17);
    t24 = (~(t23));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB32;

LAB31:    if (t23 != 0)
        goto LAB33;

LAB34:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t19) != 0)
        goto LAB37;

LAB38:    t22 = (t20 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB39;

LAB40:    memcpy(t80, t20, 8);

LAB41:    t94 = (t80 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t80);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t23 = (t16 | t17);
    t24 = (~(t23));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB58;

LAB57:    if (t23 != 0)
        goto LAB59;

LAB60:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t19) != 0)
        goto LAB63;

LAB64:    t22 = (t20 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB65;

LAB66:    memcpy(t80, t20, 8);

LAB67:    t94 = (t80 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t80);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t23 = (t16 | t17);
    t24 = (~(t23));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB84;

LAB83:    if (t23 != 0)
        goto LAB85;

LAB86:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t19) != 0)
        goto LAB89;

LAB90:    t22 = (t20 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB91;

LAB92:    memcpy(t80, t20, 8);

LAB93:    memset(t102, 0, 8);
    t94 = (t80 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t80);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t94) != 0)
        goto LAB107;

LAB108:    t101 = (t102 + 4);
    t103 = *((unsigned int *)t102);
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB109;

LAB110:    memcpy(t134, t102, 8);

LAB111:    t166 = (t134 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t134);
    t170 = (t169 & t168);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t23 = (t16 | t17);
    t24 = (~(t23));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB128;

LAB127:    if (t23 != 0)
        goto LAB129;

LAB130:    memset(t20, 0, 8);
    t19 = (t6 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t19) != 0)
        goto LAB133;

LAB134:    t22 = (t20 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t22);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB135;

LAB136:    memcpy(t80, t20, 8);

LAB137:    memset(t102, 0, 8);
    t94 = (t80 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t80);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t94) != 0)
        goto LAB151;

LAB152:    t101 = (t102 + 4);
    t103 = *((unsigned int *)t102);
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB153;

LAB154:    memcpy(t134, t102, 8);

LAB155:    t166 = (t134 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t134);
    t170 = (t169 & t168);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB169:
LAB125:
LAB81:
LAB55:
LAB29:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB174;

LAB175:
LAB176:
LAB173:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t23 = (t16 | t17);
    t24 = (~(t23));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB180;

LAB177:    if (t23 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t6) = 1;

LAB180:    t19 = (t6 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB181;

LAB182:
LAB183:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t21 = (t19 + 4);
    t22 = (t18 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t18);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB16;

LAB13:    if (t32 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t20) = 1;

LAB16:    memset(t36, 0, 8);
    t37 = (t20 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t20);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t37) != 0)
        goto LAB19;

LAB20:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t6);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB23;

LAB24:    xsi_set_current_line(81, ng0);
    t78 = ((char*)((ng1)));
    t79 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 8, 0LL);
    goto LAB26;

LAB27:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB29;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB33:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t20) = 1;
    goto LAB38;

LAB37:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    t35 = (t0 + 4968);
    t37 = (t35 + 56U);
    t43 = *((char **)t37);
    t48 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t49 = (t43 + 4);
    t50 = (t48 + 4);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t48);
    t39 = (t34 ^ t38);
    t40 = *((unsigned int *)t49);
    t41 = *((unsigned int *)t50);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t49);
    t47 = *((unsigned int *)t50);
    t51 = (t46 | t47);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB45;

LAB42:    if (t51 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t36) = 1;

LAB45:    memset(t44, 0, 8);
    t59 = (t36 + 4);
    t54 = *((unsigned int *)t59);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t60 = (t57 & 1U);
    if (t60 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t59) != 0)
        goto LAB48;

LAB49:    t61 = *((unsigned int *)t20);
    t62 = *((unsigned int *)t44);
    t64 = (t61 & t62);
    *((unsigned int *)t80) = t64;
    t78 = (t20 + 4);
    t79 = (t44 + 4);
    t81 = (t80 + 4);
    t65 = *((unsigned int *)t78);
    t66 = *((unsigned int *)t79);
    t68 = (t65 | t66);
    *((unsigned int *)t81) = t68;
    t69 = *((unsigned int *)t81);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t58 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t44) = 1;
    goto LAB49;

LAB48:    t72 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB49;

LAB50:    t71 = *((unsigned int *)t80);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t71 | t73);
    t82 = (t20 + 4);
    t83 = (t44 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t82);
    t77 = (~(t76));
    t84 = *((unsigned int *)t44);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t63 = (t75 & t77);
    t67 = (t85 & t87);
    t88 = (~(t63));
    t89 = (~(t67));
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & t88);
    t91 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t91 & t89);
    t92 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t92 & t88);
    t93 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t93 & t89);
    goto LAB52;

LAB53:    xsi_set_current_line(88, ng0);

LAB56:    xsi_set_current_line(89, ng0);
    t100 = ((char*)((ng2)));
    t101 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB55;

LAB58:    *((unsigned int *)t6) = 1;
    goto LAB60;

LAB59:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t20) = 1;
    goto LAB64;

LAB63:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB64;

LAB65:    t35 = (t0 + 4968);
    t37 = (t35 + 56U);
    t43 = *((char **)t37);
    t48 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t49 = (t43 + 4);
    t50 = (t48 + 4);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t48);
    t39 = (t34 ^ t38);
    t40 = *((unsigned int *)t49);
    t41 = *((unsigned int *)t50);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t49);
    t47 = *((unsigned int *)t50);
    t51 = (t46 | t47);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB71;

LAB68:    if (t51 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t36) = 1;

LAB71:    memset(t44, 0, 8);
    t59 = (t36 + 4);
    t54 = *((unsigned int *)t59);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t60 = (t57 & 1U);
    if (t60 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t59) != 0)
        goto LAB74;

LAB75:    t61 = *((unsigned int *)t20);
    t62 = *((unsigned int *)t44);
    t64 = (t61 & t62);
    *((unsigned int *)t80) = t64;
    t78 = (t20 + 4);
    t79 = (t44 + 4);
    t81 = (t80 + 4);
    t65 = *((unsigned int *)t78);
    t66 = *((unsigned int *)t79);
    t68 = (t65 | t66);
    *((unsigned int *)t81) = t68;
    t69 = *((unsigned int *)t81);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t58 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t44) = 1;
    goto LAB75;

LAB74:    t72 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB75;

LAB76:    t71 = *((unsigned int *)t80);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t71 | t73);
    t82 = (t20 + 4);
    t83 = (t44 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t82);
    t77 = (~(t76));
    t84 = *((unsigned int *)t44);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t63 = (t75 & t77);
    t67 = (t85 & t87);
    t88 = (~(t63));
    t89 = (~(t67));
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & t88);
    t91 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t91 & t89);
    t92 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t92 & t88);
    t93 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t93 & t89);
    goto LAB78;

LAB79:    xsi_set_current_line(92, ng0);

LAB82:    xsi_set_current_line(93, ng0);
    t100 = ((char*)((ng2)));
    t101 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB81;

LAB84:    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB85:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t20) = 1;
    goto LAB90;

LAB89:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB90;

LAB91:    t35 = (t0 + 3848);
    t37 = (t35 + 56U);
    t43 = *((char **)t37);
    t48 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t49 = (t43 + 4);
    t50 = (t48 + 4);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t48);
    t39 = (t34 ^ t38);
    t40 = *((unsigned int *)t49);
    t41 = *((unsigned int *)t50);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t49);
    t47 = *((unsigned int *)t50);
    t51 = (t46 | t47);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB97;

LAB94:    if (t51 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t36) = 1;

LAB97:    memset(t44, 0, 8);
    t59 = (t36 + 4);
    t54 = *((unsigned int *)t59);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t60 = (t57 & 1U);
    if (t60 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t59) != 0)
        goto LAB100;

LAB101:    t61 = *((unsigned int *)t20);
    t62 = *((unsigned int *)t44);
    t64 = (t61 & t62);
    *((unsigned int *)t80) = t64;
    t78 = (t20 + 4);
    t79 = (t44 + 4);
    t81 = (t80 + 4);
    t65 = *((unsigned int *)t78);
    t66 = *((unsigned int *)t79);
    t68 = (t65 | t66);
    *((unsigned int *)t81) = t68;
    t69 = *((unsigned int *)t81);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB96:    t58 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t44) = 1;
    goto LAB101;

LAB100:    t72 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB101;

LAB102:    t71 = *((unsigned int *)t80);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t71 | t73);
    t82 = (t20 + 4);
    t83 = (t44 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t82);
    t77 = (~(t76));
    t84 = *((unsigned int *)t44);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t63 = (t75 & t77);
    t67 = (t85 & t87);
    t88 = (~(t63));
    t89 = (~(t67));
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & t88);
    t91 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t91 & t89);
    t92 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t92 & t88);
    t93 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t93 & t89);
    goto LAB104;

LAB105:    *((unsigned int *)t102) = 1;
    goto LAB108;

LAB107:    t100 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB108;

LAB109:    t106 = (t0 + 4168);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng2)));
    memset(t110, 0, 8);
    t111 = (t108 + 4);
    t112 = (t109 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB115;

LAB112:    if (t122 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t110) = 1;

LAB115:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t127) != 0)
        goto LAB118;

LAB119:    t135 = *((unsigned int *)t102);
    t136 = *((unsigned int *)t126);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t138 = (t102 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB120;

LAB121:
LAB122:    goto LAB111;

LAB114:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t126) = 1;
    goto LAB119;

LAB118:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB119;

LAB120:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t102 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t102);
    t151 = (~(t150));
    t152 = *((unsigned int *)t148);
    t153 = (~(t152));
    t154 = *((unsigned int *)t126);
    t155 = (~(t154));
    t156 = *((unsigned int *)t149);
    t157 = (~(t156));
    t158 = (t151 & t153);
    t159 = (t155 & t157);
    t160 = (~(t158));
    t161 = (~(t159));
    t162 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t162 & t160);
    t163 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t163 & t161);
    t164 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t164 & t160);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t165 & t161);
    goto LAB122;

LAB123:    xsi_set_current_line(96, ng0);

LAB126:    xsi_set_current_line(97, ng0);
    t172 = ((char*)((ng5)));
    t173 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t173, t172, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB125;

LAB128:    *((unsigned int *)t6) = 1;
    goto LAB130;

LAB129:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB130;

LAB131:    *((unsigned int *)t20) = 1;
    goto LAB134;

LAB133:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB134;

LAB135:    t35 = (t0 + 3848);
    t37 = (t35 + 56U);
    t43 = *((char **)t37);
    t48 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t49 = (t43 + 4);
    t50 = (t48 + 4);
    t34 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t48);
    t39 = (t34 ^ t38);
    t40 = *((unsigned int *)t49);
    t41 = *((unsigned int *)t50);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t49);
    t47 = *((unsigned int *)t50);
    t51 = (t46 | t47);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB141;

LAB138:    if (t51 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t36) = 1;

LAB141:    memset(t44, 0, 8);
    t59 = (t36 + 4);
    t54 = *((unsigned int *)t59);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t60 = (t57 & 1U);
    if (t60 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t59) != 0)
        goto LAB144;

LAB145:    t61 = *((unsigned int *)t20);
    t62 = *((unsigned int *)t44);
    t64 = (t61 & t62);
    *((unsigned int *)t80) = t64;
    t78 = (t20 + 4);
    t79 = (t44 + 4);
    t81 = (t80 + 4);
    t65 = *((unsigned int *)t78);
    t66 = *((unsigned int *)t79);
    t68 = (t65 | t66);
    *((unsigned int *)t81) = t68;
    t69 = *((unsigned int *)t81);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB146;

LAB147:
LAB148:    goto LAB137;

LAB140:    t58 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB141;

LAB142:    *((unsigned int *)t44) = 1;
    goto LAB145;

LAB144:    t72 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB145;

LAB146:    t71 = *((unsigned int *)t80);
    t73 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t71 | t73);
    t82 = (t20 + 4);
    t83 = (t44 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t82);
    t77 = (~(t76));
    t84 = *((unsigned int *)t44);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t63 = (t75 & t77);
    t67 = (t85 & t87);
    t88 = (~(t63));
    t89 = (~(t67));
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & t88);
    t91 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t91 & t89);
    t92 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t92 & t88);
    t93 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t93 & t89);
    goto LAB148;

LAB149:    *((unsigned int *)t102) = 1;
    goto LAB152;

LAB151:    t100 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB152;

LAB153:    t106 = (t0 + 4168);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng6)));
    memset(t110, 0, 8);
    t111 = (t108 + 4);
    t112 = (t109 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB159;

LAB156:    if (t122 != 0)
        goto LAB158;

LAB157:    *((unsigned int *)t110) = 1;

LAB159:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t127) != 0)
        goto LAB162;

LAB163:    t135 = *((unsigned int *)t102);
    t136 = *((unsigned int *)t126);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t138 = (t102 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB164;

LAB165:
LAB166:    goto LAB155;

LAB158:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB159;

LAB160:    *((unsigned int *)t126) = 1;
    goto LAB163;

LAB162:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB163;

LAB164:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t102 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t102);
    t151 = (~(t150));
    t152 = *((unsigned int *)t148);
    t153 = (~(t152));
    t154 = *((unsigned int *)t126);
    t155 = (~(t154));
    t156 = *((unsigned int *)t149);
    t157 = (~(t156));
    t158 = (t151 & t153);
    t159 = (t155 & t157);
    t160 = (~(t158));
    t161 = (~(t159));
    t162 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t162 & t160);
    t163 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t163 & t161);
    t164 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t164 & t160);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t165 & t161);
    goto LAB166;

LAB167:    xsi_set_current_line(101, ng0);

LAB170:    xsi_set_current_line(102, ng0);
    t172 = ((char*)((ng5)));
    t173 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t173, t172, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB169;

LAB171:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB173;

LAB174:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4168);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t20, 0, 8);
    t18 = (t20 + 4);
    t19 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t20) = t16;
    t17 = *((unsigned int *)t19);
    t23 = (t17 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t18) = t24;
    xsi_vlogtype_concat(t6, 2, 2, 2U, t20, 1, t4, 1);
    t21 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 2, 0LL);
    goto LAB176;

LAB179:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB180;

LAB181:    xsi_set_current_line(116, ng0);

LAB184:    xsi_set_current_line(117, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 2, 0LL);
    goto LAB183;

}

static void Always_121_6(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 7376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 8768);
    *((int *)t2) = 1;
    t3 = (t0 + 7408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(124, ng0);

LAB8:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB15;

LAB12:    if (t18 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB15:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(123, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB11;

LAB14:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(128, ng0);
    t26 = ((char*)((ng6)));
    t27 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 8, 0LL);
    goto LAB18;

}

static void Always_131_7(char *t0)
{
    char t13[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 7624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8784);
    *((int *)t2) = 1;
    t3 = (t0 + 7656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(133, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 24, 0LL);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(135, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = (t27 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB14;

LAB15:    xsi_set_current_line(136, ng0);
    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 16777215U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 16777215U);
    t43 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t43, t33, 0, 0, 24, 0LL);
    goto LAB17;

}

static void Always_138_8(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 7872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8800);
    *((int *)t2) = 1;
    t3 = (t0 + 7904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(140, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(142, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = (t27 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB14;

LAB15:    xsi_set_current_line(142, ng0);

LAB18:    xsi_set_current_line(143, ng0);
    t33 = (t0 + 1368U);
    t34 = *((char **)t33);
    t33 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 32, 0LL);
    goto LAB17;

}

static void Always_146_9(char *t0)
{
    char t13[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 8120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 8816);
    *((int *)t2) = 1;
    t3 = (t0 + 8152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(148, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(150, ng0);
    t27 = (t0 + 1528U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t28 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t27) == 0)
        goto LAB15;

LAB17:    t34 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t34) = 1;

LAB18:    t35 = (t26 + 4);
    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t38 = (~(t37));
    *((unsigned int *)t26) = t38;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t36) != 0)
        goto LAB20;

LAB19:    t43 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t43 & 1U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 & 1U);
    t45 = (t26 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t26);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB14;

LAB15:    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB20:    t39 = *((unsigned int *)t26);
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t26) = (t39 | t40);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t36);
    *((unsigned int *)t35) = (t41 | t42);
    goto LAB19;

LAB21:    xsi_set_current_line(150, ng0);

LAB24:    xsi_set_current_line(151, ng0);
    t51 = (t0 + 2968U);
    t52 = *((char **)t51);
    t51 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t51, t52, 0, 0, 32, 0LL);
    goto LAB23;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 9152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}


extern void work_m_00000000003569362060_3575872715_init()
{
	static char *pe[] = {(void *)Always_64_0,(void *)Cont_73_1,(void *)Cont_74_2,(void *)Cont_76_3,(void *)Cont_77_4,(void *)Always_79_5,(void *)Always_121_6,(void *)Always_131_7,(void *)Always_138_8,(void *)Always_146_9,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003569362060_3575872715", "isim/top_module_isim_beh.exe.sim/work/m_00000000003569362060_3575872715.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/gitproject/rarchhazi/spi_rom_proba/spi_interface.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {52U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Cont_46_0(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 7008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 8464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8320);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_59_1(char *t0)
{
    char t13[8];
    char t37[8];
    char t61[8];
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 7256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 8336);
    *((int *)t2) = 1;
    t3 = (t0 + 7288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
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

LAB6:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(136, ng0);

LAB94:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB95;

LAB96:
LAB97:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB98;

LAB99:
LAB100:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB104;

LAB102:    if (*((unsigned int *)t2) == 0)
        goto LAB101;

LAB103:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB104:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB106;

LAB105:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t12 = (t0 + 4488);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng7)));
    memset(t37, 0, 8);
    t29 = (t22 + 4);
    t35 = (t28 + 4);
    t24 = *((unsigned int *)t22);
    t25 = *((unsigned int *)t28);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t29);
    t30 = *((unsigned int *)t35);
    t31 = (t27 ^ t30);
    t32 = (t26 | t31);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t35);
    t40 = (t33 | t34);
    t41 = (~(t40));
    t42 = (t32 & t41);
    if (t42 != 0)
        goto LAB110;

LAB107:    if (t40 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t37) = 1;

LAB110:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t37);
    t45 = (t43 & t44);
    *((unsigned int *)t61) = t45;
    t38 = (t13 + 4);
    t39 = (t37 + 4);
    t52 = (t61 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 | t47);
    *((unsigned int *)t52) = t48;
    t49 = *((unsigned int *)t52);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB111;

LAB112:
LAB113:    t60 = (t61 + 4);
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t76 = *((unsigned int *)t61);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB121;

LAB119:    if (*((unsigned int *)t2) == 0)
        goto LAB118;

LAB120:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB121:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB123;

LAB122:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 1U);
    t12 = (t0 + 4488);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t29 = (t22 + 4);
    t35 = (t28 + 4);
    t24 = *((unsigned int *)t22);
    t25 = *((unsigned int *)t28);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t29);
    t30 = *((unsigned int *)t35);
    t31 = (t27 ^ t30);
    t32 = (t26 | t31);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t35);
    t40 = (t33 | t34);
    t41 = (~(t40));
    t42 = (t32 & t41);
    if (t42 != 0)
        goto LAB127;

LAB124:    if (t40 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t37) = 1;

LAB127:    t43 = *((unsigned int *)t13);
    t44 = *((unsigned int *)t37);
    t45 = (t43 & t44);
    *((unsigned int *)t61) = t45;
    t38 = (t13 + 4);
    t39 = (t37 + 4);
    t52 = (t61 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 | t47);
    *((unsigned int *)t52) = t48;
    t49 = *((unsigned int *)t52);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB128;

LAB129:
LAB130:    t60 = (t61 + 4);
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t76 = *((unsigned int *)t61);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB131;

LAB132:
LAB133:
LAB15:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(61, ng0);

LAB8:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 9, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(73, ng0);

LAB16:    xsi_set_current_line(74, ng0);
    t28 = (t0 + 1688U);
    t29 = *((char **)t28);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB19:    goto LAB15;

LAB17:    xsi_set_current_line(75, ng0);

LAB20:    xsi_set_current_line(76, ng0);
    t35 = (t0 + 1528U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB24;

LAB21:    if (t49 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t37) = 1;

LAB24:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1528U);
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
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB48:
LAB35:
LAB27:    goto LAB19;

LAB23:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(77, ng0);

LAB28:    xsi_set_current_line(78, ng0);
    t59 = (t0 + 1368U);
    t60 = *((char **)t59);
    t59 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t59, t60, 0, 0, 9, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB31:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t21 = (t0 + 3288U);
    t22 = *((char **)t21);
    t21 = (t22 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(89, ng0);

LAB41:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB39:    goto LAB35;

LAB37:    xsi_set_current_line(85, ng0);

LAB40:    xsi_set_current_line(86, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB39;

LAB44:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(97, ng0);

LAB49:    xsi_set_current_line(98, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 2, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB52:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(102, ng0);

LAB57:    xsi_set_current_line(103, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 2, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB56;

LAB58:    xsi_set_current_line(108, ng0);

LAB61:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB65;

LAB62:    if (t25 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t13) = 1;

LAB65:    t22 = (t13 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t13) = 1;

LAB81:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1528U);
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
        goto LAB89;

LAB86:    if (t18 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t13) = 1;

LAB89:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB84:
LAB76:
LAB68:    goto LAB60;

LAB64:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(110, ng0);

LAB69:    xsi_set_current_line(111, ng0);
    t28 = (t0 + 4168);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    memset(t37, 0, 8);
    t36 = (t37 + 4);
    t38 = (t35 + 4);
    t40 = *((unsigned int *)t35);
    t41 = (t40 >> 0);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    *((unsigned int *)t36) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t45 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t45 & 255U);
    t39 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 8, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB68;

LAB72:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(116, ng0);

LAB77:    xsi_set_current_line(117, ng0);
    t21 = (t0 + 4328);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB76;

LAB80:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(122, ng0);

LAB85:    xsi_set_current_line(123, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 2, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(127, ng0);

LAB93:    xsi_set_current_line(128, ng0);
    t21 = (t0 + 3448U);
    t22 = *((char **)t21);
    t21 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 8, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB92;

LAB95:    xsi_set_current_line(137, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB97;

LAB98:    xsi_set_current_line(138, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB100;

LAB101:    *((unsigned int *)t13) = 1;
    goto LAB104;

LAB106:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB105;

LAB109:    t36 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB110;

LAB111:    t51 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t61) = (t51 | t54);
    t53 = (t13 + 4);
    t59 = (t37 + 4);
    t55 = *((unsigned int *)t13);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = (t56 & t58);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t70 & t68);
    t71 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t71 & t69);
    t72 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t72 & t68);
    t73 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t73 & t69);
    goto LAB113;

LAB114:    xsi_set_current_line(140, ng0);

LAB117:    xsi_set_current_line(141, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB116;

LAB118:    *((unsigned int *)t13) = 1;
    goto LAB121;

LAB123:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB122;

LAB126:    t36 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB127;

LAB128:    t51 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t61) = (t51 | t54);
    t53 = (t13 + 4);
    t59 = (t37 + 4);
    t55 = *((unsigned int *)t13);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = (t56 & t58);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t70 & t68);
    t71 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t71 & t69);
    t72 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t72 & t68);
    t73 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t73 & t69);
    goto LAB130;

LAB131:    xsi_set_current_line(145, ng0);

LAB134:    xsi_set_current_line(146, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB133;

}

static void Cont_152_2(char *t0)
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

LAB0:    t1 = (t0 + 7504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 8352);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_153_3(char *t0)
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

LAB0:    t1 = (t0 + 7752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8592);
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
    t18 = (t0 + 8368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_154_4(char *t0)
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

LAB0:    t1 = (t0 + 8000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8656);
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
    t18 = (t0 + 8384);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003224589216_3575872715_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Always_59_1,(void *)Cont_152_2,(void *)Cont_153_3,(void *)Cont_154_4};
	xsi_register_didat("work_m_00000000003224589216_3575872715", "isim/test_top_module_isim_beh.exe.sim/work/m_00000000003224589216_3575872715.didat");
	xsi_register_executes(pe);
}

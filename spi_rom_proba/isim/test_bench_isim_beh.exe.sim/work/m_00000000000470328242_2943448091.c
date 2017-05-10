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
static const char *ng0 = "C:/Company/GitProject/rarchhazi/spi_rom_proba/top_module.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {268435455U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};



static void Initial_55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 125000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 3000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 2400000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 2000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000000470328242_2943448091_init()
{
	static char *pe[] = {(void *)Initial_55_0};
	xsi_register_didat("work_m_00000000000470328242_2943448091", "isim/test_bench_isim_beh.exe.sim/work/m_00000000000470328242_2943448091.didat");
	xsi_register_executes(pe);
}

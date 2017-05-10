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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001175013075_1335937114_init();
    work_m_00000000003569362060_3575872715_init();
    work_m_00000000000000000000_0562628521_init();
    work_m_00000000000470328242_2943448091_init();
    work_m_00000000001901698612_0432318104_init();
    work_m_00000000002538688998_2578365841_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002538688998_2578365841");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

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
    xilinxcorelib_ver_m_00000000001382328732_1231695146_init();
    xilinxcorelib_ver_m_00000000003461156251_2806488991_init();
    xilinxcorelib_ver_m_00000000001291582275_3729814683_init();
    work_m_00000000003630952586_0928249240_init();
    xilinxcorelib_ver_m_00000000001382328732_0515942125_init();
    xilinxcorelib_ver_m_00000000003461156251_1203486100_init();
    xilinxcorelib_ver_m_00000000001291582275_1626486713_init();
    work_m_00000000003630952586_1417920674_init();
    work_m_00000000001445074068_3944336044_init();
    work_m_00000000000746905542_3575872715_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000746905542_3575872715");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}

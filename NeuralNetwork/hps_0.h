#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'hps' in
 * file 'hps.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following master:
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'out_Storage', class 'altera_avalon_pio'
 * The macros are prefixed with 'OUT_STORAGE_'.
 * The prefix is the slave descriptor.
 */
#define OUT_STORAGE_COMPONENT_TYPE altera_avalon_pio
#define OUT_STORAGE_COMPONENT_NAME out_Storage
#define OUT_STORAGE_BASE 0x0
#define OUT_STORAGE_SPAN 16
#define OUT_STORAGE_END 0xf
#define OUT_STORAGE_BIT_CLEARING_EDGE_REGISTER 0
#define OUT_STORAGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUT_STORAGE_CAPTURE 0
#define OUT_STORAGE_DATA_WIDTH 24
#define OUT_STORAGE_DO_TEST_BENCH_WIRING 0
#define OUT_STORAGE_DRIVEN_SIM_VALUE 0
#define OUT_STORAGE_EDGE_TYPE NONE
#define OUT_STORAGE_FREQ 50000000
#define OUT_STORAGE_HAS_IN 1
#define OUT_STORAGE_HAS_OUT 0
#define OUT_STORAGE_HAS_TRI 0
#define OUT_STORAGE_IRQ_TYPE NONE
#define OUT_STORAGE_RESET_VALUE 0

/*
 * Macros for device 'out_Cons', class 'altera_avalon_pio'
 * The macros are prefixed with 'OUT_CONS_'.
 * The prefix is the slave descriptor.
 */
#define OUT_CONS_COMPONENT_TYPE altera_avalon_pio
#define OUT_CONS_COMPONENT_NAME out_Cons
#define OUT_CONS_BASE 0x10
#define OUT_CONS_SPAN 16
#define OUT_CONS_END 0x1f
#define OUT_CONS_BIT_CLEARING_EDGE_REGISTER 0
#define OUT_CONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUT_CONS_CAPTURE 0
#define OUT_CONS_DATA_WIDTH 24
#define OUT_CONS_DO_TEST_BENCH_WIRING 0
#define OUT_CONS_DRIVEN_SIM_VALUE 0
#define OUT_CONS_EDGE_TYPE NONE
#define OUT_CONS_FREQ 50000000
#define OUT_CONS_HAS_IN 1
#define OUT_CONS_HAS_OUT 0
#define OUT_CONS_HAS_TRI 0
#define OUT_CONS_IRQ_TYPE NONE
#define OUT_CONS_RESET_VALUE 0

/*
 * Macros for device 'Prop', class 'altera_avalon_pio'
 * The macros are prefixed with 'PROP_'.
 * The prefix is the slave descriptor.
 */
#define PROP_COMPONENT_TYPE altera_avalon_pio
#define PROP_COMPONENT_NAME Prop
#define PROP_BASE 0x20
#define PROP_SPAN 16
#define PROP_END 0x2f
#define PROP_BIT_CLEARING_EDGE_REGISTER 0
#define PROP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PROP_CAPTURE 0
#define PROP_DATA_WIDTH 1
#define PROP_DO_TEST_BENCH_WIRING 0
#define PROP_DRIVEN_SIM_VALUE 0
#define PROP_EDGE_TYPE NONE
#define PROP_FREQ 50000000
#define PROP_HAS_IN 0
#define PROP_HAS_OUT 1
#define PROP_HAS_TRI 0
#define PROP_IRQ_TYPE NONE
#define PROP_RESET_VALUE 0

/*
 * Macros for device 'addr_Cons', class 'altera_avalon_pio'
 * The macros are prefixed with 'ADDR_CONS_'.
 * The prefix is the slave descriptor.
 */
#define ADDR_CONS_COMPONENT_TYPE altera_avalon_pio
#define ADDR_CONS_COMPONENT_NAME addr_Cons
#define ADDR_CONS_BASE 0x30
#define ADDR_CONS_SPAN 16
#define ADDR_CONS_END 0x3f
#define ADDR_CONS_BIT_CLEARING_EDGE_REGISTER 0
#define ADDR_CONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ADDR_CONS_CAPTURE 0
#define ADDR_CONS_DATA_WIDTH 8
#define ADDR_CONS_DO_TEST_BENCH_WIRING 0
#define ADDR_CONS_DRIVEN_SIM_VALUE 0
#define ADDR_CONS_EDGE_TYPE NONE
#define ADDR_CONS_FREQ 50000000
#define ADDR_CONS_HAS_IN 0
#define ADDR_CONS_HAS_OUT 1
#define ADDR_CONS_HAS_TRI 0
#define ADDR_CONS_IRQ_TYPE NONE
#define ADDR_CONS_RESET_VALUE 0

/*
 * Macros for device 'wr_Cons', class 'altera_avalon_pio'
 * The macros are prefixed with 'WR_CONS_'.
 * The prefix is the slave descriptor.
 */
#define WR_CONS_COMPONENT_TYPE altera_avalon_pio
#define WR_CONS_COMPONENT_NAME wr_Cons
#define WR_CONS_BASE 0x40
#define WR_CONS_SPAN 16
#define WR_CONS_END 0x4f
#define WR_CONS_BIT_CLEARING_EDGE_REGISTER 0
#define WR_CONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WR_CONS_CAPTURE 0
#define WR_CONS_DATA_WIDTH 1
#define WR_CONS_DO_TEST_BENCH_WIRING 0
#define WR_CONS_DRIVEN_SIM_VALUE 0
#define WR_CONS_EDGE_TYPE NONE
#define WR_CONS_FREQ 50000000
#define WR_CONS_HAS_IN 0
#define WR_CONS_HAS_OUT 1
#define WR_CONS_HAS_TRI 0
#define WR_CONS_IRQ_TYPE NONE
#define WR_CONS_RESET_VALUE 0

/*
 * Macros for device 'in_Cons', class 'altera_avalon_pio'
 * The macros are prefixed with 'IN_CONS_'.
 * The prefix is the slave descriptor.
 */
#define IN_CONS_COMPONENT_TYPE altera_avalon_pio
#define IN_CONS_COMPONENT_NAME in_Cons
#define IN_CONS_BASE 0x50
#define IN_CONS_SPAN 16
#define IN_CONS_END 0x5f
#define IN_CONS_BIT_CLEARING_EDGE_REGISTER 0
#define IN_CONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IN_CONS_CAPTURE 0
#define IN_CONS_DATA_WIDTH 24
#define IN_CONS_DO_TEST_BENCH_WIRING 0
#define IN_CONS_DRIVEN_SIM_VALUE 0
#define IN_CONS_EDGE_TYPE NONE
#define IN_CONS_FREQ 50000000
#define IN_CONS_HAS_IN 0
#define IN_CONS_HAS_OUT 1
#define IN_CONS_HAS_TRI 0
#define IN_CONS_IRQ_TYPE NONE
#define IN_CONS_RESET_VALUE 0

/*
 * Macros for device 'wr_Storage', class 'altera_avalon_pio'
 * The macros are prefixed with 'WR_STORAGE_'.
 * The prefix is the slave descriptor.
 */
#define WR_STORAGE_COMPONENT_TYPE altera_avalon_pio
#define WR_STORAGE_COMPONENT_NAME wr_Storage
#define WR_STORAGE_BASE 0x60
#define WR_STORAGE_SPAN 16
#define WR_STORAGE_END 0x6f
#define WR_STORAGE_BIT_CLEARING_EDGE_REGISTER 0
#define WR_STORAGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WR_STORAGE_CAPTURE 0
#define WR_STORAGE_DATA_WIDTH 1
#define WR_STORAGE_DO_TEST_BENCH_WIRING 0
#define WR_STORAGE_DRIVEN_SIM_VALUE 0
#define WR_STORAGE_EDGE_TYPE NONE
#define WR_STORAGE_FREQ 50000000
#define WR_STORAGE_HAS_IN 0
#define WR_STORAGE_HAS_OUT 1
#define WR_STORAGE_HAS_TRI 0
#define WR_STORAGE_IRQ_TYPE NONE
#define WR_STORAGE_RESET_VALUE 0

/*
 * Macros for device 'addr_Storage', class 'altera_avalon_pio'
 * The macros are prefixed with 'ADDR_STORAGE_'.
 * The prefix is the slave descriptor.
 */
#define ADDR_STORAGE_COMPONENT_TYPE altera_avalon_pio
#define ADDR_STORAGE_COMPONENT_NAME addr_Storage
#define ADDR_STORAGE_BASE 0x70
#define ADDR_STORAGE_SPAN 16
#define ADDR_STORAGE_END 0x7f
#define ADDR_STORAGE_BIT_CLEARING_EDGE_REGISTER 0
#define ADDR_STORAGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ADDR_STORAGE_CAPTURE 0
#define ADDR_STORAGE_DATA_WIDTH 8
#define ADDR_STORAGE_DO_TEST_BENCH_WIRING 0
#define ADDR_STORAGE_DRIVEN_SIM_VALUE 0
#define ADDR_STORAGE_EDGE_TYPE NONE
#define ADDR_STORAGE_FREQ 50000000
#define ADDR_STORAGE_HAS_IN 0
#define ADDR_STORAGE_HAS_OUT 1
#define ADDR_STORAGE_HAS_TRI 0
#define ADDR_STORAGE_IRQ_TYPE NONE
#define ADDR_STORAGE_RESET_VALUE 0

/*
 * Macros for device 'sel_Storage', class 'altera_avalon_pio'
 * The macros are prefixed with 'SEL_STORAGE_'.
 * The prefix is the slave descriptor.
 */
#define SEL_STORAGE_COMPONENT_TYPE altera_avalon_pio
#define SEL_STORAGE_COMPONENT_NAME sel_Storage
#define SEL_STORAGE_BASE 0x80
#define SEL_STORAGE_SPAN 16
#define SEL_STORAGE_END 0x8f
#define SEL_STORAGE_BIT_CLEARING_EDGE_REGISTER 0
#define SEL_STORAGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEL_STORAGE_CAPTURE 0
#define SEL_STORAGE_DATA_WIDTH 4
#define SEL_STORAGE_DO_TEST_BENCH_WIRING 0
#define SEL_STORAGE_DRIVEN_SIM_VALUE 0
#define SEL_STORAGE_EDGE_TYPE NONE
#define SEL_STORAGE_FREQ 50000000
#define SEL_STORAGE_HAS_IN 0
#define SEL_STORAGE_HAS_OUT 1
#define SEL_STORAGE_HAS_TRI 0
#define SEL_STORAGE_IRQ_TYPE NONE
#define SEL_STORAGE_RESET_VALUE 0

/*
 * Macros for device 'in_Storage', class 'altera_avalon_pio'
 * The macros are prefixed with 'IN_STORAGE_'.
 * The prefix is the slave descriptor.
 */
#define IN_STORAGE_COMPONENT_TYPE altera_avalon_pio
#define IN_STORAGE_COMPONENT_NAME in_Storage
#define IN_STORAGE_BASE 0x90
#define IN_STORAGE_SPAN 16
#define IN_STORAGE_END 0x9f
#define IN_STORAGE_BIT_CLEARING_EDGE_REGISTER 0
#define IN_STORAGE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IN_STORAGE_CAPTURE 0
#define IN_STORAGE_DATA_WIDTH 24
#define IN_STORAGE_DO_TEST_BENCH_WIRING 0
#define IN_STORAGE_DRIVEN_SIM_VALUE 0
#define IN_STORAGE_EDGE_TYPE NONE
#define IN_STORAGE_FREQ 50000000
#define IN_STORAGE_HAS_IN 0
#define IN_STORAGE_HAS_OUT 1
#define IN_STORAGE_HAS_TRI 0
#define IN_STORAGE_IRQ_TYPE NONE
#define IN_STORAGE_RESET_VALUE 0

/*
 * Macros for device 'n_Layers', class 'altera_avalon_pio'
 * The macros are prefixed with 'N_LAYERS_'.
 * The prefix is the slave descriptor.
 */
#define N_LAYERS_COMPONENT_TYPE altera_avalon_pio
#define N_LAYERS_COMPONENT_NAME n_Layers
#define N_LAYERS_BASE 0xa0
#define N_LAYERS_SPAN 16
#define N_LAYERS_END 0xaf
#define N_LAYERS_BIT_CLEARING_EDGE_REGISTER 0
#define N_LAYERS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define N_LAYERS_CAPTURE 0
#define N_LAYERS_DATA_WIDTH 8
#define N_LAYERS_DO_TEST_BENCH_WIRING 0
#define N_LAYERS_DRIVEN_SIM_VALUE 0
#define N_LAYERS_EDGE_TYPE NONE
#define N_LAYERS_FREQ 50000000
#define N_LAYERS_HAS_IN 0
#define N_LAYERS_HAS_OUT 1
#define N_LAYERS_HAS_TRI 0
#define N_LAYERS_IRQ_TYPE NONE
#define N_LAYERS_RESET_VALUE 0


#endif /* _ALTERA_HPS_0_H_ */
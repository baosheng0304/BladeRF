/*!
 * \file t_mykonos.h
 * \brief Contains type definitions for Mykonos API
 *
 * Mykonos API version: 1.3.1.3534
 */

#ifndef _T_MYKONOS_LIB_H_
#define _T_MYKONOS_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "common.h"


/**
 *  \brief Enum of unique error codes from the Mykonos API functions.
 * Each error condition in the library should get its own enum value to allow
 * easy debug of errors.
 */
typedef enum
{
    MYKONOS_ERR_OK=0,
    MYKONOS_ERR_HAL_LAYER,
    MYKONOS_ERR_INV_PARM,
    MYKONOS_ERR_FAILED,
    MYKONOS_ERR_WAITFOREVENT_INV_PARM,
    MYKONOS_ERR_WAITFOREVENT_TIMEDOUT,
    MYKONOS_ERR_SETENSM_INVALID_NEWSTATE_WAIT,
    MYKONOS_ERR_SETENSM_INVALID_NEWSTATE_ALERT,
    MYKONOS_ERR_SETENSM_INVALID_NEWSTATE_TXRX,
    MYKONOS_ERR_SETENSM_INVALIDSTATE,
    MYKONOS_ERR_PU_RXPATH_INV_PARAM,
    MYKONOS_ERR_PU_TXPATH_INV_PARAM,
    MYKONOS_ERR_PU_OBSRXPATH_INV_PARAM,
    MYKONOS_ERR_INIT_INV_ORXCHAN,
    MYKONOS_ERR_INIT_INV_RXSYNCB_ORXSYNCB_MODE,
    MYKONOS_ERR_INIT_INV_TXFIR_INTERPOLATION,
    MYKONOS_ERR_INIT_INV_TXHB2_INTERPOLATION,
    MYKONOS_ERR_INIT_INV_TXHB1_INTERPOLATION,
    MYKONOS_ERR_INIT_INV_RXFIR_DECIMATION,
    MYKONOS_ERR_INIT_INV_RXDEC5_DECIMATION,
    MYKONOS_ERR_INIT_INV_RXHB1_DECIMATION,
    MYKONOS_ERR_INIT_INV_SNIFFER_RHB1,
    MYKONOS_ERR_INIT_INV_SNIFFER_RFIR_DEC,
    MYKONOS_ERR_INIT_INV_ORX_RHB1,
    MYKONOS_ERR_INIT_INV_ORX_RFIR_DEC,
    MYKONOS_ERR_INIT_INV_ADCDIV,
    MYKONOS_ERR_INIT_INV_DACDIV,
    MYKONOS_ERR_INIT_INV_OBSRX_ADCDIV,
    MYKONOS_ERR_CLKPLL_INV_HSDIV,
    MYKONOS_ERR_CLKPLL_INV_VCODIV,
    MYKONOS_ERR_CLKPLL_INV_RXTXPROFILES,
    MYKONOS_ERR_SETCLKPLL_INV_VCOINDEX,
    MYKONOS_ERR_SETCLKPLL_INV_FRACWORD,
    MYKONOS_ERR_SETRFPLL_INV_PLLNAME,
    MYKONOS_ERR_SETRFPLL_INV_LO_PARM,
    MYKONOS_ERR_INV_SCALEDDEVCLK_PARAM,
    MYKONOS_ERR_NULL_DEVICE_PARAM,
    MYKONOS_ERR_CALCDEVCLK_NULLPARAM,
    MYKONOS_ERR_SETRFPLL_INV_VCOINDEX,
    MYKONOS_ERR_SETRFPLL_INV_REFCLK,
    MYKONOS_ERR_SETORXGAIN_INV_CHANNEL,
    MYKONOS_ERR_SETORXGAIN_INV_GAIN,
    MYKONOS_ERR_GETORX1GAIN_INV_POINTER,
    MYKONOS_ERR_GETORX2GAIN_INV_POINTER,
    MYKONOS_ERR_GETSNIFFGAIN_INV_POINTER,
    MYKONOS_ERR_GETOBSRXGAIN_CH_DISABLED,
    MYKONOS_ERR_SETTX1ATTEN_INV_PARM,
    MYKONOS_ERR_SETTX1ATTEN_INV_STEPSIZE_PARM,
    MYKONOS_ERR_SETTX2ATTEN_INV_PARM,
    MYKONOS_ERR_SETTX2ATTEN_INV_STEPSIZE_PARM,
    MYKONOS_ERR_PROGRAMFIR_INV_NUMTAPS_PARM,
    MYKONOS_ERR_PROGRAMFIR_INV_FIRNAME_PARM,
    MYKONOS_ERR_RXFIR_INV_GAIN_PARM,
    MYKONOS_ERR_OBSRXFIR_INV_GAIN_PARM,
    MYKONOS_ERR_SRXFIR_INV_GAIN_PARM,
    MYKONOS_ERR_TXFIR_INV_GAIN_PARM,
    MYKONOS_ERR_READFIR_NULL_PARM,
    MYKONOS_ERR_READFIR_COEFS_NULL,
    MYKONOS_ERR_READFIR_INV_FIRNAME_PARM,
    MYKONOS_ERR_READFIR_INV_NUMTAPS_PARM,
    MYKONOS_ERR_SETRX1GAIN_INV_GAIN_PARM,
    MYKONOS_ERR_SETRX2GAIN_INV_GAIN_PARM,
    MYKONOS_ERR_INITSER_INV_VCODIV_PARM,
    MYKONOS_ERR_INITDES_INV_VCODIV_PARM,
    MYKONOS_ERR_SER_INV_M_PARM,
    MYKONOS_ERR_SER_INV_L_PARM,
    MYKONOS_ERR_SER_INV_HSCLK_PARM,
    MYKONOS_ERR_SER_INV_LANERATE_PARM,
    MYKONOS_ERR_SER_INV_LANEEN_PARM,
    MYKONOS_ERR_SER_INV_AMP_PARM,
    MYKONOS_ERR_SER_INV_PREEMP_PARM,
    MYKONOS_ERR_SER_INV_LANEPN_PARM,
    MYKONOS_ERR_SER_LANE_CONFLICT_PARM,
    MYKONOS_ERR_SER_INV_TXSER_DIV_PARM,
    MYKONOS_ERR_SER_LANE_RATE_CONFLICT_PARM,
    MYKONOS_ERR_SER_INV_REAL_IF_DATA_PARM,
    MYKONOS_ERR_HS_AND_LANE_RATE_NOT_INTEGER_MULT,
    MYKONOS_ERR_DES_HS_AND_LANE_RATE_NOT_INTEGER_MULT,
    MYKONOS_ERR_DESER_INV_M_PARM,
    MYKONOS_ERR_DESER_INV_L_PARM,
    MYKONOS_ERR_DESER_INV_HSCLK_PARM,
    MYKONOS_ERR_DESER_INV_LANERATE_PARM,
    MYKONOS_ERR_DESER_INV_LANEEN_PARM,
    MYKONOS_ERR_DESER_INV_EQ_PARM,
    MYKONOS_ERR_DESER_INV_LANEPN_PARM,
    MYKONOS_ERR_FRAMER_INV_M_PARM,
    MYKONOS_ERR_FRAMER_INV_BANKID_PARM,
    MYKONOS_ERR_FRAMER_INV_LANEID_PARM,
    MYKONOS_ERR_FRAMER_INV_K_OFFSET_PARAM,
    MYKONOS_ERR_FRAMER_INV_REAL_IF_DATA_PARM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_M_PARM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_BANKID_PARM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_LANEID_PARM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_K_OFFSET_PARAM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_REAL_IF_DATA_PARM,
    MYKONOS_ERR_DEFRAMER_INV_M_PARM,
    MYKONOS_ERR_DEFRAMER_INV_BANKID_PARM,
    MYKONOS_ERR_ERR_DEFRAMER_INV_LANEID_PARM,
    MYKONOS_ERR_DEFRAMER_INV_K_OFFSET_PARAM,
    MYKONOS_ERR_DEFRAMER_INV_K_PARAM,
    MYKONOS_ERR_DEFRAMER_INV_FK_PARAM,
    MYKONOS_ERR_RX_FRAMER_INV_PRBS_POLYORDER_PARAM,
    MYKONOS_ERR_OBSRX_FRAMER_INV_PRBS_POLYORDER_PARAM,
    MYKONOS_ERR_DEFRAMER_INV_PRBS_ENABLE_PARAM,
    MYKONOS_ERR_DEFRAMER_INV_PRBS_POLYORDER_PARAM,
    MYKONOS_ERR_DEFRAMER_INV_PRBS_CNTR_SEL_PARAM,
    MYKONOS_ERR_INITARM_INV_DATARATE_PARM,
    MYKONOS_ERR_INITARM_INV_REGCLK,
    MYKONOS_ERR_INITARM_INV_ARMCLK_PARAM,
    MYKONOS_ERR_LOADHEX_INV_CHARCOUNT,
    MYKONOS_ERR_LOADHEX_INVALID_FIRSTCHAR,
    MYKONOS_ERR_LOADHEX_INVALID_CHKSUM,
    MYKONOS_ERR_LOADBIN_INVALID_BYTECOUNT,
    MYKONOS_ERR_ARM_INVALID_BUILDCHKSUM,
    MYKONOS_ERR_READARMMEM_INV_ADDR_PARM,
    MYKONOS_ERR_WRITEARMMEM_INV_ADDR_PARM,
    MYKONOS_ERR_ARMCMD_INV_OPCODE_PARM,
    MYKONOS_ERR_ARMCMD_INV_NUMBYTES_PARM,
    MYKONOS_ERR_ARMCMDSTATUS_INV_OPCODE_PARM,
    MYKONOS_ERR_CHECKDEVSTRUCT_SPI,
    MYKONOS_ERR_CHECKDEVSTRUCT_RX,
    MYKONOS_ERR_CHECKDEVSTRUCT_RXSUB,
    MYKONOS_ERR_CHECKDEVSTRUCT_RXFIR,
    MYKONOS_ERR_CHECKDEVSTRUCT_TX,
    MYKONOS_ERR_CHECKDEVSTRUCT_TXSUB,
    MYKONOS_ERR_CHECKDEVSTRUCT_TXFIR,
    MYKONOS_ERR_CHECKDEVSTRUCT_OBSRX,
    MYKONOS_ERR_CHECKDEVSTRUCT_OBSRXSUB,
    MYKONOS_ERR_CHECKDEVSTRUCT_SNIFFERFIR,
    MYKONOS_ERR_CHECKDEVSTRUCT_ORXFIR,
    MYKONOS_ERR_CHECKDEVSTRUCT_ORXGAINCTRL,
    MYKONOS_ERR_CHECKDEVSTRUCT_SNIFFERGAINCTRL,
    MYKONOS_ERR_CHECKDEVSTRUCT_OBSRXFRAMER,
    MYKONOS_ERR_INITSER_INV_PROFILE,
    MYKONOS_ERR_INITDES_INV_TXPROFILE,
    MYKONOS_ERR_JESD204B_ILAS_MISMATCH,
    MYKONOS_ERR_RXGAINTABLE_INV_CHANNEL,
    MYKONOS_ERR_RXGAINTABLE_INV_GAIN_INDEX_RANGE,
    MYKONOS_ERR_WRITE_CFG_MEMORY_FAILED,
	MYKONOS_ERR_INV_RXFRAMER_PCLKDIV_PARM,
	MYKONOS_ERR_RXFRAMER_INV_FK_PARAM,
	MYKONOS_ERR_OBSRXFRAMER_INV_FK_PARAM,
    MYKONOS_ERR_INV_OBSRXFRAMER_PCLKDIV_PARM,
    MYKONOS_ERR_PU_OBSRXPATH_INV_LOSOURCE_PARAM,
    MYKONOS_ERR_ARM_RADIOON_FAILED,
    MYKONOS_ERR_INV_RX_GAIN_MODE_PARM,
    MYKONOS_ERR_INV_ORX_GAIN_MODE_PARM,
    MYKONOS_ERR_INV_AGC_RX_STRUCT_INIT,
    MYKONOS_ERR_INV_AGC_RX_APD_THRESH_DIFF_VS_ATTACK_GAIN_STEP,
    MYKONOS_ERR_INV_AGC_RX_PEAK_WAIT_TIME_PARM,
    MYKONOS_ERR_INV_AGC_RX_GAIN_UPDATE_TIME_PARM,
    MYKONOS_ERR_INV_AGC_RX_APD_HIGH_THRESH_PARM,
    MYKONOS_ERR_INV_AGC_RX_APD_LOW_THRESH_PARM,
    MYKONOS_ERR_INV_AGC_RX_BLOCK_DET_DECAY_PARM,
    MYKONOS_ERR_INV_AGC_RX_APD_GAIN_STEP_PARM,
    MYKONOS_ERR_INV_AGC_RX_HB2_GAIN_STEP_PARM,
    MYKONOS_ERR_INV_AGC_RX_RECOVERY_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_PMD_MEAS_CONFIG,
	MYKONOS_ERR_INV_AGC_PMD_MEAS_DURATION,
	MYKONOS_ERR_INV_AGC_RX_ENABLE_SYNC_PULSE_GAIN_COUNTER,
	MYKONOS_ERR_INV_AGC_RX_LOW_THS_PREV_GAIN_INC,
	MYKONOS_ERR_INV_AGC_RX_PEAK_STRUCT_INIT,
	MYKONOS_ERR_INV_AGC_RX_PEAK_THRESH_MODE,
	MYKONOS_ERR_INV_AGC_RX_PWR_STRUCT_INIT,
	MYKONOS_ERR_INV_AGC_RX_RESET_ON_RX_ENABLE,
	MYKONOS_ERR_INV_AGC_RX_SLOW_LOOP_SETTLING_DELAY,
	MYKONOS_ERR_INV_AGC_RX1_MAX_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_RX1_MIN_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_RX2_MAX_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_RX2_MIN_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_RX_PMD_LOWER_HIGH_THRESH,
	MYKONOS_ERR_INV_AGC_RX_PMD_LOWER_LOW_THRESH,
	MYKONOS_ERR_INV_AGC_RX_PMD_UPPER_HIGH_THRESH,
	MYKONOS_ERR_INV_AGC_RX_PMD_UPPER_LOW_THRESH,
	MYKONOS_ERR_INV_AGC_RX_PMD_LOWER_LOW_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_RX_PMD_LOWER_HIGH_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_RX_PMD_UPPER_LOW_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_RX_PMD_UPPER_HIGH_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_RX_APD_HIGH_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_RX_APD_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_HIGH_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_HIGH_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_LOW_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_VERY_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_RX_HB2_VERY_LOW_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_RX_PKDET_FAST_ATTACK_VALUE,
	MYKONOS_ERR_INV_AGC_RX_HB2_OVLD_ENABLE,
	MYKONOS_ERR_INV_AGC_RX_HB2_OVLD_DUR_CNT,
	MYKONOS_ERR_INV_AGC_RX_HB2_OVLD_THRESH_CNT,
    MYKONOS_ERR_INV_AGC_OBSRX_STRUCT_INIT,
    MYKONOS_ERR_INV_AGC_OBSRX_APD_THRESH_DIFF_VS_ATTACK_GAIN_STEP,
    MYKONOS_ERR_INV_AGC_OBSRX_PEAK_WAIT_TIME_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_GAIN_UPDATE_TIME_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_APD_HIGH_THRESH_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_APD_LOW_THRESH_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_BLOCK_DET_DECAY_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_APD_GAIN_STEP_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_HB2_GAIN_STEP_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_RECOVERY_GAIN_STEP_PARM,
    MYKONOS_ERR_INV_AGC_OBSRX_MAX_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX_MIN_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX_SELECT,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_MEAS_CONFIG,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_MEAS_DURATION,
	MYKONOS_ERR_INV_AGC_OBSRX_ENABLE_SYNC_PULSE_GAIN_COUNTER,
	MYKONOS_ERR_INV_AGC_OBSRX_LOW_THS_PREV_GAIN_INC,
	MYKONOS_ERR_INV_AGC_OBSRX_PEAK_STRUCT_INIT,
	MYKONOS_ERR_INV_AGC_OBSRX_PEAK_THRESH_MODE,
	MYKONOS_ERR_INV_AGC_OBSRX_PWR_STRUCT_INIT,
	MYKONOS_ERR_INV_AGC_OBSRX_RESET_ON_RX_ENABLE,
	MYKONOS_ERR_INV_AGC_OBSRX_SLOW_LOOP_SETTLING_DELAY,
	MYKONOS_ERR_INV_AGC_OBSRX1_MAX_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX1_MIN_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX2_MAX_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX2_MIN_GAIN_INDEX,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_LOWER_HIGH_THRESH,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_LOWER_LOW_THRESH,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_UPPER_HIGH_THRESH,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_UPPER_LOW_THRESH,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_LOWER_LOW_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_LOWER_HIGH_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_UPPER_LOW_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_OBSRX_PMD_UPPER_HIGH_GAIN_STEP,
	MYKONOS_ERR_INV_AGC_OBSRX_APD_HIGH_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_APD_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_HIGH_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_HIGH_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_LOW_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_VERY_LOW_GAIN_STEP_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_VERY_LOW_THRESH_PARM,
	MYKONOS_ERR_INV_AGC_OBSRX_PKDET_FAST_ATTACK_VALUE,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_OVLD_ENABLE,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_OVLD_DUR_CNT,
	MYKONOS_ERR_INV_AGC_OBSRX_HB2_OVLD_THRESH_CNT,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_CALPLL_LOCK,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_CLKPLLCP,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_CLKPLL_LOCK,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RXPLLCP,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RXPLL_LOCK,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_TXPLLCP,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_TXPLL_LOCK,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_SNIFFPLLCP,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_SNIFFPLL_LOCK,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RXBBFCALDONE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_TXBBFCALDONE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RFDCCALDONE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_ADCTUNECALDONE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RX1ADCPROFILE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RX2ADCPROFILE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_ORXADCPROFILE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_RCALDONE,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_ARMBUSY,
	MYKONOS_ERR_WAITFOREVENT_TIMEDOUT_INITARMDONE,
	MYKONOS_ERR_TIMEDOUT_ARMMAILBOXBUSY,
	MYKONOS_ERR_PU_OBSRXPATH_ARMERROR,
	MYKONOS_ERR_EN_TRACKING_CALS_ARMSTATE_ERROR,
	MYKONOS_ERR_EN_TRACKING_CALS_ARMERROR,
	MYKONOS_ERR_SETRFPLL_ARMERROR,
	MYKONOS_ERR_INIT_INV_TXINPUTHB_PARM,
	MYKONOS_ERR_LOAD_ADCPROFILE_INV_VCODIV,
	MYKONOS_ERR_LOAD_ADCPROFILE_CUSTOM_RXREQUIRED,
	MYKONOS_ERR_LOAD_ADCPROFILE_CUSTOM_ORXREQUIRED,
	MYKONOS_ERR_LOAD_ADCPROFILE_CUSTOM_SNRXREQUIRED,
	MYKONOS_ERR_SETUP_PA_PROT_INV_AVG_DURATION,
	MYKONOS_ERR_SETUP_PA_PROT_INV_STICKY_ENABLE,
	MYKONOS_ERR_SETUP_PA_PROT_INV_ATTEN_STEP,
	MYKONOS_ERR_SETUP_PA_PROT_INV_ATTEN_ENABLE,
	MYKONOS_ERR_SETUP_PA_PROT_INV_POWER_THRESH,
	MYKONOS_ERR_SETUP_PA_PROT_INV_TX_CHANNEL,
	MYKONOS_ERR_GET_DAC_PWR_INV_POINTER,
	MYKONOS_ERR_GET_PA_FLAG_STATUS_INV_POINTER,
	MYKONOS_ERR_GET_OBSRX_OVERLOADS_NULL_PARM,
	MYKONOS_ERR_GET_RX1_OVERLOADS_NULL_PARM,
	MYKONOS_ERR_GET_RX2_OVERLOADS_NULL_PARM,
	MYKONOS_ERR_GETRADIOSTATE_NULL_PARAM,
	MYKONOS_ERR_ABORT_INITCALS_NULL_PARAM,
	MYKONOS_ERR_ARM_RADIOOFF_FAILED,
	MYKONOS_ERR_WAIT_INITCALS_NULL_PARAM,
	MYKONOS_ERR_WAIT_INITCALS_CALFAILED,
	MYKONOS_ERR_WAIT_INITCALS_ARMERROR,
	MYKONOS_ERR_CHECK_PLL_LOCK_NULL_PARM,
	MYKONOS_ERR_GET_TXFILTEROVRG_NULL_PARM,
	MYKONOS_ERR_PROGRAM_RXGAIN_TABLE_NULL_PARM,
	MYKONOS_ERR_PROGRAMFIR_NULL_PARM,
	MYKONOS_ERR_PROGRAMFIR_COEFS_NULL,
	MYKONOS_ERR_READ_DEFRAMERSTATUS_NULL_PARAM,
	MYKONOS_ERR_READ_DEFRAMERPRBS_NULL_PARAM,
	MYKONOS_ERR_READ_ORXFRAMERSTATUS_NULL_PARAM,
	MYKONOS_ERR_READ_RXFRAMERSTATUS_NULL_PARAM,
	MYKONOS_ERR_ARMCMDSTATUS_NULL_PARM,
	MYKONOS_ERR_READARMCMDSTATUS_INV_OPCODE_PARM,
	MYKONOS_ERR_READARMCMDSTATUS_NULL_PARM,
	MYKONOS_ERR_READARMCMDSTATUSBYTE_NULL_PARM,
	MYKONOS_ERR_ARMCMD_NULL_PARM,
	MYKONOS_ERR_WRITEARMMEM_NULL_PARM,
	MYKONOS_ERR_LOADBIN_NULL_PARAM,
	MYKONOS_ERR_GETTX1ATTEN_NULL_PARM,
	MYKONOS_ERR_GETTX2ATTEN_NULL_PARM,
	MYKONOS_ERR_ENFRAMERLINK_INV_LANESEN_PARM,
	MYKONOS_ERR_ENOBSFRAMERLINK_INV_LANESEN_PARM,
	MYKONOS_ERR_ENTXNCO_TXPROFILE_INVALID,
	MYKONOS_ERR_ENTXNCO_TX1_FREQ_INVALID,
	MYKONOS_ERR_ENTXNCO_TX2_FREQ_INVALID,
	MYKONOS_ERR_JESD204B_ILAS_MISMATCH_NULLPARAM,
	MYKONOS_ERR_LOAD_LBADCPROFILE_ARMMEM_FAILED,
	MYKONOS_ERR_LOAD_SNRXADCPROFILE_ARMMEM_FAILED,
	MYKONOS_ERR_LOAD_ADCPROFILE_SNRX_ADCDIV_ZERO,
	MYKONOS_ERR_LOAD_ORXADCPROFILE_ARMMEM_FAILED,
	MYKONOS_ERR_LOAD_ADCPROFILE_ORXADCDIV_ZERO,
	MYKONOS_ERR_LOAD_RXADCPROFILE_ARMMEM_FAILED,
	MYKONOS_ERR_LOAD_ADCPROFILE_RXADCDIV_ZERO,
	MYKONOS_ERR_LOAD_ADCPROFILE_CUSTOM_LBREQUIRED,
	MYKONOS_ERR_LOAD_ADCPROFILE_MISSING_ORX_PROFILE,
	MYKONOS_ERR_GETRFPLL_INV_PLLNAME,
	MYKONOS_ERR_GETRFPLL_ARMERROR,
	MYKONOS_ERR_GETRFPLL_NULLPARAM,
	MYKONOS_ERR_INITARM_INV_VCODIV,
	MYKONOS_ERR_GET_PLLFREQ_INV_HSDIV,
	MYKONOS_ERR_GET_PLLFREQ_INV_REFCLKDIV,
	MYKONOS_ERR_SETORXGAIN_INV_ORX1GAIN,
	MYKONOS_ERR_SETORXGAIN_INV_ORX2GAIN,
	MYKONOS_ERR_SETORXGAIN_INV_SNRXGAIN,
	MYKONOS_ERR_GET_RX1_DEC_POWER_NUM_SAMPLES,
	MYKONOS_ERR_GET_RX1_DEC_POWER_NULL_PARM,
	MYKONOS_ERR_GET_RX2_DEC_POWER_NUM_SAMPLES,
	MYKONOS_ERR_GET_RX2_DEC_POWER_NULL_PARM,
	MYKONOS_ERR_GET_OBSRX_DEC_POWER_NUM_SAMPLES,
	MYKONOS_ERR_GET_OBSRX_DEC_POWER_NULL_PARM,
	MYKONOS_ERR_GETARMVER_NULL_PARM,
	MYKONOS_ERR_EN_CLGCTRACKING_ARMSTATE_ERROR,
	MYKONOS_ERR_EN_DPDTRACKING_ARMSTATE_ERROR,
	MYKONOS_ERR_RESTDPDMOD_WRONGBUFFERSIZE,
	MYKONOS_ERR_RESTDPDMOD_ARMSTATE,
	MYKONOS_ERR_RESTDPDMOD_INVALID_TXCHANNEL,
	MYKONOS_ERR_RESTDPDMOD_ARMERRFLAG,
	MYKONOS_ERR_SAVDPDMOD_WRONGBUFFERSIZE,
	MYKONOS_ERR_SAVDPDMOD_ARMSTATE,
	MYKONOS_ERR_SAVDPDMOD_INVALID_TXCHANNEL,
	MYKONOS_ERR_SAVDPDMOD_ARMERRFLAG,
 	MYKONOS_ERR_WRITEARMCFG_ARMERRFLAG,
	MYKONOS_ERR_CFGDPD_TXORX_PROFILE_INV,
	MYKONOS_ERR_CFGDPD_NULL_DPDCFGSTRUCT,
	MYKONOS_ERR_CFGDPD_ARMSTATE_ERROR,
	MYKONOS_ERR_CFGDPD_INV_DPDDAMPING,
	MYKONOS_ERR_CFGDPD_INV_DPDSAMPLES,
	MYKONOS_ERR_CFGDPD_INV_DPDOUTLIERTHRESH,
	MYKONOS_ERR_CFGDPD_INV_DPDPRIORWEIGHT,
	MYKONOS_ERR_CFGCLGC_INV_DESIREDGAIN,
	MYKONOS_ERR_CFGCLGC_INV_TXATTENLIMIT,
	MYKONOS_ERR_CFGCLGC_INV_CLGC_CTRLRATIO,
	MYKONOS_ERR_SETCLGCGAIN_INV_DESIREDGAIN,
	MYKONOS_ERR_SETCLGCGAIN_INV_TXCHANNEL,
	MYKONOS_ERR_SETCLGCGAIN_TRACK_ARMERRFLAG,
	MYKONOS_ERR_CFGDPD_INV_DPD_ADDDELAY,
	MYKONOS_ERR_CFGDPD_INV_PNSEQLEVEL,
	MYKONOS_ERR_READARMCFG_ARMERRFLAG,
	MYKONOS_ERR_GETPENDTRKCALS_NULL_PARAM,
	MYKONOS_ERR_ARMCMDSTATUS_ARMERROR,
	MYKONOS_ERR_WAITARMCMDSTATUS_TIMEOUT,
	MYKONOS_ERR_PU_GETOBSRXPATH_ARMERROR,
	MYKONOS_ERR_GETDPDCFG_NULL_DPDCFGSTRUCT,
	MYKONOS_ERR_GETDPDCFG_TXORX_PROFILE_INV,
	MYKONOS_ERR_GETDPDSTATUS_ARMERRFLAG,
	MYKONOS_ERR_GETDPDSTATUS_NULLPARAM,
	MYKONOS_ERR_SETDEFOBSRXPATH_NULL_OBSRX_STRUCT,
	MYKONOS_ERR_SETDEFOBSRXPATH_NULL_DEF_OBSRX_STRUCT,
	MYKONOS_ERR_GETCLGCSTATUS_NULLPARAM,
	MYKONOS_ERR_GETCLGCSTATUS_ARMERRFLAG,
	MYKONOS_ERR_CHECKDEVSTRUCT_NULLDEVPOINTER,
	MYKONOS_ERR_READ_DEFFIFODEPTH_NULL_PARAM,
	MYKONOS_ERR_READ_DEFFIFODEPTH_LMFCCOUNT_NULL_PARAM,
	MYKONOS_ERR_GETDPDSTATUS_INV_CH,
	MYKONOS_ERR_GETCLGCSTATUS_INV_CH,
	MYKONOS_ERR_INIT_INV_TXINPUTHB_INV_RATE,
	MYKONOS_ERR_INIT_INV_TXINPUTHB0_INV_RATE,
	MYKONOS_ERR_TXFIR_TAPSEXCEEDED,
	MYKONOS_ERR_TXFIR_INV_NUMROWS,
    MYKONOS_ERR_TXFIR_INV_NUMTAPS_PARM,
	MYKONOS_ERR_RXFIR_TAPSEXCEEDED,
	MYKONOS_ERR_ORXFIR_TAPSEXCEEDED,
	MYKONOS_ERR_SNRXFIR_TAPSEXCEEDED,
	MYKONOS_ERR_GETINITCALSTATUS_NULL_PARAM,
	MYKONOS_ERR_GETINITCALSTATUS_ARMERROR,
	MYKONOS_ERR_CFGDPD_INV_NUMWEIGHTS,
	MYKONOS_ERR_CFGDPD_INV_MODELVERSION,
	MYKONOS_ERR_SETDPDACT_INV_TXCHANNEL,
	MYKONOS_ERR_SETDPDACT_INV_STATE,
	MYKONOS_ERR_SETDPDACT_ARMERRFLAG,
	MYKONOS_ERR_CFGCLGC_TXORX_PROFILE_INV,
	MYKONOS_ERR_CFGCLGC_NULL_CLGCCFGSTRUCT,
	MYKONOS_ERR_CFGCLGC_ARMSTATE_ERROR,
	MYKONOS_ERR_GETCLGCCFG_TXORX_PROFILE_INV,
	MYKONOS_ERR_GETCLGCCFG_NULL_CFGSTRUCT,
	MYKONOS_ERR_CALCDIGCLK_NULLDEV_PARAM,
	MYKONOS_ERR_CALCDIGCLK_NULL_CLKSTRUCT,
	MYKONOS_ERR_CFGCLGC_INV_CLGC_ADDDELAY,
	MYKONOS_ERR_CFGCLGC_INV_PNSEQLEVEL,
	MYKONOS_ERR_CFGVSWR_TXORX_PROFILE_INV,
	MYKONOS_ERR_CFGVSWR_ARMSTATE_ERROR,
	MYKONOS_ERR_CFGVSWR_INV_3P3GPIOPIN,
	MYKONOS_ERR_CFGVSWR_INV_PNSEQLEVEL,
	MYKONOS_ERR_CFGVSWR_INV_VSWR_ADDDELAY,
	MYKONOS_ERR_CFGVSWR_NULL_VSWRCFGSTRUCT,
	MYKONOS_ERR_GETVSWRCFG_NULL_CFGSTRUCT,
	MYKONOS_ERR_GETVSWRCFG_TXORX_PROFILE_INV,
	MYKONOS_ERR_GETVSWRSTATUS_ARMERRFLAG,
	MYKONOS_ERR_GETVSWRSTATUS_INV_CH,
	MYKONOS_ERR_GETVSWRSTATUS_NULLPARAM,
	MYKONOS_ERR_SET_RX_MAX_GAIN_INDEX,
	MYKONOS_ERR_SET_RX_MIN_GAIN_INDEX,
	MYKONOS_ERR_AGC_MIN_MAX_RX_CHANNEL,
	MYKONOS_ERR_SET_ORX_MAX_GAIN_INDEX_CHANNEL,
	MYKONOS_ERR_SET_ORX_MAX_GAIN_INDEX,
	MYKONOS_ERR_SET_ORX_MIN_GAIN_INDEX,
	MYKONOS_ERR_AGC_MIN_MAX_ORX_CHANNEL,
	MYKONOS_ERR_RX1_TEMP_GAIN_COMP_RANGE,
	MYKONOS_ERR_RX2_TEMP_GAIN_COMP_RANGE,
	MYKONOS_ERR_OBS_RX_TEMP_GAIN_COMP_RANGE,
	MYKONOS_ERR_RX1_TEMP_GAIN_COMP_STEP,
	MYKONOS_ERR_RX2_TEMP_GAIN_COMP_STEP,
	MYKONOS_ERR_OBS_RX_TEMP_GAIN_COMP_STEP,
	MYKONOS_ERR_RX1_TEMP_GAIN_COMP_NULL,
	MYKONOS_ERR_RX2_TEMP_GAIN_COMP_NULL,
	MYKONOS_ERR_OBS_RX_TEMP_GAIN_COMP_NULL,
	MYKONOS_ERR_GETTXLOLSTATUS_NULLPARAM,
	MYKONOS_ERR_GETTXLOLSTATUS_INV_CH,
	MYKONOS_ERR_GETTXLOLSTATUS_ARMERRFLAG,
	MYKONOS_ERR_GETTXQECSTATUS_NULLPARAM,
	MYKONOS_ERR_GETTXQECSTATUS_INV_CH,
	MYKONOS_ERR_GETTXQECSTATUS_ARMERRFLAG,
    MYKONOS_ERR_GETRXQECSTATUS_NULLPARAM,
    MYKONOS_ERR_GETRXQECSTATUS_INV_CH,
    MYKONOS_ERR_GETRXQECSTATUS_ARMERRFLAG,
    MYKONOS_ERR_GETORXQECSTATUS_NULLPARAM,
    MYKONOS_ERR_GETORXQECSTATUS_INV_CH,
    MYKONOS_ERR_GETORXQECSTATUS_ARMERRFLAG,
    MYKONOS_ERR_RESCHEDULE_TRACK_CAL_INV,
    MYKONOS_ERR_RESCHEDULE_TRACK_ARMERRFLAG,

    MYKONOS_ERR_SETSTATEALL_TRACK_CAL_INV,
    MYKONOS_ERR_SETSTATEALL_TRACK_ARMERRFLAG,

    MYKONOS_ERR_GETSTATEALL_TRACK_NULL_PARAM,
    MYKONOS_ERR_GETSTATEALL_TRACK_ARMERRFLAG,
    MYKONOS_ERR_GETSTATEALL_TRACK_ARMERROR,

    MYKONOS_ERR_SETSTATE_TRACK_CAL_INV,
    MYKONOS_ERR_SETSTATE_TRACK_ARMERRFLAG,

    MYKONOS_ERR_GETSTATE_TRACK_NULL_PARAM,
    MYKONOS_ERR_GETSTATE_TRACK_ARMERRFLAG,
    MYKONOS_ERR_GETSTATE_TRACK_ARMERROR,

    MYKONOS_ERR_ARMSTATE_PROFILE_ERROR,
    MYKONOS_ERR_ARMSTATE_CAL_ERROR,
    MYKONOS_ERR_ARMSTATE_EXCEPTION,
    MYKONOS_ERR_WAITARMCSTATE_TIMEOUT,

    MYKONOS_ERR_GETPRODUCTID_NULL_PARAM,
    MYKONOS_ERR_GET_API_VERSION_NULL_PARAM,

    MYKONOS_ERR_PROFILES_HSDIGCLK,
    MYKONOS_ERR_RXPROFILE_RXCHANNEL,
    MYKONOS_ERR_RXPROFILE_IQRATE,
    MYKONOS_ERR_RXPROFILE_RFBW,
    MYKONOS_ERR_RXPROFILE_FILTER_DECIMATION,
    MYKONOS_ERR_RXPROFILE_FIR_COEFS,
    MYKONOS_ERR_RXPROFILE_ADCDIV,
    MYKONOS_ERR_TXPROFILE_IQRATE,
    MYKONOS_ERR_TXPROFILE_RFBW,
    MYKONOS_ERR_TXPROFILE_FILTER_INTERPOLATION,
    MYKONOS_ERR_TXPROFILE_FIR_COEFS,
    MYKONOS_ERR_TXPROFILE_DACDIV,
    MYKONOS_ERR_RESET_TXLOL_INV_PARAM,
    MYKONOS_ERR_RESET_TXLOL_ARMERROR
} mykonosErr_t;

/**
 *  \brief Enum for Mykonos low voltage GPIO available pins
 */
typedef enum
{
    MYKGPIONAN  = 0x00,
    MYKGPIO0    = 0x1,
    MYKGPIO1    = 0x2,
    MYKGPIO2    = 0x4,
    MYKGPIO3    = 0x8,
    MYKGPIO4    = 0x10,
    MYKGPIO5    = 0x20,
    MYKGPIO6    = 0x40,
    MYKGPIO7    = 0x80,
    MYKGPIO8    = 0x100,
    MYKGPIO9    = 0x200,
    MYKGPIO10   = 0x400,
    MYKGPIO11   = 0x800,
    MYKGPIO12   = 0x1000,
    MYKGPIO13   = 0x2000,
    MYKGPIO14   = 0x4000,
    MYKGPIO15   = 0x8000,
    MYKGPIO16   = 0x10000,
    MYKGPIO17   = 0x20000,
    MYKGPIO18   = 0x40000
} mykonosGpioSelect_t;


/**
 *  \brief Enum of valid Mykonos Enable State Machine (ENSM) states
 */
typedef enum
{
    WAIT        = 0,    /*!< Mykonos ENSM state upon which a power up in the WAIT/SLEEP state occurs */
    INIT        = 1,    /*!< Mykonos ENSM state upon which a power up delay state ocurrs to allow clocks to stabilize */
    WAITCALS    = 2,    /*!< Mykonos ENSM state upon which calibrations are initializing */
    ALERTCALS   = 3,    /*!< Mykonos ENSM state upon which calibrations are occurring */
    ALERTLDS    = 4,    /*!< Mykonos ENSM state upon which a delay state is occurring when moving from WAIT to ALERT to allow internal circuits to power up */
    ALERT       = 5,    /*!< Mykonos ENSM state upon which the internal RF synth is powered up, and TX and RX data paths are still powered down */
    TX_RX       = 6,    /*!< Mykonos ENSM state upon which the ability to power up data paths depending on the TxEnable/RxEnable pins or SPI bits */
    FLUSH       = 7     /*!< Mykonos ENSM state upon which the data paths are cleared when exiting the TX_RX state */
} mykonosEnsmState_t;


/**
 *  \brief Enum of possible Tx channels
 */
typedef enum
{
    TXOFF   = 0,
    TX1     = 1,
    TX2     = 2,
    TX1_TX2 = 3
} mykonosTxChannels_t;

/**
 *  \brief Enum of possible Rx channels
 */
typedef enum
{
    RXOFF   = 0,
    RX1     = 1,
    RX2     = 2,
    RX1_RX2 = 3
} mykonosRxChannels_t;

/**
 *  \brief Enum of possible Observation Rx channels
 */
typedef enum
{
    OBS_RXOFF           = 0,
    OBS_RX1_TXLO        = 1,
    OBS_RX2_TXLO        = 2,
    OBS_INTERNALCALS    = 3,
    OBS_SNIFFER         = 4,
    OBS_RX1_SNIFFERLO   = 5,
    OBS_RX2_SNIFFERLO   = 6,
    OBS_SNIFFER_A       = 0x14,
    OBS_SNIFFER_B       = 0x24,
    OBS_SNIFFER_C       = 0x34
} mykonosObsRxChannels_t;

/**
 *  \brief Enum of possible Sniffer Rx channels
 */
typedef enum
{
    SNIFFER_A   = 1,
    SNIFFER_B   = 2,
    SNIFFER_C   = 3
} mykonosSnifferChannel_t;

/**
 *  \brief Enum of possible Observation Rx channels to enable and run calibrations for during init.
 *  Choose ENUM value that enables all channels that will be used in the system.  During system use,
 *  only one channel can be used at a time.  This is also used to alert the ARM processor
 *  which observation channels are valid for the current desired system setup.
 */
typedef enum
{
    MYK_OBS_RXOFF   = 0x00,
    MYK_ORX1        = 0x01,
    MYK_ORX2        = 0x02,
    MYK_ORX1_ORX2   = 0x03,
    MYK_SNRXA       = 0x04,
    MYK_SNRXB       = 0x08,
    MYK_SNRXC       = 0x10,
    MYK_SNRXA_B_C   = 0x1C
} mykonosObsRxChannelsEn_t;

/**
 *  \brief Enum of possible DAC divider settings (2x, 2.5x, 4x)
 */
typedef enum
{
    DACDIV_2,
    DACDIV_2p5,
    DACDIV_4
} mykonosDacDiv_t;

/**
 *  \brief Enum of possible VCO divider settings (1x, 1.5x, 2x, 3x)
 */
typedef enum
{
    VCODIV_1    = 0,
    VCODIV_1p5  = 1,
    VCODIV_2    = 2,
    VCODIV_3    = 3
} mykonosVcoDiv_t;

/**
 * \brief Enum of possible PRBS pattern settings
 */
typedef enum
{
    MYK_PRBS7   = 0,
    MYK_PRBS15  = 1,
    MYK_PRBS31  = 2
} mykonosPrbsOrder_t;

/**
 *  \brief Enum of RF PLL names
 */
typedef enum
{
    CLK_PLL,
    RX_PLL,
    TX_PLL,
    SNIFFER_PLL
} mykonosRfPllName_t;

/**
 *  \brief Enum of Rx profile types
 */
typedef enum
{
    MYK_RX_PROFILE,
    MYK_OBS_PROFILE,
    MYK_SNIFFER_PROFILE
} mykonosRxProfType_t;

/**
 * \brief Enum of ORx PLL names
 */
typedef enum
{
    OBSLO_TX_PLL,
    OBSLO_SNIFFER_PLL
} mykonosObsRxLoSource_t;

/**
 *  \brief Enum of possible wait events to use with MYKONOS_waitForEvent()
 */
typedef enum
{
    CALPLL_LOCK,
    CLKPLLCP,
    CLKPLL_LOCK,
    RF_RXPLLCP,
    RF_RXPLL_LOCK,
    RF_TXPLLCP,
    RF_TXPLL_LOCK,
    RF_SNIFFERPLLCP,
    RF_SNIFFERPLL_LOCK,
    RXBBF_CALDONE,
    TXBBF_CALDONE,
    RX_RFDC_CALDONE,
    RX_ADCTUNER_CALDONE,
    RX1_ADCPROFILE,
    RX2_ADCPROFILE,
    ORX_ADCPROFILE,
    RCAL_CALDONE,
    ARMBUSY,
    INITARM_DONE
} waitEvent_t;

/**
 *  \brief Enum to set the desired FIR filter type for related functions
 */
typedef enum
{
    TX1_FIR     = 1,
    TX2_FIR     = 2,
    TX1TX2_FIR  = 3,
    RX1_FIR     = 4,
    RX2_FIR     = 8,
    RX1RX2_FIR  = 12,
    OBSRX_A_FIR = 16,
    OBSRX_B_FIR = 32
} mykonosfirName_t;

/**
 *  \brief Enum to set the desired Rx gain table channel
 */
typedef enum
{
	RX1_GT  = 1,
	RX2_GT,
	RX1_RX2_GT,
	ORX_GT,
	SNRX_GT,
	LOOPBACK_GT
}mykonosGainTable_t;

/**
 *  \brief Enum to set the Rx Gain control mode
 */
typedef enum
{
    MGC     = 0,    /*!< Manual Gain Control */
    AGC     = 2,   	/*!< Automatic Gain Control (AGC) */
    HYBRID  = 3     /*!< Hybrid AGC Gain Control */

} mykonosGainMode_t;

/**
 *  \brief Enum to set the Tx Atenuation step size
 */
typedef enum
{
    TXATTEN_0P05_DB = 0,    /*!< Tx attenuation 0.05dB step size */
    TXATTEN_0P1_DB  = 1,    /*!< Tx attenuation 0.1dB step size */
    TXATTEN_0P2_DB  = 2,    /*!< Tx attenuation 0.2dB step size */
    TXATTEN_0P4_DB  = 3     /*!< Tx attenuation 0.4dB step size */
} mykonosTxAttenStepSize_t;

/**
 *  \brief Enum to help set the init calibration mask
 */
typedef enum
{
    TX_BB_FILTER            = 0x0001,
    ADC_TUNER               = 0x0002,
    TIA_3DB_CORNER          = 0x0004,
    DC_OFFSET               = 0x0008,
    TX_ATTENUATION_DELAY    = 0x0010,
    RX_GAIN_DELAY           = 0x0020,
    FLASH_CAL               = 0x0040,
    PATH_DELAY              = 0x0080,
    TX_LO_LEAKAGE_INTERNAL  = 0x0100,
    TX_LO_LEAKAGE_EXTERNAL  = 0x0200,
    TX_QEC_INIT             = 0x0400,
    LOOPBACK_RX_LO_DELAY    = 0x0800,
    LOOPBACK_RX_RX_QEC_INIT = 0x1000,
    RX_LO_DELAY             = 0x2000,
    RX_QEC_INIT             = 0x4000,
    DPD_INIT                = 0x8000,
    CLGC_INIT               = 0x10000,
    VSWR_INIT               = 0x20000
} mykonosInitCalibrations_t;

/**
 *  \brief Enum to help set the tracking calibration mask
 */
typedef enum
{
    TRACK_RX1_QEC       = 0x00001,
    TRACK_RX2_QEC       = 0x00002,
    TRACK_ORX1_QEC      = 0x00004,
    TRACK_ORX2_QEC      = 0x00008,
    TRACK_TX1_LOL       = 0x00010,
    TRACK_TX2_LOL       = 0x00020,
    TRACK_TX1_QEC       = 0x00040,
    TRACK_TX2_QEC       = 0x00080,
    TRACK_TX1_DPD       = 0x00100,
    TRACK_TX2_DPD       = 0x00200,
    TRACK_TX1_CLGC      = 0x00400,
    TRACK_TX2_CLGC      = 0x00800,
    TRACK_TX1_VSWR      = 0x01000,
    TRACK_TX2_VSWR      = 0x02000,
    TRACK_ORX1_QEC_SNLO = 0x10000,
    TRACK_ORX2_QEC_SNLO = 0x20000,
    TRACK_SRX_QEC       = 0x40000
} mykonosTrackingCalibrations_t;

/**
 *  \brief Enum to set the GPIO3v3 mode
 */
typedef enum
{
    GPIO3V3_LEVELTRANSLATE_MODE     = 1,    /*!< Level translate mode, signal level on low voltage GPIO output on GPIO3v3 pins */
    GPIO3V3_INVLEVELTRANSLATE_MODE  = 2,    /*!< Inverted Level translate mode, inverse of signal level on low voltage GPIO output on GPIO3v3 pins */
    GPIO3V3_BITBANG_MODE            = 3,    /*!< Manual mode, API function sets output pin levels and reads input pin levels */
    GPIO3V3_EXTATTEN_LUT_MODE       = 4,    /*!< GPIO3v3 output level follows Rx1/Rx2 gain table external control 6bit field. */
} mykonosGpio3v3Mode_t;

/**
 *  \brief Enum to set the low voltage GPIO mode
 */
typedef enum
{
    GPIO_MONITOR_MODE       = 0,    /*!< Allows a choice of debug signals to output from Mykonos to monitor the state of the device */
    GPIO_BITBANG_MODE       = 3,    /*!< Manual mode, API function sets output pin levels and reads input pin levels */
    GPIO_ARM_OUT_MODE       = 9,    /*!< Allows internal ARM processor to output on GPIO pins */
    GPIO_SLICER_OUT_MODE    = 10    /*!< Allows Slicer active configuration to the GPIO output  pins */
} mykonosGpioMode_t;

/**
 *  \brief Enum for ARM states
 */
typedef enum
{
    MYK_ARM_POWERUP         = 0x00,    /*!< ARM is powered up and ready to be programmed */
    MYK_ARM_READY           = 0x01,    /*!< ARM enter this state once the boot up sequence is completed */
    MYK_ARM_IDLE            = 0x02,    /*!< ARM enter this state after initial calibrations are completed */
    MYK_ARM_RADIO_ON        = 0x03,    /*!< ARM has moved from MYKONOS_ARM_IDLE state into MYKONOS_ARM_RADIO_ON after the proper command, an abort command will move back to MYKONOS_ARM_IDLE state */
    MYK_ARM_PROFILE_ERROR   = 0x04,    /*!< ARM has detected an illegal profile */
    MYK_ARM_CAL_ERROR       = 0x40,    /*!< ARM has detected an error in the tracking calibrations */
    MYK_ARM_EXCEPTION       = 0x80     /*!< ARM system problem has been detected */
} mykonosArmState_t;

/**
 *  \brief Data structure to hold 3.3 VDC GPIO settings
 */
typedef struct
{
    uint16_t gpio3v3Oe;                         /*!< Pin direction: bit per 3.3v GPIO, 0=Input, 1=Output from Mykonos device */
    mykonosGpio3v3Mode_t gpio3v3SrcCtrl3_0;     /*!< Mode for GPIO3v3[3:0] pins */
    mykonosGpio3v3Mode_t gpio3v3SrcCtrl7_4;     /*!< Mode for GPIO3v3[7:4] pins */
    mykonosGpio3v3Mode_t gpio3v3SrcCtrl11_8;    /*!< Mode for GPIO3v3[11:8] pins */
} mykonosGpio3v3_t;

/**
 *  \brief Data structure to hold low voltage GPIO settings
 */
typedef struct
{
    uint32_t  gpioOe;                     /*!< Output Enable per low voltage GPIO pin (1=output, 0=input) */
    mykonosGpioMode_t  gpioSrcCtrl3_0;    /*!< Mode for low voltage GPIO[3:0] pins */
    mykonosGpioMode_t  gpioSrcCtrl7_4;    /*!< Mode for low voltage GPIO[7:4] pins */
    mykonosGpioMode_t  gpioSrcCtrl11_8;   /*!< Mode for low voltage GPIO[11:8] pins */
    mykonosGpioMode_t  gpioSrcCtrl15_12;  /*!< Mode for low voltage GPIO[15:12] pins */
    mykonosGpioMode_t  gpioSrcCtrl18_16;  /*!< Mode for low voltage GPIO[18:16] pins */
} mykonosGpioLowVoltage_t;

/**
 *  \brief Structure used within the DPD config structure to hold a int8_t complex number
 */
typedef struct{
  int8_t real; /*!< real part of the complex number */
  int8_t imag; /*!< imaginary part of the complex number */
} int8_cpx;

/**
 *  \brief Structure to configure DPD (Only valid for AD9373 device)
 *
 *  This information is loaded into the ARM memory using the
 *  MYKONOS_configDpd() function before running the DPD init or tracking
 *  calibrations.  These values can only be changed when the ARM is in the
 *  radioOff state.
 */
typedef struct
{
    uint8_t damping;                /*!< 1/2^(damping + 8) fraction of previous model 'forgotten' per adaptation (default: 5 = '1/8192' , valid 0 to 15), 0 = infinite damping */
    uint8_t numWeights;             /*!< number of weights to use for int8_cpx weights weights member of this structure (default = 1) */
    uint8_t modelVersion;           /*!< DPD model version: one of four different generalized polynomial models: 0 = same as R0 silicon, 1-3 are new and the best one depends on the PA (default: 2) */
    uint8_t highPowerModelUpdate;   /*!< 1 = Update saved model whenever peak Tx digital RMS is within 1dB of historical peak Tx RMS */
    uint8_t modelPriorWeight;       /*!< Determines how much weight the loaded prior model has on DPD modeling (Valid 0 - 32, default 20) */
    uint8_t robustModeling;         /*!< Default off = 0, 1=enables automatic outlier removal during DPD modeling */
    uint16_t samples;               /*!< number of samples to capture (default: 512, valid 64 - 32768) */
    uint16_t outlierThreshold;      /*!< threshold for sample in AM-AM plot outside of 1:1 line to be thrown out. (default: 50% = 8192/2, valid 8192 to 1) */
    int16_t  additionalDelayOffset; /*!< 16th of an ORx sample (16=1sample), (default 0, valid -64 to 64) */
    uint16_t pathDelayPnSeqLevel;   /*!< Default 255 (-30dBFs=(20Log10(value/8192)), (valid range  1 to 8191) */
    int8_cpx weights[3];            /*!< DPD model error weighting (real/imag valid from -128 to 127) */
} mykonosDpdConfig_t;

/**
 *  \brief Structure to configure CLGC (Closed Loop Gain Control) (Only valid for AD9373 device)
 *
 *  This information is loaded into the ARM memory using the
 *  MYKONOS_configClgc() function before running the CLGC init or tracking
 *  calibrations.  These values can only be changed when the ARM is in the
 *  radioOff state.
 */
typedef struct
{
    int16_t tx1DesiredGain;         /*!< (value = 100 * dB (valid range -32768 to 32767) - total gain and attenuation from Mykonos Tx1 output to ORx1 input in (dB * 100) */
    int16_t tx2DesiredGain;         /*!< (value = 100 * dB (valid range -32768 to 32767) - total gain and attenuation from Mykonos Tx2 output to ORx2 input in (dB * 100) */
    uint16_t tx1AttenLimit;         /*!< (valid range 0 - 40dB), no default, depends on PA, Protects PA by making sure Tx1Atten is not reduced below the limit */
    uint16_t tx2AttenLimit;         /*!< (valid range 0 - 40dB), no default, depends on PA, Protects PA by making sure Tx2Atten is not reduced below the limit */
    uint16_t tx1ControlRatio;       /*!< valid range 1-100, default 45 */
    uint16_t tx2ControlRatio;       /*!< valid range 1-100, default 45 */
    uint8_t allowTx1AttenUpdates;   /*!< 0= allow CLGC to run, but Tx1Atten will not be updated. User can still read back power measurements.  1=CLGC runs, and Tx1Atten automatically updated */
    uint8_t allowTx2AttenUpdates;   /*!< 0= allow CLGC to run, but Tx2Atten will not be updated. User can still read back power measurements.  1=CLGC runs, and Tx2Atten automatically updated */

    int16_t  additionalDelayOffset; /*!< 16th of an ORx sample (16=1sample), (default 0, valid -64 to 64) */
    uint16_t pathDelayPnSeqLevel;   /*!< Default 255 (-30dBFs=(20Log10(value/8192)), (valid range  1 to 8191) */
} mykonosClgcConfig_t;

typedef struct
{
    /* VSWR init cal parameters */
    int16_t  additionalDelayOffset;     /*!< 16th of an ORx sample (16=1sample), (default 0, valid -64 to 64) */
    uint16_t pathDelayPnSeqLevel;       /*!< Default 255 (-30dBFs=(20Log10(value/8192)), (valid range  1 to 8191) */

    /* VSWR tracking cal parameters */
    uint8_t tx1VswrSwitchGpio3p3Pin;    /*!< 3p3V GPIO pin to use to control VSWR switch for Tx1 (valid 0-11) (output from Mykonos) */
    uint8_t tx2VswrSwitchGpio3p3Pin;    /*!< 3p3V GPIO pin to use to control VSWR switch for Tx2 (valid 0-11) (output from Mykonos) */
    uint8_t tx1VswrSwitchPolarity;      /*!< 3p3v GPIO pin polarity for forward path of Tx1, opposite used for reflection path (1 = high level, 0 = low level) */
    uint8_t tx2VswrSwitchPolarity;      /*!< 3p3v GPIO pin polarity for forward path of Tx2, opposite used for reflection path (1 = high level, 0 = low level) */
    uint8_t tx1VswrSwitchDelay_ms;      /*!< Delay for Tx1 after flipping the VSWR switch until measurement is made. In ms resolution */
    uint8_t tx2VswrSwitchDelay_ms;      /*!< Delay for Tx2 after flipping the VSWR switch until measurement is made. In ms resolution */
} mykonosVswrConfig_t;

typedef struct
{
    /**
     * errorStatus(decimal) | Description
     * ---------------------|-----------------------
     *                  0   | NO ERROR (Tracking success)
     *                  1   | Tx data path not enabled
     *                  2   | ORX data path is not enabled
     *                  3   | Loopback switch closed
     *                  4   | VSWR init cal was not run
     *                  5   | Path delay not setup
     *                  6   | Data measurement was aborted
     *                  7   | VSWR disabled
     *                  8   | If set, entered cal but not finished
     *                  9   | No GPIO configured in single ORx configuration
     *                 10   | Tx is not observable with any of the ORx Channels
     *                 11   | ORX_TRACKING_DISABLED  ORx tracking must be enabled
     *
     */
    uint32_t errorStatus;
    uint32_t trackCount;                /*!< Number of times VSWR tracking has run since last reset */
    int32_t forwardGainRms_dB;          /*!< Forward RMS gain measured from Tx to ORx path (1 = 0.01 dB Gain) */
    int32_t forwardGainReal;            /*!< Real part of the forward path complex gain (1 = 0.01 linear Gain) */
    int32_t forwardGainImag;            /*!< Imaginary part of the forward path complex gain (1 = 0.01 linear Gain) */
    int32_t reflectedGainRms_dB;        /*!< Measured reflection path gain in RMS (1 = 0.01 dB Gain) */
    int32_t reflectedGainReal;          /*!< Real part of the reflection path complex gain (1 = 0.01 linear Gain) */
    int32_t reflectedGainImag;          /*!< Imaginary part of the reflection path complex gain (1 = 0.01 linear Gain) */
    int32_t vswr_forward_tx_rms;        /*!< Forward RMS measured from Tx path (1 = 0.01 dBFS) */
    int32_t vswr_forward_orx_rms;       /*!< Forward RMS measured from ORx path (1 = 0.01 dBFS) */
    int32_t vswr_reflection_tx_rms;     /*!< Reflected RMS measured from Tx path (1 = 0.01 dBFS) */
    int32_t vswr_reflection_orx_rms;    /*!< Reflected RMS measured from ORx path (1 = 0.01 dBFS) */
} mykonosVswrStatus_t;

/**
 *  \brief Data structure to hold Mykonos FIR filter settings
 */
typedef struct
{
    int8_t gain_dB;         /*!< Filter gain in dB*/
    uint8_t numFirCoefs;    /*!< Number of coefficients in the FIR filter */
    int16_t *coefs;         /*!< A pointer to an array of filter coefficients */
} mykonosFir_t;

/**
 *  \brief Data structure to hold Mykonos JESD204b Framer configuration settings
 */
typedef struct
{
    uint8_t bankId; 					/*!< JESD204B Configuration Bank ID extension to Device ID. Range is 0..15 */
    uint8_t deviceId; 					/*!< JESD204B Configuration Device ID link identification number. Range is 0..255 */
    uint8_t lane0Id; 					/*!< JESD204B Configuration starting Lane ID. If more than one lane is used, each lane will increment from the Lane0 ID. Range is 0..31 */
    uint8_t M; 							/*!< Number of ADCs (0, 2, or 4) where 2 ADCs are required per receive chain (I and Q) */
    uint8_t K; 							/*!< Number of frames in a multiframe. Default = 32, F*K must be modulo 4. Where, F=2*M/numberOfLanes */
    uint8_t scramble; 					/*!< Scrambling off if framerScramble = 0, if framerScramble > 0 scrambling is enabled */
    uint8_t externalSysref; 			/*!< External SYSREF select. 0 = use internal SYSREF, 1 = use external SYSREF */
    uint8_t serializerLanesEnabled; 	/*!< Serializer lane select bit field. Where, [0] = Lane0 enabled, [1] = Lane1 enabled, etc */
    uint8_t serializerLaneCrossbar; 	/*!< Lane crossbar to map framer lane outputs to physical lanes */
    uint8_t serializerAmplitude;  		/*!< Serializer amplitude setting. Default = 22. Range is 0..31 */
    uint8_t preEmphasis; 				/*!< Serializer pre-emphasis setting. Default = 4 Range is 0..7 */
    uint8_t invertLanePolarity;			/*!< Lane inversion select. Default = 0. Where, bit[0] = 0 will invert lane [0], bit[1] = 0 will invert lane 1, etc. */
    uint8_t lmfcOffset;					/*!< LMFC offset value for deterministic latency setting.  Range is 0..31 */
    uint8_t newSysrefOnRelink; 			/*!< Flag for determining if SYSREF on relink should be set. Where, if > 0 = set, 0 = not set */
    uint8_t enableAutoChanXbar; 		/*!< Flag for determining if auto channel select for the xbar should be set. Where, if > 0 = set, '0' = not set */
    uint8_t obsRxSyncbSelect; 			/*!< Selects SYNCb input source. Where, 0 = use RXSYNCB for this framer, 1 = use OBSRX_SYNCB for this framer */
    uint8_t rxSyncbMode;                /*!< Flag for determining if CMOS mode for RX Sync signal is used. Where, if > 0 = CMOS, '0' = LVDS */
    uint8_t overSample;                 /*!< Selects framer bit repeat or oversampling mode for lane rate matching. Where, 0 = bitRepeat mode (changes effective lanerate), 1 = overSample (maintains same lane rate between ObsRx framer and Rx framer and oversamples the ADC samples) */
} mykonosJesd204bFramerConfig_t;

/* NO Doxygen content required for this data structure as this is used internally */
/// @cond
typedef struct
{
  uint8_t DID;                          /*!< JESD204B Configuration Device ID for ILAS check */
  uint8_t BID;                          /*!< JESD204B Configuration Bank ID for ILAS check */
  uint8_t LID0;                         /*!< JESD204B Configuration starting Lane ID for ILAS check */
  uint8_t L;                            /*!< JESD204B Configuration L = lanes per data converter for ILAS check */
  uint8_t SCR;                          /*!< JESD204B Configuration scramble setting for ILAS check */
  uint8_t F;                            /*!< JESD204B Configuration F = octets per frame for ILAS check */
  uint8_t K;                            /*!< JESD204B Configuration K = frames per multiframe for ILAS check */
  uint8_t M;                            /*!< JESD204B Configuration M = number of data converters for ILAS check */
  uint8_t N;                            /*!< JESD204B Configuration N = data converter sample resolution for ILAS check */
  uint8_t CS;                           /*!< JESD204B Configuration CS = number of control bits transferred per sample per frame for ILAS check */
  uint8_t NP;                           /*!< JESD204B Configuration NP = JESD204B word size based on the highest resolution of the data converter for ILAS check */
  uint8_t S;                            /*!< JESD204B Configuration S = number of samples/data converter/frame for ILAS check */
  uint8_t CF;                           /*!< JESD204B Configuration CF = '0' = control bits appended to each sample, '1' = appended to end of frame for ILAS check */
  uint8_t HD;                           /*!< JESD204B Configuration HD = high density bit - samples are contained within lane (0) or divided over more than one lane (1) for ILAS check */
  uint8_t FCHK0;                        /*!< JESD204B Configuration checksum for ILAS check */
} mykonosJesd204bLane0Config_t;
/// @endcond

/**
* \brief Data structure to hold the settings for the deserializer and deframer configuration
*
* EQ Settings | 3GHz Loss (dB) |6GHz Loss (dB) | max FR408HR Length (in) | max FR4 Length (in)
*-------------|----------------|---------------|-------------------------|---------------------
*           0 |      6.5       |      14       |            20           |       12
*           1 |     11.5       |      21       |            30           |       20
*           2 |     18         |      31       |            46           |       32
*           3 |     21.5       |      38       |            56           |       40
*           4 |     22         |      39       |            60           |       43
*/
typedef struct
{
    uint8_t bankId; 					/*!< Extension to Device ID. Range is 0..15 */
    uint8_t deviceId; 					/*!< Link identification number. Range is 0..255 */
    uint8_t lane0Id; 					/*!< Lane0 ID. Range is 0..31 */
    uint8_t M; 							/*!< Number of DACs (0, 2, or 4) - 2 DACs per transmit chain (I and Q) */
    uint8_t K; 							/*!< Number of frames in a multiframe. Default = 32, F*K = modulo 4. Where, F=2*M/numberOfLanes */
    uint8_t scramble; 					/*!< Scrambling off if scramble = 0, if framerScramble > 0 scrambling is enabled */
    uint8_t externalSysref; 			/*!< External SYSREF select. 0 = use internal SYSREF, 1 = external SYSREF */
    uint8_t deserializerLanesEnabled; 	/*!< Deserializer lane select bit field. Where, [0] = Lane0 enabled, [1] = Lane1 enabled, etc */
    uint8_t deserializerLaneCrossbar;	/*!< Lane crossbar to map physical lanes to deframer lane inputs [1:0] = Deframer Input 0 Lane section, [3:2] = Deframer Input 1 lane select, etc  */
    uint8_t EQSetting; 					/*!< Equalizer setting. Applied to all deserializer lanes. Range is 0..4 */
    uint8_t invertLanePolarity;			/*!< PN inversion per each lane.  bit[0] = 1 Invert PN of Lane 0, bit[1] = Invert PN of Lane 1, etc */
    uint8_t lmfcOffset;					/*!< LMFC offset value to adjust deterministic latency. Range is 0..31 */
    uint8_t newSysrefOnRelink;			/*!< Flag for determining if SYSREF on relink should be set. Where, if > 0 = set, '0' = not set */
    uint8_t enableAutoChanXbar;			/*!< Flag for determining if auto channel select for the xbar should be set. Where, if > 0 = set, '0' = not set */
    uint8_t txSyncbMode;                /*!< Flag for determining if CMOS mode for TX Sync signal is used. Where, if > 0 = CMOS, '0' = LVDS */
} mykonosJesd204bDeframerConfig_t;

/**
 *  \brief Data structure to hold settings for the current Rx specific use case profile
 */
typedef struct
{
    uint8_t  adcDiv;                /*!< The divider used to generate the ADC clock (Valid: 1,2) */
    mykonosFir_t *rxFir;			/*!< Pointer to Rx FIR filter structure */
    uint8_t rxFirDecimation;        /*!< Rx FIR decimation (1,2,4) */
    uint8_t rxDec5Decimation;       /*!< Decimation of Dec5 or Dec4 filter (5,4) */
    uint8_t enHighRejDec5;          /*!< If set, and DEC5 filter used, will use a higher rejection DEC5 FIR filter. Where, 1 = enabled, 0 = disabled */
    uint8_t rhb1Decimation;         /*!< RX Halfband1 (HB1) decimation. Can be either 1 or 2 */
    uint32_t iqRate_kHz;		    /*!< Rx IQ data rate in kHz */
    uint32_t rfBandwidth_Hz;        /*!< Rx RF passband bandwidth for the profile */
    uint32_t rxBbf3dBCorner_kHz;	/*!< Rx BBF (TIA) 3dB corner in kHz */
    uint16_t *customAdcProfile;     /*!< Custom ADC profile to set the bandwidth of the ADC response */
} mykonosRxProfile_t;

/**
 *  \brief Data structure to hold settings for the current Tx specific use case profile
 */
typedef struct
{
    mykonosDacDiv_t dacDiv;             /*!< The divider used to generate the DAC clock (ENUM Values)*/
    mykonosFir_t *txFir;                /*!< Pointer to Tx FIR filter structure */
    uint8_t  txFirInterpolation;        /*!< The TX digital FIR filter interpolation (1,2,4) */
    uint8_t  thb1Interpolation;         /*!< Tx Halfband1 (HB1) filter interpolation (1,2) */
    uint8_t  thb2Interpolation;         /*!< Tx Halfband2 (HB2) filter interpolation (1,2) */
    uint8_t txInputHbInterpolation;     /*!< Interpolation of half band filter before the programmable FIR (valid 1,2,4) */
    uint32_t iqRate_kHz;                /*!< Tx IQ data rate in kHz */
    uint32_t primarySigBandwidth_Hz;    /*!< Tx primary signal BW */
    uint32_t rfBandwidth_Hz;            /*!< Tx RF passband bandwidth for the profile */
    uint32_t txDac3dBCorner_kHz;        /*!< DAC filter 3dB corner in kHz */
    uint32_t txBbf3dBCorner_kHz;        /*!< Tx BBF 3dB corner in kHz */
    uint8_t enableDpdDataPath;          /*!< Enable Tx Dynamic pre distortion - only valid for AD9373 device */
} mykonosTxProfile_t;

/**
 *  \brief Data structure to hold SnRx gain control settings for initialization and during use
 */
typedef struct
{
	mykonosGainMode_t gainMode; /*!< Current Sniffer gain control mode setting */
    uint8_t gainIndex;          /*!< Current Sniffer gain index. Can be used differently for Manual Gain control/AGC */
    uint8_t maxGainIndex;       /*!< Max gain index for the currently loaded Sniffer Gain table */
    uint8_t minGainIndex;       /*!< Min gain index for the currently loaded Sniffer Gain table */
} mykonosSnifferGainControl_t;

/**
 *  \brief Data structure to hold ORx gain control settings for initialization and during use
 */
typedef struct
{
	mykonosGainMode_t gainMode; /*!< Current ORx gain control mode setting */
    uint8_t orx1GainIndex;      /*!< ORx1 Gain Index, can be used in different ways for manual and AGC gain control */
    uint8_t orx2GainIndex;      /*!< ORx2 Gain Index, can be used in different ways for manual and AGC gain control */
    uint8_t maxGainIndex;       /*!< Max gain index for the currently loaded ORx Gain table */
    uint8_t minGainIndex;       /*!< Min gain index for the currently loaded ORx Gain table */
} mykonosORxGainControl_t;

/**
 *  \brief Data structure to hold Rx gain control settings for initialization and during use
 */
typedef struct
{
	mykonosGainMode_t gainMode; /*!< Current Rx gain control mode setting */
    uint8_t rx1GainIndex;       /*!< Rx1 Gain Index, can be used in different ways for manual and AGC gain control */
    uint8_t rx2GainIndex;       /*!< Rx2 Gain Index, can be used in different ways for manual and AGC gain control */
    uint8_t rx1MaxGainIndex;    /*!< Max gain index for the currently loaded Rx1 Gain table */
    uint8_t rx1MinGainIndex;    /*!< Min gain index for the currently loaded Rx1 Gain table */
    uint8_t rx2MaxGainIndex;    /*!< Max gain index for the currently loaded Rx2 Gain table */
    uint8_t rx2MinGainIndex;    /*!< Min gain index for the currently loaded Rx2 Gain table */
    uint8_t rx1Rssi;            /*!< Stores Rx1 RSSI value read back from the Mykonos */
    uint8_t rx2Rssi;            /*!< Stores Rx2 RSSI value read back from the Mykonos */
} mykonosRxGainControl_t;

/**
 *  \brief Data structure to hold peak detector settings for the AGC
 */
typedef struct
{
	/* Threshold Settings */
	uint8_t apdHighThresh; 		/*!< APD high threshold. Must be greater than apdLowThresh. Min = apdLowThresh, Max = 0x3F. 6-bit field. */
	uint8_t apdLowThresh; 		/*!< APD low threshold. Must be less than apdHighThresh. Min = 0, Max = apdHighThresh. 6-bit field. */
	uint8_t hb2HighThresh; 		/*!< HB2 high threshold. Must be greater than hb2LowThresh. Min = hb2LowThresh, Max = 0xFF. 8-bit field.  */
	uint8_t hb2LowThresh; 		/*!< HB2 low threshold. Must be less than hb2HighThresh. Min = 0, Max = hb2HighThresh. 8-bit field.  */
	uint8_t hb2VeryLowThresh; 	/*!< HB2 very low threshold. Must be less than hb2LowThresh. Min = 0, Max = hb2LowThresh. 8-bit field.  */

	/* Threshold Counter Settings */
	uint8_t apdHighThreshExceededCnt; 		/*!< APD high threshold exceeded counter. Sets number of peaks to detect above apdHighThresh to cause gain decrement according to apdHighGainStepAttack. 8-bit field. */
	uint8_t apdLowThreshExceededCnt; 		/*!< APD low threshold exceeded counter. Sets number of peaks to detect below apdLowThresh to cause gain increment according to apdLowGainStepRecovery. 8-bit field. */
	uint8_t hb2HighThreshExceededCnt; 		/*!< HB2 high threshold exceeded counter. Sets number of overloads to detect above hb2HighThresh to cause gain decrement according to hb2HighGainStepAttack. 8-bit field. */
	uint8_t hb2LowThreshExceededCnt; 		/*!< HB2 low threshold exceeded counter. Sets number of peaks to detect below hb2LowThresh to cause gain increment according to hb2LowGainStepRecovery. 8-bit field. */
	uint8_t hb2VeryLowThreshExceededCnt; 	/*!< HB2 very low threshold exceeded counter. Sets number of peaks to detect below hb2VeryLowThresh to cause gain increment according to hb2VeryLowGainStepRecovery. 8-bit field. */

	/* Gain Step Settings */
	uint8_t apdHighGainStepAttack; 		/*!< Number of gain indices to decrement gain when apdHighThreshExceededCnt is exceeded. 5-bit field. */
	uint8_t apdLowGainStepRecovery; 	/*!< Number of gain indices to increment gain when apdLowThreshExceededCnt is exceeded. 5-bit field */
	uint8_t hb2HighGainStepAttack; 		/*!< Number of gain indices to decrement gain when hb2HighThreshExceededCnt is exceeded. 5-bit field */
	uint8_t hb2LowGainStepRecovery; 	/*!< Number of gain indices to increment gain when hb2LowThreshExceededCnt is exceeded. 5-bit field*/
	uint8_t hb2VeryLowGainStepRecovery; /*!< Number of gain indices to increment gain when hb2VeryLowThreshExceededCnt is exceeded. 5-bit field */

	/* Fast Attack Settings */
	uint8_t apdFastAttack; 		/*!< [1] Enables APD fast attack mode - gain decrements immediately when apdHighThreshExceededCnt is exceeded. [0] disables APD fast attack mode - gain decrements at the expiry of agcGainUpdateCounter. 1-bit field. */
	uint8_t hb2FastAttack; 		/*!< [1] Enables HB2 fast attack mode - gain decrements immediately when hb2HighThreshExceededCnt is exceeded. [0] disables HB2 fast attack mode - gain decrements at the expiry of agcGainUpdateCounter. 1-bit field. */

	/* HB2 Configuration Settings */
	uint8_t hb2OverloadDetectEnable; 	/*!< [1] Enables the HB2 overload detector. [0] Disables the HB2 overload detector. 1-bit field. */
	uint8_t hb2OverloadDurationCnt; 	/*!< Sets the samples size window of the HB2 overload detector. If hb2OverloadThreshCnt number of overloads are detected, the hb2xxxThreshExceededCnt increments. 3-bit field. [001]=1, [001]=4, [010]=8, [011]=12, [100]=16, [101]=24, [110]=32, [111]=INVALID */
	uint8_t hb2OverloadThreshCnt; 		/*!< Sets the number of individual overloads necessary within hb2OverloadDurationCnt samples to increment the hb2xxxThreshExceededCnt */
} mykonosPeakDetAgcCfg_t;

/**
 *  \brief Data structure to hold power measurement settings for the AGC
 */
typedef struct
{
	/* Threshold Settings */
	uint8_t pmdUpperHighThresh; 	/*!< Power measurement upper band, high threshold . This value is a positive offset to the pmdUpperLowThresh threshold. 4-bit field */
	uint8_t pmdUpperLowThresh; 		/*!< Power measurement upper band, low threshold. This value sets the threshold in (negative) -dBFS. Byte value must be less than pmdLowerHighThresh. 7-bit field */
	uint8_t pmdLowerHighThresh; 	/*!< Power measurement lower band, high threshold. This value sets the threshold in (negative) -dBFS. Byte value must be greater than pmdUpperLowThresh. 7-bit field */
	uint8_t pmdLowerLowThresh; 		/*!< Power measurement lower band, low threshold. This value is a negative offset to the pmdLowerHighThresh threshold. 4-bit field */

	/* Gain Step Settings */
	uint8_t pmdUpperHighGainStepAttack; 	/*!< Number of gain indices to decrement gain if pmdUpperHighThresh is exceeded by the end of the agcGainUpdateCounter. 5-bit field */
	uint8_t pmdUpperLowGainStepAttack; 		/*!< Number of gain indices to decrement gain if pmdUpperLowThresh is exceeded by the end of the agcGainUpdateCounter. 5-bit field */
	uint8_t pmdLowerHighGainStepRecovery; 	/*!< Number of gain indices to increment gain if pmdLowerHighThresh is not exceeded by the end of the agcGainUpdateCounter. 5-bit field */
	uint8_t pmdLowerLowGainStepRecovery; 	/*!< Number of gain indices to increment gain if pmdLowerLowThresh is not exceeded by the end of the agcGainUpdateCounter. 5-bit field */

	/* PMD Configuration Settings */
	uint8_t pmdMeasDuration; 	/*!< Number of samples to measure power on. The number of samples corresponding to the 4-bit word is 8*2^(pmdMeasDuration[3:0]). This value must be less than agcGainUpdateCounter */
	uint8_t pmdMeasConfig; 		/*!< Power measurement configuration. 2-bit field. [00]=PMD disabled, [01]=PMD Enabled at HB2 output, [10]=Enabled at RFIR output (recommended), [11]=PMD Enabled at BBDC2 */
} mykonosPowerMeasAgcCfg_t;

/**
 *  \brief Data structure to hold general AGC settings for initialization and during use
 */
typedef struct
{
	/* Gain Table Settings */
	uint8_t agcRx1MaxGainIndex;			/*!< Maximum Rx1 gain index allowed in AGC mode. Must be greater than agcRx1MinGainIndex and valid gain index. 8-bit field */
	uint8_t agcRx1MinGainIndex;			/*!< Minimum Rx1 gain index allowed in AGC mode. Must be less than agcRx1MinGainIndex and valid gain index. 8-bit field */
	uint8_t agcRx2MaxGainIndex;			/*!< Maximum Rx2 gain index allowed in AGC mode. Must be greater than agcRx2MinGainIndex and valid gain index. 8-bit field */
	uint8_t agcRx2MinGainIndex;			/*!< Minimum Rx2 gain index allowed in AGC mode. Must be less than agcRx2MinGainIndex and valid gain index. 8-bit field */
	uint8_t agcObsRxMaxGainIndex;		/*!< Maximum ObsRx gain index allowed in AGC mode. Must be greater than agcObsRxMinGainIndex and valid gain index. 8-bit field */
	uint8_t agcObsRxMinGainIndex;		/*!< Minimum ObsRx gain index allowed in AGC mode. Must be less than agcObsRxMaxGainIndex and valid gain index. 8-bit field */
	uint8_t agcObsRxSelect; 			/*!< Sniffer or ObsRx AGC channel select. [1] = SnRx */

	/* AGC Mode Selection */
	uint8_t agcPeakThresholdMode; /*!< [1] = Peak Threshold Mode, power based gain changes are disabled. [0] = Peak and overload detectors are ignored for gain changes */
	uint8_t agcLowThsPreventGainIncrease; /*!< [1] PMD based gain increments are ignored if apd/hb2LowThreshExceedCnt is high [0] apdLowThreshExceededCnt and hb2LowThreshExceededCnt are "Don't cares" to the AGC gain recovery */

	/* AGC General Settings */
	uint32_t agcGainUpdateCounter;		/*!< Number of samples for the AGC gain update counter. Counter operates on the IQ data rate. 22-bit field. Min = 0x000001, Max = 0x3FFFFF  */
	uint8_t agcSlowLoopSettlingDelay;	/*!< Number of IQ data rate clock cycles to wait after a gain change before peak/power measurements resume. 7-bit field */
	uint8_t agcPeakWaitTime;			/*!< Number of IQ data rate clock cycles to wait to enable peak/overload detectors after AGC is enabled. 5-bit field. Min = 0x02. Max = 0x1F */
	uint8_t agcResetOnRxEnable;			/*!< [1] = Performs a reset of the AGC slow loop state machine when Rx is disabled. [0] = AGC slow loop state machine maintains its state when Rx is disabled. */
	uint8_t	agcEnableSyncPulseForGainCounter; /*!< [1] = Allows sync of agcGainUpdateCounter to the time-slot boundary. GPIO setup required. [0] = agcGainUpdateCounter functions as normal */

	mykonosPeakDetAgcCfg_t *peakAgc;    /*!< pointer to structure for Peak AGC */
	mykonosPowerMeasAgcCfg_t *powerAgc; /*!< pointer to structure for Power AGC */
} mykonosAgcCfg_t;

/**
 *  \brief Data structure to hold Tx data path settings
 */
typedef struct
{
    mykonosTxProfile_t *txProfile;              /*!< Tx datapath profile, 3dB corner frequencies, and digital filter enables */
    mykonosJesd204bDeframerConfig_t *deframer;  /*!< Mykonos JESD204b deframer config for the Tx data path */
    mykonosTxChannels_t txChannels;             /*!< The desired Tx channels to enable during initialization */
    uint8_t txPllUseExternalLo;                 /*!< Internal LO=0, external LO*2 if =1 */
    uint64_t txPllLoFrequency_Hz;               /*!< Tx PLL LO frequency (internal or external LO) */
    mykonosTxAttenStepSize_t txAttenStepSize;   /*!< Tx Attenuation step size */
    uint16_t tx1Atten_mdB;                      /*!< Initial and current Tx1 Attenuation */
    uint16_t tx2Atten_mdB;                      /*!< Initial and current Tx2 Attenuation */
    mykonosDpdConfig_t *dpdConfig;              /*!< DPD settings. Only valid for AD9373 device, set pointer to NULL otherwise */
    mykonosClgcConfig_t *clgcConfig;            /*!< CLGC settings. Only valid for AD9373 device, set pointer to NULL otherwise */
    mykonosVswrConfig_t *vswrConfig;            /*!< VSWR settings. Only valid for AD9373 device, set pointer to NULL otherwise */
} mykonosTxSettings_t;

/**
 *  \brief Data structure to hold Rx data path settings
 */
typedef struct
{
    mykonosRxProfile_t *rxProfile;          /*!< Rx datapath profile, 3dB corner frequencies, and digital filter enables */
    mykonosJesd204bFramerConfig_t *framer;  /*!< Rx JESD204b framer configuration structure */
    mykonosRxGainControl_t *rxGainCtrl;     /*!< Rx Gain control settings structure */
    mykonosAgcCfg_t *rxAgcCtrl;				/*!< Rx AGC control settings structure */
    mykonosRxChannels_t rxChannels;         /*!< The desired Rx Channels to enable during initialization */
    uint8_t rxPllUseExternalLo;             /*!< Internal LO = 0, external LO*2 = 1 */
    uint64_t rxPllLoFrequency_Hz;           /*!< Rx PLL LO Frequency (internal or external LO) */
    uint8_t realIfData; 			        /*!< Flag to choose if complex baseband or real IF data are selected for Rx and ObsRx paths. Where, if > 0 = real IF data, '0' = zero IF (IQ) data*/
} mykonosRxSettings_t;

/**
 *  \brief Data structure to hold ORx data path settings
 */
typedef struct
{
    mykonosRxProfile_t *orxProfile;         	    /*!< ORx datapath profile, 3dB corner frequencies, and digital filter enables. */
    mykonosORxGainControl_t *orxGainCtrl;		    /*!< ObsRx gain control settings structure */
    mykonosAgcCfg_t *orxAgcCtrl;				    /*!< ORx AGC control settings structure */
    mykonosRxProfile_t *snifferProfile;     	    /*!< Sniffer datapath profile, 3dB corner frequencies, and digital filter enables. */
    mykonosSnifferGainControl_t *snifferGainCtrl;	/*!< SnRx gain control settings structure */
    mykonosJesd204bFramerConfig_t *framer;  	    /*!< ObsRx JESD204b framer configuration structure */
    mykonosObsRxChannelsEn_t obsRxChannelsEnable;   /*!< The desired ObsRx channels to configure/calibrate during initialization */
    mykonosObsRxLoSource_t obsRxLoSource;   	    /*!< The sniffer/ORx mixers can use the TX_PLL or SNIFFER_PLL */
    uint64_t snifferPllLoFrequency_Hz;              /*!< SnRx PLL LO frequency in Hz */
    uint8_t realIfData; 						    /*!< Flag to choose if complex baseband or real IF data are selected for Rx and ObsRx paths. Where if > 0 = real IF data, '0' = complex data */
    uint16_t *customLoopbackAdcProfile;             /*!< Custom Loopback ADC profile to set the bandwidth of the ADC response */
    mykonosObsRxChannels_t defaultObsRxChannel;     /*!< Default ObsRx channel to enter when radioOn called */
} mykonosObsRxSettings_t;


/**
 * \brief Data structure to hold ARM GPIO pin assignments for each ARM input/output pin.
 */
typedef struct
{
    uint8_t useRx2EnablePin; /*!< 0= RX1_ENABLE controls RX1 and RX2, 1 = separate RX1_ENABLE/RX2_ENABLE pins */
    uint8_t useTx2EnablePin; /*!< 0= TX1_ENABLE controls TX1 and TX2, 1 = separate TX1_ENABLE/TX2_ENABLE pins */
    uint8_t txRxPinMode;     /*!< 0= ARM command mode, 1 = Pin mode to power up Tx/Rx chains */
    uint8_t orxPinMode;      /*!< 0= ARM command mode, 1 = Pin mode to power up ObsRx receiver*/

    /* Mykonos ARM input GPIO pins -- Only valid if orxPinMode = 1 */
    uint8_t orxTriggerPin; /*!< Select desired GPIO pin (valid 4-15) */
    uint8_t orxMode2Pin;   /*!< Select desired GPIO pin (valid 0-18) */
    uint8_t orxMode1Pin;   /*!< Select desired GPIO pin (valid 0-18) */
    uint8_t orxMode0Pin;   /*!< Select desired GPIO pin (valid 0-18) */

    /* Mykonos ARM output GPIO pins  --  always available, even when pin mode not enabled*/
    uint8_t rx1EnableAck;   /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t rx2EnableAck;   /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t tx1EnableAck;   /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t tx2EnableAck;   /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t orx1EnableAck;  /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t orx2EnableAck;  /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t srxEnableAck;   /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
    uint8_t txObsSelect;    /*!< Select desired GPIO pin (0-15), [4] = Output Enable */
                            /* When 2Tx are used with only 1 ORx input, this GPIO tells the BBIC which Tx channel is   */
                            /* active for calibrations, so BBIC can route correct RF Tx path into the single ORx input */
} mykonosArmGpioConfig_t;

/**
 * \brief Data structure to hold auxiliary IO settings (AuxDAC, ARM GPIO, GPIO3.3v, low voltage GPIO, HSCP, etc)
 */
typedef struct
{
    uint16_t auxDacEnable;           /*!< Aux DAC enable. One bit per Aux DAC. Where bit[0] = Aux DAC 0, bit[1] = Aux DAC 1, etc */
    uint16_t auxDacValue[10];        /*!< Aux DAC value */
    uint8_t  auxDacSlope[10];        /*!< Aux DAC slope */
    uint8_t  auxDacVref[10];         /*!< Aux DAC voltage reference value */

    mykonosGpio3v3_t *gpio3v3;       /*!< GPIO 3.3 VDC settings data structure pointer */
    mykonosGpioLowVoltage_t *gpio;   /*!< Low voltage GPIO settings data structure pointer */
    mykonosArmGpioConfig_t *armGpio; /*!< Mykonos ARM GPIO settings*/
} mykonosAuxIo_t;

/**
 *  \brief Data structure to hold digital clock settings
 */
typedef struct
{
    uint32_t deviceClock_kHz;       /*!< CLKPLL and device reference clock frequency in kHz */
    uint32_t clkPllVcoFreq_kHz;     /*!< CLKPLL VCO frequency in kHz */
    mykonosVcoDiv_t  clkPllVcoDiv;  /*!< CLKPLL VCO divider */
    uint8_t  clkPllHsDiv;           /*!< CLKPLL high speed clock divider */
} mykonosDigClocks_t;


/**
 *  \brief Data structure used to read back the Init Calibration Status
 */
typedef struct
{
    uint32_t calsDoneLastRun;   /*!< Init cals that completed in the last call to MYKONOS_runInitCals() */
    uint32_t calsDoneLifetime;  /*!< Init cals that have completed successfully since loading of the ARM processor */
    uint32_t calsMinimum;       /*!< Minimum set of init cals that must complete before device can move to radioOn state */
    uint8_t initErrCal;         /*!< If an init cal had an error, this represents the opcode of the init cal that reported an error */
    uint8_t initErrCode;        /*!< If an init cal had an error, this represents the ARM error code describing the failure */
} mykonosInitCalStatus_t;

/**
 *  \brief Data structure used to read back DPD calibration status
 */
typedef struct
{
    /**
     *  dpdErrorStatus (decimal) | Description
     * --------------------------|-----------------------
     *                       0   | No Error
     *                       1   | ORX_DISABLED
     *                       2   | TX_DISABLED
     *                       3   | PATHDELAY_NOT_SETUP
     *                       4   | DPD_INIT_NOT_RUN
     *                       5   | ORX_SIG_TOO_LOW
     *                       6   | ORX_SIG_SATURATED
     *                       7   | TX_SIG_TOO_LOW
     *                       8   | TX_SIG_SATURATED
     *                       9   | MODEL_ERROR_HIGH
     *                      10   | AM_AM_OUTLIERS
     *                      11   | INVALID_TX_PROFILE
     *                      12   | ORX_TRACKING_DISABLED ORx tracking must be enabled
     *                      13   | Cal suspended
     *                      14   | Reserved
     *                      15   | Reserved
     *                      16   | Reserved
     *                      17   | Reserved
     *                      18   | Reserved
     */
    uint32_t dpdErrorStatus;
    uint32_t dpdTrackCount;         /*!< Number of times DPD tracking has run since last reset */
    uint32_t dpdModelErrorPercent;  /*!< Percent Error of PA model * 10 to include 1 decimal place */
    uint32_t dpdExtPathDelay;       /*!< External path delay from Tx output to ORx input, at 1/16 sample resolution of ORx sample rate */
} mykonosDpdStatus_t;

/**
 *  \brief Data structure used to read back CLGC calibration status
 */
typedef struct
{
    /**
     * clgcErrorStatus(decimal) | Description
     * -------------------------|-----------------------
     *                      0   | NO ERROR
     *                      1   | TX Disabled
     *                      2   | ORx is disabled
     *                      3   | Loopback switch is clo
     *                      4   | Data measurement aborted during capture
     *                      5   | No initial calibration was done
     *                      6   | Path delay not setup
     *                      7   | No apply control is possible
     *                      8   | Control value is out of range
     *                      9   | CLGC feature is disabled
     *                     10   | TX attenuation is capped
     *                     11   | Gain measurement
     *                     12   | No GPIO configured in single ORx configuration
     *                     13   | Tx is not observable with any of the ORx Channels
     *                     14   | ORX_TRACKING_DISABLED  ORx tracking must be enabled
     *                     15   | Cal suspended
     *                     16   | RESERVED
     *                     17   | RESERVED
     *                     18   | RESERVED
     *                     19   | RESERVED
     */
    uint32_t errorStatus;
    uint32_t trackCount;      /*!< Number of times CLGC tracking has run since last reset */
    int32_t desiredGain;      /*!< Desired gain/attenuation from Tx output to ORx input of Mykonos device. 0.01 dB resolution */
    int32_t currentGain;      /*!< Current measured gain in 0.01 dB resolution. */
    uint32_t txGain;          /*!< Current TxAttenuation setting, same as MYKONOS_getTx1/2Attenuation(), in 0.05dB resolution */
    int32_t txRms;            /*!< Tx digital sample power measured at DPD block input (0.01 dB resolution) */
    int32_t orxRms;           /*!< ORx digital sample power measured at ORx port (0.01 dB resolution) */
} mykonosClgcStatus_t;

/**
 * \brief Data structure to hold Tx LOL Status
 */
typedef struct
{
    uint32_t errorCode;         /*!< error code from Tx LOL */
    uint32_t percentComplete;   /*!< percent of required data collected for the current cal. Range 0 to 100 */
    uint32_t performanceMetric; /*!< Variance of the corrections, and gives an indication in dB on how much LO leakage is corrected on an average tracking pass.  */
    uint32_t iterCount;         /*!< running counter that increments each time the cal runs to completion */
    uint32_t updateCount;       /*!< running counter that increments each time the cal updates the correction/actuator hardware */
} mykonosTxLolStatus_t;

/**
 * \brief Data structure to hold Tx QEC Status
 */
typedef struct
{
    uint32_t errorCode;         /*!< error code from Tx QEC */
    uint32_t percentComplete;   /*!< percent of required data collected for the current cal. Range 0 to 100 */
    uint32_t performanceMetric; /*!< Number of codes adjusted which is the number of codes of correction made last time which can be converted to an IRR power metric as with Rx QEC, if desired. */
    uint32_t iterCount;         /*!< running counter that increments each time the cal runs to completion */
    uint32_t updateCount;       /*!< running counter that increments each time the cal updates the correction/actuator hardware */
} mykonosTxQecStatus_t;

/**
 * \brief Data structure to hold Rx QEC Status
 */
typedef struct
{
    uint32_t errorCode;         /*!< error code from Rx QEC */
    uint32_t percentComplete;   /*!< percent of required data collected for the current cal. Range 0 to 100 */
    uint32_t selfcheckIrrDb;    /*!< selfCheckIrrdDb - Power-weighted average Image Rejection Ratio (IRR) in dBc. */
    uint32_t iterCount;         /*!< running counter that increments each time the cal runs to completion */
    uint32_t updateCount;       /*!< running counter that increments each time the cal updates the correction/actuator hardware */
} mykonosRxQecStatus_t;

/**
 * \brief Data structure to hold Orx QEC Status
 */
typedef struct
{
    uint32_t errorCode;         /*!< error code from Orx QEC */
    uint32_t percentComplete;   /*!< percent of required data collected for the current cal. Range 0 to 100 */
    uint32_t selfcheckIrrDb;    /*!< selfCheckIrrdDb - Power-weighted average Image Rejection Ratio (IRR) in dBc. */
    uint32_t iterCount;         /*!< running counter that increments each time the cal runs to completion */
    uint32_t updateCount;       /*!< running counter that increments each time the cal updates the correction/actuator hardware */
} mykonosOrxQecStatus_t;

/**
 * \brief Data structure to hold Mykonos device settings
 */
typedef struct
{
    spiSettings_t          *spiSettings;    /*!< SPI settings data structure pointer */
    mykonosRxSettings_t    *rx;             /*!< Rx settings data structure pointer */
    mykonosTxSettings_t    *tx;             /*!< Tx settings data structure pointer */
    mykonosObsRxSettings_t *obsRx;          /*!< ObsRx settings data structure pointer */
    mykonosAuxIo_t         *auxIo;          /*!< Auxiliary IO settings data structure pointer */
    mykonosDigClocks_t     *clocks;         /*!< Holds settings for CLKPLL and reference clock */
    uint8_t                 profilesValid;  /*!< Mykonos initialize function uses this as an output to remember which profile data structure pointers are valid */
} mykonosDevice_t;

#ifdef __cplusplus
}
#endif

#endif

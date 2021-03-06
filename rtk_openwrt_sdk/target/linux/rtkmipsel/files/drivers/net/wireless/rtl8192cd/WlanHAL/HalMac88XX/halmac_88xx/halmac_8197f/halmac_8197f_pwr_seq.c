#include "../halmac_88xx_cfg.h"
#include "halmac_8197f_cfg.h"



/*
 *  drivers should parse below arrays and do the corresponding actions
 */
/* 3 Power on  Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_power_on_flow[HALMAC_8197f_TRANS_CARDEMU_TO_ACT_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_CARDEMU_TO_ACT
	RTL8197f_TRANS_END
};

/* 3 Radio off GPIO Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_radio_off_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_ACT_TO_CARDEMU
	RTL8197f_TRANS_END
};

/* 3 Card Disable Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_card_disable_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_CARDEMU_TO_PDN_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_ACT_TO_CARDEMU
	RTL8197f_TRANS_CARDEMU_TO_CARDDIS
	RTL8197f_TRANS_END
};

/* 3 Card Enable Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_card_enable_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_CARDEMU_TO_PDN_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_CARDDIS_TO_CARDEMU
	RTL8197f_TRANS_CARDEMU_TO_ACT
	RTL8197f_TRANS_END
};

/* 3 Suspend Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_suspend_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_CARDEMU_TO_SUS_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_ACT_TO_CARDEMU
	RTL8197f_TRANS_CARDEMU_TO_SUS
	RTL8197f_TRANS_END
};

/* 3 Resume Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_resume_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_CARDEMU_TO_SUS_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	RTL8197f_TRANS_SUS_TO_CARDEMU
	RTL8197f_TRANS_CARDEMU_TO_ACT
	RTL8197f_TRANS_END
};



/* 3HWPDN Array */
HALMAC_WLAN_PWR_CFG halmac_8197f_hwpdn_flow[HALMAC_8197f_TRANS_ACT_TO_CARDEMU_STEPS + HALMAC_8197f_TRANS_CARDEMU_TO_PDN_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	/* TRANS_ACT_TO_CARDEMU */
	/* TRANS_CARDEMU_TO_PDN */
	/* HW behavior */
	RTL8197f_TRANS_END
};

/* 3 Enter LPS */
HALMAC_WLAN_PWR_CFG halmac_8197f_enter_lps_flow[HALMAC_8197f_TRANS_ACT_TO_LPS_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	/* FW behavior */
	RTL8197f_TRANS_ACT_TO_LPS
	RTL8197f_TRANS_END
};

/* 3 Leave LPS */
HALMAC_WLAN_PWR_CFG halmac_8197f_leave_lps_flow[HALMAC_8197f_TRANS_LPS_TO_ACT_STEPS + HALMAC_8197f_TRANS_END_STEPS] = {
	/* FW behavior */
	RTL8197f_TRANS_LPS_TO_ACT
	RTL8197f_TRANS_END
};

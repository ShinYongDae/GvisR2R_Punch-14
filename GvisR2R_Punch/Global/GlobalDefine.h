// GlobalDefine.h : interface of the CGvisR2RView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GLOBALDEFINE_H_INCLUDED_)
#define AFX_GLOBALDEFINE_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../Device/MotionParam.h"


//#define TEST_MODE		1

#ifndef MAX_STRIP
	#define MAX_STRIP				4
#endif

#define MSG_BOX_PATH				_T("C:\\R2RSet\\MsgBox.exe")

#define MAX_STRIP_NUM				4
#define MAX_PCE_COL					100
#define MAX_PCE_ROW					100

#ifdef TEST_MODE
	#define TEST_SHOT				2
	#define PATH_REELMAP			_T("C:\\R2RSet\\Test\\ReelMap.txt")
	//#define PATH_REELMAP			_T("C:\\R2RSet\\Test\\ReelMapData.txt")
	#define PATH_REELMAP_UP			PATH_REELMAP	//_T("C:\\R2RSet\\Test\\ReelMapDataUp.txt")
	#define PATH_REELMAP_DN			PATH_REELMAP	//_T("C:\\R2RSet\\Test\\ReelMapDataDn.txt")
	#define PATH_REELMAP_ALL_UP		PATH_REELMAP	//_T("C:\\R2RSet\\Test\\ReelMapDataAllUp.txt")
	#define PATH_REELMAP_ALL_DN		PATH_REELMAP	//_T("C:\\R2RSet\\Test\\ReelMapDataAllDn.txt")

	#define PATH_STRIP_RGN			_T("C:\\R2RSet\\Test\\Layer.mst")			// CAM Strip Region
	#define PATH_PCS_RGN			_T("C:\\R2RSet\\Test\\Region.Pcs")			// AOI PCS Region
	#define PATH_CELL_RGN			_T("C:\\R2RSet\\Test\\Cell.rgn")			// CAM PCS Region
	#define PATH_CELL_MST			_T("C:\\R2RSet\\Test\\1STRIP-2-050.mst")	// CAM Cell Img Region Data
	#define PATH_PCS_IMG_			_T("C:\\R2RSet\\Test\\Piece.tif")
	#define PATH_CAD_IMG			_T("C:\\R2RSet\\Test\\CORGO1.tif")
	#define PATH_DEF_IMG			_T("C:\\R2RSet\\Test\\")
	#define PATH_PCR				_T("C:\\R2RSet\\Test\\0004.pcr")
	#define PATH_PIN_IMG_			_T("C:\\R2RSet\\Test\\Pin-330.tif")

	#define PATH_PIN_IMG			_T("C:\\R2RSet\\Test\\Pin-330.TIF")
	#define PATH_ALIGN0_IMG			_T("C:\\R2RSet\\Test\\Align0.TIF")
	#define PATH_ALIGN1_IMG			_T("C:\\R2RSet\\Test\\Align1.TIF")
	#define PATH_ALIGN2_IMG			_T("C:\\R2RSet\\Test\\Align2.TIF")
	#define PATH_ALIGN3_IMG			_T("C:\\R2RSet\\Test\\Align3.TIF")
	#define PATH_PCS_IMG			_T("C:\\R2RSet\\Test\\Piece.tif")
	#define PATH_ORDERING_Mk		_T("C:\\R2RSet\\Test\\WriteOrderingMkRotate90ccw.txt")
	#define PATH_ORDERING_Mk_MIRROR	_T("C:\\R2RSet\\Test\\WriteOrderingMkRotate90ccwMirror.txt")

	#define	USE_MIL
	#define	USE_VISION
	//#define USE_TCPIP
	//#define USE_ENGRAVE
	//#define USE_DTS

	//#define USE_CAM_MASTER
	//#define	USE_NMC
	//#define	USE_MPE
	//#define	USE_IRAYPLE
	//#define	USE_SR1000W
	//#define	USE_LIGHT
	//#define	USE_SMAC

#else
	#define USE_CAM_MASTER
	#define	USE_MIL
	#define USE_VISION

	#define	USE_NMC
	#define	USE_LIGHT
	#define	USE_MPE
	#define	USE_SMAC
	#define	USE_IRAYPLE
	#define	USE_TCPIP
	#define USE_ENGRAVE
	#define USE_DTS

// 	#define	USE_SR1000W


//	#define	USE_SONY
//	#define	USE_IDS
//	#define USE_CREVIS

//	#define	USE_FLUCK
//	#define	USE_XMP

	#define PATH_PIN_IMG			_T("C:\\R2RSet\\Pin\\Pin.TIF")
	#define PATH_ALIGN0_IMG			_T("C:\\R2RSet\\Align\\Align0.TIF")
	#define PATH_ALIGN1_IMG			_T("C:\\R2RSet\\Align\\Align1.TIF")
	#define PATH_ALIGN2_IMG			_T("C:\\R2RSet\\Align\\Align2.TIF")
	#define PATH_ALIGN3_IMG			_T("C:\\R2RSet\\Align\\Align3.TIF")
	#define PATH_PCS_IMG			_T("C:\\R2RSet\\Pcs\\Piece.tif")
#endif


#define MAX_MS				6	
#define MAX_AXIS			4	
typedef enum {MS_X0=0, MS_Y0=1, MS_X1=2, MS_Y1=3, MS_X0Y0=4, MS_X1Y1=5} MS_ID; 
typedef enum {AXIS_X0=0, AXIS_Y0=1, AXIS_X1=2, AXIS_Y1=3} AXIS_ID; 
typedef enum {BTN_UP=1, BTN_DN=2} BTN_ACT; 
typedef enum {OFF=0, ON=1} SWITCH_ACT; 
typedef enum {TO_NONE=0x00, TO_LEFT=0x01, TO_TOP=0x02, TO_RIGHT=0x04, TO_BOTTOM=0x08} POS_DIR; 
typedef enum {M_CCW=-1, M_CW=1} MOTION_DIR; 
typedef enum {YEAR=0, MONTH=1, DAY=2, HOUR=3, MINUTE=4, SEC=5} TIME_PARAM;
typedef enum {UP=0, DN=1, ALL_UP=2, ALL_DN=3, ALL=4} SEL_MAP;
#define MAX_ENC_CNT			2147483648

// Language select
typedef enum {KOREAN=0, ENGLISH=1, JAPANESE=2} LANG; 

#define LANGUAGE	KOREAN

#define Pi		3.14159265358979

#define MAX_LIGHT_CH	4
#define MAX_VOICE_COIL	2

// Define Voice Coil ID & Cmd
#define VOICE_COIL_FIRST_CAM			0
#define VOICE_COIL_SECOND_CAM			1
#define FIRST_CAM_AND_SECOND_CAM		2

#define DELAY_TIME_MSG			2000
#define DELAY_TIME_ONE_MINUTE	6000

#define MB_TIME_OUT					-1
#define DEFAULT_TIME_OUT			120000		// [mSec]


#define ROT_CCW_90		-2
#define ROT_CCW_180		-1
#define ROT_NONE		0
#define ROT_CW_90		1
#define ROT_CW_180		2

#define PATH_MP2100_IO			_T("C:\\R2RSet\\IO.ini")
#define PATH_MP2100_SIGNAL		_T("C:\\R2RSet\\Signal.ini")
#define PATH_MP2100_DATA		_T("C:\\R2RSet\\Data.ini")
// #define PATH_MP2100_IO			_T("C:\\R2RSet\\Mp2100IoList.ini")
// #define PATH_SLICE_IO			_T("C:\\R2RSet\\SliceIoList.ini")
#define PATH_MOTION_PARAM		_T("C:\\R2RSet\\MotionParam.ini")
#define PATH_CONFIG				_T("C:\\R2RSet\\Config.ini")
#define PATH_WORKING_INFO		_T("C:\\R2RSet\\WorkingInfo.ini")
#define PATH_SMAC				_T("C:\\R2RSet\\SMAC.ini")
#define PATH_ALARM				_T("C:\\R2RSet\\Alarm.ini")

#define RGB_BLACK       RGB(0,0,0)
#define RGB_WHITE       RGB(255,255,255)
#define RGB_GRAY        RGB(0x80, 0x80, 0x80)
#define RGB_RED         RGB(255,0,0)
#define RGB_YELLOW      RGB(255,255,0)
#define RGB_DARKYELLOW  RGB(128,128,0)
#define RGB_GREEN       RGB(0,255,0)
#define RGB_LTGREEN     RGB(0,255,128)
#define RGB_DARKGREEN   RGB(64,128,128)
#define RGB_CYAN        RGB(0,255,255)
#define RGB_BLUE        RGB(0,0,255)
#define RGB_LTBLUE		RGB(82, 200, 200)
#define RGB_CLOUDBLUE	RGB(128,184,223)
#define RGB_MAGENTA     RGB(255,0,255)
#define RGB_LTMAGENTA   RGB(255,64,255)
#define RGB_DARKMAGENTA RGB(193,0,130)
#define RGB_LTGRAY      RGB(192,192,192)
#define RGB_DARKGRAY    RGB(128,128,128)
#define RGB_DARKCYAN    RGB(0,128,128)
#define RGB_LTCYAN      RGB(128,255,255)
#define RGB_BOON        RGB(255,0,128)
#define RGB_DARKBOON    RGB(64,0,128)
#define RGB_DARKBLUE    RGB(0,0,128)
#define RGB_PINK        RGB(255,0,128)
#define RGB_LTPINK      RGB(255,64,128)
#define RGB_SKYBLUE		RGB(128,255,255)
#define RGB_PURPLE		RGB(128,0,255)
#define RGB_LTPURPLE	RGB(226,233,251)
#define RGB_LTPURPLE2   RGB(255,128,255)
#define RGB_YELLOWGREEN RGB(128,255,0)
#define RGB_LTYELLOW    RGB(255,255,128)
#define RGB_BROWN       RGB(255,128,0)
#define RGB_CHESTNUT	RGB(128,64,64)
#define RGB_NAVY		RGB(0,0,128)
#define RGB_LLTGREEN    RGB(128,255,128)
#define RGB_LTRED       RGB(255,128,64)
#define RGB_DARKFINGER	RGB(128,0,128)
#define RGB_LAVENDER	RGB(0xe6,0xe6,0xfa)
#define RGB_PLURM		RGB(0xdd,0xa0,0xdd)

#define MRGB_BLACK       M_RGB888(0,0,0)
#define MRGB_WHITE       M_RGB888(255,255,255)
#define MRGB_GRAY        M_RGB888(0x80, 0x80, 0x80)
#define MRGB_RED         M_RGB888(255,0,0)
#define MRGB_YELLOW      M_RGB888(255,255,0)
#define MRGB_DARKYELLOW  M_RGB888(128,128,0)
#define MRGB_GREEN       M_RGB888(0,255,0)
#define MRGB_LTGREEN     M_RGB888(0,255,128)
#define MRGB_DARKGREEN   M_RGB888(0,64,64)
#define MRGB_CYAN        M_RGB888(0,255,255)
#define MRGB_BLUE        M_RGB888(0,0,255)
#define MRGB_MAGENTA     M_RGB888(255,0,255)
#define MRGB_DARKMAGENTA M_RGB888(193,0,130)
#define MRGB_LTGRAY      M_RGB888(192,192,192)
#define MRGB_DARKGRAY    M_RGB888(128,128,128)
#define MRGB_DARKCYAN    M_RGB888(0,128,128)
#define MRGB_LTCYAN      M_RGB888(128,255,255)
#define MRGB_BOON        M_RGB888(255,0,128)
#define MRGB_DARKBOON    M_RGB888(64,0,128)
#define MRGB_DARKBLUE    M_RGB888(0,0,128)
#define MRGB_DARKFINGER	 M_RGB888(128,0,128)

#define RGB_BLACK       RGB(0,0,0)
#define RGB_WHITE       RGB(255,255,255)
#define RGB_GRAY        RGB(0x80, 0x80, 0x80)
#define RGB_RED         RGB(255,0,0)
#define RGB_DARKRED     RGB(207,0,0)
#define RGB_YELLOW      RGB(255,255,0)
#define RGB_DARKYELLOW  RGB(128,128,0)
#define RGB_GREEN       RGB(0,255,0)
#define RGB_LTGREEN     RGB(0,255,128)
#define RGB_CYAN        RGB(0,255,255)
#define RGB_BLUE        RGB(0,0,255)
#define RGB_LTBLUE		RGB(82, 200, 200)
#define RGB_CLOUDBLUE	RGB(128,184,223)
#define RGB_MAGENTA     RGB(255,0,255)
#define RGB_DARKMAGENTA RGB(193,0,130)
#define RGB_WHGRAY      RGB(218,218,218)
#define RGB_LTGRAY      RGB(192,192,192)
#define RGB_DARKCYAN    RGB(0,128,128)
#define RGB_LTCYAN      RGB(128,255,255)
#define RGB_BOON        RGB(255,0,128)
#define RGB_DARKBOON    RGB(64,0,128)
#define RGB_DARKBLUE    RGB(0,0,128)
#define RGB_PINK        RGB(255,0,128)
#define RGB_DARKPINK	RGB(227,64,128)
#define RGB_SKYBLUE		RGB(128,255,255)
#define RGB_DKSKYBLUE	RGB(82,200,200)
#define RGB_PURPLE		RGB(128,0,255)
#define RGB_YELLOWGREEN RGB(128,255,0)
#define RGB_WHYELLOW    RGB(255,255,128)
#define RGB_ORANGE      RGB(255,128,0)
#define RGB_LTDKORANGE  RGB(255,172,89)
#define RGB_DARKORANGE  RGB(220,70,0)
#define RGB_CHESTNUT	RGB(128,64,64)
#define RGB_NAVY		RGB(0,0,128)
#define RGB_LLTGREEN    RGB(128,255,128)
#define RGB_LT_ORANGE   RGB(255,128,64)
#define RGB_DARKFINGER	RGB(128,0,128)
#define RGB_DLG_FRM		RGB(212,208,200)
#define RGB_DLG_FRM2	RGB(240,240,240)
#define RGB_DARKBROWN	RGB(64,0,0)
#define RGB_DIALOG		RGB(200,200,192)
#define RGB_POSTIT		RGB(240,233,134)
#define RGB_DARK_BLUE	RGB(68,136,204)
#define RGB_FRAME		RGB(212,208,200)

#define RGB_DARK_GREEN	RGB(0,125,60)
#define RGB_LT_PURPLE	RGB(179,179,255)
#define RGB_LT_YELLOW	RGB(255,255,150)
#define RGB_LT_PINK		RGB(255,200,200)
#define RGB_LT_GREEN	RGB(195,255,195)
#define RGB_LT_BLUE		RGB(210,255,255)
#define RGB_WH_ORANGE	RGB(255,220,190)


#define PATH_LOCAL_SPEC					_T("C:\\R2RSet\\LocalSpec")


#define MSG_KEYPAD_UP					_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Key_Up.bmp")
#define MSG_BTN_BK_DN					_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Btn_Bk_Dn.bmp")
#define MSG_BTN_BK_UP					_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Btn_Bk_Up.bmp")
#define ICO_BTN_CANCEL					_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Cancel3.ico")
#define ICO_BTN_EXIT					_T("C:\\R2RSet\\Pic\\DlgMyMsg\\EXIT2.ico")

#define MSG_SUB00_KEYPAD_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub00\\Key_Up.bmp")
#define MSG_SUB00_BTN_BK_DN				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub00\\Btn_Bk_Dn.bmp")
#define MSG_SUB00_BTN_BK_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub00\\Btn_Bk_Up.bmp")
#define ICO_SUB00_BTN_CANCEL			_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub00\\Cancel3.ico")
#define ICO_SUB00_BTN_EXIT				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub00\\EXIT2.ico")

#define MSG_SUB01_KEYPAD_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub01\\Key_Up.bmp")
#define MSG_SUB01_BTN_BK_DN				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub01\\Btn_Bk_Dn.bmp")
#define MSG_SUB01_BTN_BK_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub01\\Btn_Bk_Up.bmp")
#define ICO_SUB01_BTN_CANCEL			_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub01\\Cancel3.ico")
#define ICO_SUB01_BTN_EXIT				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub01\\EXIT2.ico")

#define MSG_SUB02_KEYPAD_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub02\\Key_Up.bmp")
#define MSG_SUB02_BTN_BK_DN				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub02\\Btn_Bk_Dn.bmp")
#define MSG_SUB02_BTN_BK_UP				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub02\\Btn_Bk_Up.bmp")
#define ICO_SUB02_BTN_CANCEL			_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub02\\Cancel3.ico")
#define ICO_SUB02_BTN_EXIT				_T("C:\\R2RSet\\Pic\\DlgMyMsg\\Sub02\\EXIT2.ico")

#define ICO_CHK_DlgFrameHigh			_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\button_ok.ico")
#define IMG_BK_DlgFrameHigh				_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\bk.bmp")
#define IMG_BTN_DN_DlgFrameHigh			_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgFrameHigh			_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\Btn_Bk_Up.bmp")
#define ICO_LED_BLU_DlgFrameHigh		_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\3dBallBlue.ico")
#define ICO_LED_RED_DlgFrameHigh		_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\3dBallRed.ico")
#define ICO_LED_GRY_DlgFrameHigh		_T("C:\\R2RSet\\Pic\\DlgFrameHigh\\3DBallGray.ico")

#define IMG_BTN_DN_DlgMenu01			_T("C:\\R2RSet\\Pic\\DlgMenu01\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgMenu01			_T("C:\\R2RSet\\Pic\\DlgMenu01\\Btn_Bk_Up.bmp")
#define NI_BTN_DN_DlgMenu01				_T("C:\\R2RSet\\Pic\\DlgMenu01\\Ni_Bk_Dn2.bmp")
#define NI_BTN_UP_DlgMenu01				_T("C:\\R2RSet\\Pic\\DlgMenu01\\Ni_Bk_Up1.bmp")

#define IMG_BTN_DN_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\Btn_Bk_Up.bmp")
#define IMG_JOG_DN_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\arrow_dn_blue.bmp")
#define IMG_JOG_UP_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\arrow_up_blue.bmp")
#define IMG_JOG_LF_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\arrow_lf_blue.BMP")
#define IMG_JOG_RT_DlgMenu02			_T("C:\\R2RSet\\Pic\\DlgMenu02\\arrow_rt_blue.BMP")

#define IMG_CIR_BLU_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_BLU_OFF.bmp")
#define IMG_CIR_BLU_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_BLU_ON.bmp")
#define IMG_CIR_BLUE_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_BLUE_OFF.bmp")
#define IMG_CIR_BLUE_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_BLUE_ON.bmp")
#define IMG_CIR_DGN_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_DGN_OFF.bmp")
#define IMG_CIR_DGN_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_DGN_ON.bmp")
#define IMG_CIR_GRN_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_GRN_OFF.bmp")
#define IMG_CIR_GRN_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_GRN_ON.bmp")
#define IMG_CIR_GRY_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_GRY_OFF.bmp")
#define IMG_CIR_GRY_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_GRY_ON.bmp")
#define IMG_CIR_ORG_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_ORG_OFF.bmp")
#define IMG_CIR_ORG_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_ORG_ON.bmp")
#define IMG_CIR_PNK_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_PNK_OFF.bmp")
#define IMG_CIR_PNK_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_PNK_ON.bmp")
#define IMG_CIR_RED_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_RED_OFF.bmp")
#define IMG_CIR_RED_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_RED_ON.bmp")
#define IMG_CIR_YLO_OFF_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_YLO_OFF.bmp")
#define IMG_CIR_YLO_ON_DlgMenu03		_T("C:\\R2RSet\\Pic\\DlgMenu03\\BTN_CIR_YLO_ON.bmp")

#define IMG_BTN_DN_DlgMenu04			_T("C:\\R2RSet\\Pic\\DlgMenu04\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgMenu04			_T("C:\\R2RSet\\Pic\\DlgMenu04\\Btn_Bk_Up.bmp")
#define IMG_JOG_UP_DlgMenu04			_T("C:\\R2RSet\\Pic\\DlgMenu04\\arrow_up_blue.bmp")
#define IMG_JOG_DN_DlgMenu04			_T("C:\\R2RSet\\Pic\\DlgMenu04\\arrow_dn_blue.bmp")
#define IMG_CIR_GRN_OFF_DlgMenu04		_T("C:\\R2RSet\\Pic\\DlgMenu04\\BTN_CIR_GRN_OFF.bmp")
#define IMG_CIR_GRN_ON_DlgMenu04		_T("C:\\R2RSet\\Pic\\DlgMenu04\\BTN_CIR_GRN_ON.bmp")

#define IMG_BTN_DN_DlgMenu06			_T("C:\\R2RSet\\Pic\\DlgMenu06\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgMenu06			_T("C:\\R2RSet\\Pic\\DlgMenu06\\Btn_Bk_Up.bmp")
#define NI_BTN_DN_DlgMenu06				_T("C:\\R2RSet\\Pic\\DlgMenu06\\Ni_Bk_Dn2.bmp")
#define NI_BTN_UP_DlgMenu06				_T("C:\\R2RSet\\Pic\\DlgMenu06\\Ni_Bk_Up1.bmp")

#define IMG_BTN_DN_DlgMyPassword		_T("C:\\R2RSet\\Pic\\DlgMyPassword\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgMyPassword		_T("C:\\R2RSet\\Pic\\DlgMyPassword\\Btn_Bk_Up.bmp")
#define IMG_BK_LT_YELLOW				_T("C:\\R2RSet\\Pic\\DlgMyPassword\\bk_light_yellow.bmp")
#define IMG_BK_LT_RED					_T("C:\\R2RSet\\Pic\\DlgMyPassword\\bk_light_red.bmp")

#define IMG_BTN_DN_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\Btn_Bk_Up.bmp")
#define IMG_JOG_DN_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\arrow_dn_blue.bmp")
#define IMG_JOG_UP_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\arrow_up_blue.bmp")
#define IMG_JOG_LF_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\arrow_lf_blue.BMP")
#define IMG_JOG_RT_DlgUtil02			_T("C:\\R2RSet\\Pic\\DlgUtil02\\arrow_rt_blue.BMP")

#define IMG_BTN_DN_DlgUtil03			_T("C:\\R2RSet\\Pic\\DlgUtil03\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgUtil03			_T("C:\\R2RSet\\Pic\\DlgUtil03\\Btn_Bk_Up.bmp")

#define IMG_BTN_DN_DlgUtil04			_T("C:\\R2RSet\\Pic\\DlgUtil04\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgUtil04			_T("C:\\R2RSet\\Pic\\DlgUtil04\\Btn_Bk_Up.bmp")
#define ICO_LED_GRY_DlgUtil04			_T("C:\\R2RSet\\Pic\\DlgUtil04\\3DBallGray.ico")
#define ICO_LED_BLU_DlgUtil04			_T("C:\\R2RSet\\Pic\\DlgUtil04\\3dBallBlue.ico")
#define ICO_LED_RED_DlgUtil04			_T("C:\\R2RSet\\Pic\\DlgUtil04\\3DBallRed.ico")

#define IMG_BTN_DN_DlgUtil05			_T("C:\\R2RSet\\Pic\\DlgUtil05\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgUtil05			_T("C:\\R2RSet\\Pic\\DlgUtil05\\Btn_Bk_Up.bmp")
#define ICO_LED_GRY_DlgUtil05			_T("C:\\R2RSet\\Pic\\DlgUtil05\\3DBallGray.ico")
#define ICO_LED_RED_DlgUtil05			_T("C:\\R2RSet\\Pic\\DlgUtil05\\3DBallRed.ico")

#define IMG_BTN_DN_DlgInfo				_T("C:\\R2RSet\\Pic\\DlgInfo\\Btn_Bk_Dn.bmp")
#define IMG_BTN_UP_DlgInfo				_T("C:\\R2RSet\\Pic\\DlgInfo\\Btn_Bk_Up.bmp")

#define IMG_BK_BLACK					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\bk_black.bmp")
#define IMG_KEYPAD_BK					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\background2.bmp")
#define IMG_KEYPAD_NUM0					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_0_Up.bmp")
#define IMG_KEYPAD_NUM1					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_1_Up.bmp")
#define IMG_KEYPAD_NUM2					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_2_Up.bmp")
#define IMG_KEYPAD_NUM3					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_3_Up.bmp")
#define IMG_KEYPAD_NUM4					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_4_Up.bmp")
#define IMG_KEYPAD_NUM5					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_5_Up.bmp")
#define IMG_KEYPAD_NUM6					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_6_Up.bmp")
#define IMG_KEYPAD_NUM7					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_7_Up.bmp")
#define IMG_KEYPAD_NUM8					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_8_Up.bmp")
#define IMG_KEYPAD_NUM9					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Num_9_Up.bmp")

#define IMG_KEYPAD_DEL					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Del_Up.bmp")
#define IMG_KEYPAD_DOT					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Dot_Up.bmp")
#define IMG_KEYPAD_ENTER				_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Enter_Up.bmp")
#define IMG_KEYPAD_DN					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Dn.bmp")
#define IMG_KEYPAD_UP					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Up.bmp")
#define IMG_KEYPAD_ESC					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Esc_Up.bmp")
#define IMG_KEYPAD_LEFT					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Left_Up1.bmp")
#define IMG_KEYPAD_RIGHT				_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Right_Up1.bmp")
#define IMG_KEYPAD_MINUS				_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Minus_Up0.bmp")
#define IMG_KEYPAD_BS					_T("C:\\R2RSet\\Pic\\DlgKeyNum\\Key_Bs_Up.bmp")

#define IMG_BTN_UP_GRAY_L				_T("C:\\R2RSet\\Pic\\BtnImg\\UpGrayL.bmp")
#define IMG_BTN_UP_GRAY_S				_T("C:\\R2RSet\\Pic\\BtnImg\\UpGrayS.bmp")
#define IMG_BTN_UP_RED_L				_T("C:\\R2RSet\\Pic\\BtnImg\\UpRedL.bmp")
#define IMG_BTN_UP_RED_S				_T("C:\\R2RSet\\Pic\\BtnImg\\UpRedS.bmp")
#define IMG_BTN_UP_PURPLE_L				_T("C:\\R2RSet\\Pic\\BtnImg\\UpPurpleL.bmp")
#define IMG_BTN_UP_PURPLE_S				_T("C:\\R2RSet\\Pic\\BtnImg\\UpPurpleS.bmp")

#define IMG_BTN_DN_RED_L				_T("C:\\R2RSet\\Pic\\BtnImg\\DnRedL.bmp")
#define IMG_BTN_DN_RED_S				_T("C:\\R2RSet\\Pic\\BtnImg\\DnRedS.bmp")
#define IMG_BTN_DN_PURPLE_L				_T("C:\\R2RSet\\Pic\\BtnImg\\DnPurpleL.bmp")
#define IMG_BTN_DN_PURPLE_S				_T("C:\\R2RSet\\Pic\\BtnImg\\DnPurpleS.bmp")
#define IMG_BTN_DN_BLUE_L				_T("C:\\R2RSet\\Pic\\BtnImg\\DnBlueL.bmp")
#define IMG_BTN_DN_BLUE_S				_T("C:\\R2RSet\\Pic\\BtnImg\\DnBlueS.bmp")

#define WM_MYBTN_DOWN					(WM_USER+1)
#define WM_MYBTN_UP						(WM_USER+2)
#define WM_MYEDIT_VSCROLL				(WM_USER+3)
#define WM_MYNETWORK_END				(WM_USER+4)
#define WM_MYGROUP_REDRAW				(WM_USER+5)
#define WM_REFRESH						(WM_USER+6)
#define WM_MY_KEYPADNUM					(WM_USER+7)
#define WM_MYSTATIC_REDRAW				(WM_USER+8)
#define WM_MYSTATIC_MOUSE_MOVE			(WM_USER+9)

#define WM_DLG_INFO						(WM_USER+10)
#define WM_MY_IO						(WM_USER+11)
#define WM_DRAW_REELMAP					(WM_USER+12)
#define WM_DRAW_PCSIMG					(WM_USER+13)
#define WM_DRAW_PINIMG					(WM_USER+14)
#define WM_RECEIVE_RS232				(WM_USER+15)

#define WM_USER_INC_PROGRESS			(WM_USER +20)
#define WM_USER_TASK_COMPLETED			(WM_USER +21)
#define WM_USER_TASK_THREAD_COMPLETED	(WM_USER +22)

#define WM_MYMSG						(WM_USER+30)
#define WM_MYMSG00						(WM_USER+31)
#define WM_MYMSG01						(WM_USER+32)
#define WM_MYMSG02						(WM_USER+33)
#define WM_MYMSG_EXIT					(WM_USER+34)
//#define WM_MYMSG_RTN					(WM_USER+35)

#define WM_BUF_THREAD_DONE				(WM_USER+40)
#define WM_MY_PW						(WM_USER+41)

#define WM_DRAW_REELMAP_INNER			(WM_USER+50)
#define WM_DRAW_REELMAP_OUTER			(WM_USER+51)

#define WM_CLIENT_RECEIVED				(WM_USER + 100)
#define WM_CLIENT_CLOSED				(WM_USER + 101)
#define WM_CLIENT_RECEIVED_MDX			(WM_USER + 102)
#define WM_CLIENT_RECEIVED_SR			(WM_USER + 103)

#define WM_SERVER_RECEIVED				(WM_USER + 110)
#define WM_SERVER_CLOSED				(WM_USER + 111)

#define WM_MYBTN_DBLCLK					(WM_USER + 120)


// Flow control flags

#define FC_DTRDSR       0x01
#define FC_RTSCTS       0x02
#define FC_XONXOFF      0x04

// ascii definitions

#define ASCII_BEL       0x07
#define ASCII_BS        0x08
#define ASCII_LF        0x0A
#define ASCII_CR        0x0D
#define ASCII_XON       0x11
#define ASCII_XOFF      0x13

#define DEF_UPPER					19

#define MAX_DEF						26
#define DEF_NONE					0		// NONE 	
#define DEF_NICK					1		// Nick 	
#define DEF_PROTRUSION				2		// Excessive line width
#define DEF_SPACE					3		// Minimum space violation
#define DEF_OPEN					4		// Pattern open
#define DEF_SHORT					5		// Pattern short
#define DEF_USHORT					6		// Micro short
#define DEF_PINHOLE					7		// Void, pinhole
#define DEF_HOLE_MISS				8		// Missing Hole
#define DEF_EXTRA					9		// Island
#define DEF_PAD						10		// Precision Pattern Error
#define DEF_HOLE_POSITION			11      // Location Hole 
#define DEF_POI						12		// Point of interest (Virtual defect by operator specfied)
#define DEF_VH_POSITION			    13		// Via hole positionning
#define DEF_VH_MISS					14		// Via hole missing
#define DEF_HOLE_DEFECT		    	15		// Hole burr..
#define DEF_HOLE_OPEN				16		// Hole open
#define DEF_VH_OPEN					17	    // VH open
#define DEF_VH_DEF					18	    // Reserved
#define DEF_EDGE_NICK				19		// Edge Nick
#define DEF_EDGE_PROT				20	    // Edge Protrusion
#define DEF_EDGE_SPACE				21	    // Edge Space
#define DEF_USER_DEFINE_1			22	    // User Define 1
#define DEF_NARROW					23	    // User Define 2
#define DEF_WIDE					24	    // User Define 3
#define DEF_LIGHT					25	

enum SAPP3_CODE{	SAPP3_OPEN = 0,
//					SAPP3_SHORT_USHORT = 1,
					SAPP3_SHORT = 1,
					SAPP3_NICK = 2,
					SAPP3_SPACE_EXTRA_PROTRUSION = 3,
//					SAPP3_PINHOLE_PAD = 4,
					SAPP3_PINHOLE = 4,
					SAPP3_HOPEN = 5,
					SAPP3_HMISS_HPOS_HBAD = 6,
					SAPP3_USHORT = 7,
					SAPP3_PAD = 8,
					SAPP3_VHOPEN_NOVH_VHALIGN_VHDEF = 9
				};


#define DLY_INK_MK			300

#define  MAX_PROCNODENUM			60    // Max ProcNodeNum : 600mm/2.5um = 48 
#define  MAX_MOTOR_SWATH_NUM		35    // MAX Motor swath num : 500mm/(8k*2.5um) = 25  
#define  MAX_CELL_NUM				(MAX_PROCNODENUM * MAX_MOTOR_SWATH_NUM) * 3    // 4500 ea, 3IPU


#define PATH_ERROR			-1
#define PATH_NOT_FOUND		0
#define PATH_IS_FILE		1
#define PATH_IS_FOLDER		2

#ifndef ID_NONE
#define ID_NONE			-1
#endif

#ifndef ID_SR1000W
#define ID_SR1000W		0
#endif

#ifndef ID_MDX2500
#define ID_MDX2500		1
#endif

#ifndef ID_PUNCH
#define ID_PUNCH		2
#endif

#ifndef ID_ENGRAVE
#define ID_ENGRAVE		2
#endif

typedef struct 
{
	int iStartX, iStartY;
	int iEndX, iEndY;
	int FMirror;	//0 : Defult 1 : Up to Down Mirroring  2 : Left to Right Mirroring
	int FRotate;	//0 : 0  1 : 90  2 : 180  3 : 270 [Degree]
} REGIONS_PIECE;

typedef struct {
	int nId;
	int iStartX, iStartY;
	int iEndX, iEndY;
	int FMirror;	//0 : 원본 1 : 상하미러  2 : 좌퓖E肩?
	int FRotate;	//0 : 0도  1 : 90도  2 : 180도  3 : 270도
	int Row;
	int Col;
} REGIONS_PIECE_2;


#define MYGL_GAP_PNL				5
#define MAX_DISP_PNL				6
#define MAX_PCR_PNL					24

#define MENU01_STC_DEFINFO_HARF		6
#define MAX_PCR						4

#define RMAP_PCS_SCALE				0.85
#define TOT_M_IO					30

#define BUF_SZ						50

#define PNL_TOT						2500
#define PNLBUF_Y					50
#define PNLBUF_X					50

enum SEL_RMAP {
	RMAP_NONE = -1, RMAP_UP = 0, RMAP_DN = 1, RMAP_ALLUP = 2, RMAP_ALLDN = 3, 
	RMAP_INNER_UP = 4, RMAP_INNER_DN = 5, RMAP_INNER_ALLUP = 6, RMAP_INNER_ALLDN = 7,
	RMAP_INOUTER_UP = 8, RMAP_INOUTER_DN = 9, RMAP_INNER = 10, RMAP_ITS = 11
};

enum SEL_CAM { CAM_LF=0, CAM_RT=1, CAM_BOTH=2 };
enum MAIN_BTN { MN_RST=0, MN_RDY=1, MN_STOP=2, MN_RUN=3 };

enum IMG_KIND { CAD_IMG=0, DEF_IMG=1 };
enum ALIGN_METHODE { ONE_POINT = 1, TWO_POINT, THREE_POINT, FOUR_POINT };

enum WORK_MODE { MODE_NONE = 0, MODE_INNER = 1, MODE_OUTER = 2, MODE_MIDDLE = 3 };


struct stSystem
{
	CString sMcName;
	CString sPathCamSpecDir;

	CString sPathAoiUp, sPathAoiUpDts, sPathAoiUpCurrInfo, sPathAoiUpVrsData, sPathAoiUpOffset, sPathAoiUpDefImg;
	CString sPathAoiUpLocalSpec, sPathAoiUpCamInfo;
	CString sPathVrsShareUp, sPathVrsBufUp;
	CString sPathVsShareUp, sPathVsDummyBufUp;
	CString sPathAoiDn, sPathAoiDnDts, sPathAoiDnCurrInfo, sPathAoiDnVrsData, sPathAoiDnOffset, sPathAoiDnDefImg;
	CString sPathAoiDnLocalSpec, sPathAoiDnCamInfo;
	CString sPathVrsShareDn, sPathVrsBufDn;
	CString sPathVsShareDn, sPathVsDummyBufDn;

	CString sPathEng, sPathEngCurrInfo, sPathEngOffset, sPathMkCurrInfo, sPathMkCurrInfoBuf;
	CString sPathMkSignalInfo, sPathEngSignalInfo, sPathAoiUpStatusInfo, sPathAoiDnStatusInfo;
	CString sPathMkMenu01, sPathMkMenu03, sPathMkInfo, sPathMonDispMain;
	CString sPathMkWork, sPathMkStatus;

	CString sPathOldFile, sPathItsFile, sPathIts;
	CString sIpPathOldFile, sIpPathItsFile, sIpPathIts;
	CString sPathSapp3;
	BOOL bSaveLog;
	BOOL bNoMk;	// 0 : 마킹모드, 1 : 비젼모드
	CString sReViewMkLen;
	BOOL bReViewMk;

	CString sMaxDispDefImg;
	CString sCamSn[2];

	CString sIpClient[3];	// ID_SR1000W, ID_MDX2500, ID_PUNCH
	CString sIpServer[3];	// ID_SR1000W, ID_MDX2500, ID_ENGRAVE
	CString sPort[3];		// ID_SR1000W, ID_MDX2500, ID_ENGRAVE(ID_PUNCH)
	BOOL bSaveMkImg, bSaveGrabImg;
	BOOL bStripPcsRgnBin;
	BOOL bUseDTS, bUseITS;

	stSystem()
	{
		sMcName = _T("");
		sPathCamSpecDir = _T("");

		sPathAoiUp = _T(""); sPathAoiUpDts = _T(""); sPathAoiUpCurrInfo = _T(""); sPathAoiUpDefImg = _T("");
		sPathAoiUpOffset = _T(""); sPathAoiUpVrsData = _T(""); sPathAoiUpCamInfo = _T("");
		sPathAoiUpLocalSpec = _T("");
		sPathVrsShareUp = _T(""); sPathVrsBufUp = _T("");
		sPathVsShareUp = _T(""); sPathVsDummyBufUp = _T("");
		sPathAoiDn = _T(""); sPathAoiDnDts = _T(""); sPathAoiDnCurrInfo = _T(""); sPathAoiDnDefImg = _T("");
		sPathAoiDnOffset = _T(""); sPathAoiDnVrsData = _T(""); sPathAoiDnCamInfo = _T("");
		sPathAoiDnLocalSpec = _T("");
		sPathVrsShareDn = _T(""); sPathVrsBufDn = _T("");
		sPathVsShareDn = _T(""); sPathVsDummyBufDn = _T("");

		sPathEng = _T(""); sPathEngCurrInfo = _T(""); sPathEngOffset = _T(""); sPathMkCurrInfo = _T("");
		sPathMkSignalInfo = _T(""); sPathEngSignalInfo = _T("");
		sPathAoiUpStatusInfo = _T(""); sPathAoiDnStatusInfo = _T("");
		sPathMkCurrInfoBuf = _T(""); sPathMkMenu01 = _T(""); sPathMkMenu03 = _T(""); sPathMkInfo = _T(""); sPathMonDispMain = _T("");
		sPathMkWork = _T(""); sPathMkStatus = _T("");

		sPathOldFile = _T("");
		sPathItsFile = _T("");
		sPathIts = _T("");
		sIpPathOldFile = _T("");
		sIpPathItsFile = _T("");
		sIpPathIts = _T("");
		bSaveLog = FALSE;
		bNoMk = FALSE;	// 0 : 마킹모드, 1 : 비젼모드
		sReViewMkLen = _T("");
		bReViewMk = FALSE;
		sPathSapp3 = _T("");

		sCamSn[0] = _T(""); sCamSn[1] = _T("");
		sMaxDispDefImg = _T("");

		sIpClient[ID_SR1000W] = _T(""); sIpClient[ID_MDX2500] = _T(""); sIpClient[ID_PUNCH] = _T("");	// ID_SR1000W, ID_MDX2500, ID_PUNCH
		sIpServer[ID_SR1000W] = _T(""); sIpServer[ID_MDX2500] = _T(""); sIpServer[ID_ENGRAVE] = _T("");	// ID_SR1000W, ID_MDX2500, ID_ENGRAVE
		sPort[ID_SR1000W] = _T(""); sPort[ID_MDX2500] = _T(""); sPort[ID_ENGRAVE] = _T("");				// ID_SR1000W, ID_MDX2500, ID_ENGRAVE(ID_PUNCH)

		bSaveMkImg = FALSE;
		bSaveGrabImg = FALSE;
		bStripPcsRgnBin = FALSE;
		bUseDTS = FALSE;
		bUseITS = FALSE;
	}
};

struct stEngraveInfo
{
	CString sProcessNum;
	CString sModel, sLayerUp, sLot, sSerialUp, sCompletedSerialUp;
	CString sLayerDn, sSerialDn, sCompletedSerialDn;
	CString sSerialEng;
	CString sInnerModel, sInnerLayerUp, sInnerLot;
	CString sInnerLayerDn;
	CString sEngItsCode;

	stEngraveInfo()
	{
		sProcessNum = _T("");
		sModel = _T(""); sLayerUp = _T(""); sLot = _T(""); sSerialUp = _T(""); sCompletedSerialUp = _T("");
		sLayerDn = _T(""); sSerialDn = _T(""); sCompletedSerialDn = _T("");
		sSerialEng = _T("");
		sInnerModel = _T(""); sInnerLayerUp = _T(""); sInnerLot = _T("");
		sInnerLayerDn = _T("");
		sEngItsCode = _T("");
	}
};

struct stLastJob
{
	CString sProcessNum;
	CString sModel, sLayerUp, sLot, sSerialUp, sCompletedSerialUp;
	CString sLayerDn, sSerialDn, sCompletedSerialDn;
	CString sSerialEng;
	CString sInnerModelUp, sInnerLayerUp, sInnerLotUp;
	CString sInnerModelDn, sInnerLayerDn, sInnerLotDn;

	CString sSelUserName, sReelTotLen, sOnePnlLen;
	BOOL bLotSep;
	CString sLotSepLen, sLotCutPosLen;
	BOOL bTempPause;	// [0]:AOI-Up , [1]:AOI-Dn
	int nMergingLayer;
	CString sTempPauseLen, sLmtTotYld, sLmtPatlYld;
	CString sStripOutRatio, sCustomNeedRatio;
	BOOL bContFixDef;
	CString sNumRangeFixDef, sNumContFixDef, sUltraSonicCleannerStTim, sEngItsCode;
	BOOL bRclDrSen, bMkDrSen, bBufDrSen, bAoiUpDrSen, bAoiDnDrSen, bEngvDrSen, bUclDrSen;
	BOOL bUse380mm;
	BOOL bDispMkPcs, bStopFixDef, bMkSftySen, bAoiSftySen;
	CString sJogSpd, sLotSerial; //sLightVal, 
	BOOL bLightOn, bMkOnePnl, bAoiOnePnl, bEngraveOnePnl;
	BOOL bVerify, bReview;
	int nVerifyPeriod;
	CString sVerifyLen;
	//CString sDistAoiMk;
	CString sFurgeNum, sFurgeRun;
	CString sMkLastShot;
	CString sAoiLastShot[2]; // [Up/Dn]
	CString sPartialSpd;
	BOOL bOneMetal, bTwoMetal;
	BOOL bDualTest, bDualTestInner, bSampleTest;
	int nTestMode;
	BOOL bCore150Recoiler, bCore150Uncoiler;
	CString sSampleTestShotNum;
	BOOL bUse2Layer;
	CString sEngraveOrderNum, sEngraveLastShot;
	CString sEngraveOrgX, sEngraveOrgY, sEngravePosOffsetX, sEngravePosOffsetY, sEngravePosTheta;
	int nAlignMethode;
	BOOL bUseAoiUpCleanRoler, bUseAoiDnCleanRoler;
	BOOL bUseEngraveUltrasonic, bUseAoiDnUltrasonic;
	BOOL bVelEngraveUltrasonic, bVelAoiDnUltrasonic;
	CString sCurrentShotNum, sSettingShotNum;
	int nAlarmTimePunch, nAlarmTimeAoi;
	BOOL bDispContRun, bDispLotEnd;

	stLastJob()
	{
		sProcessNum = _T("");
		sModel = _T(""); sLayerUp = _T(""); sLot = _T(""); sSerialUp = _T(""); sCompletedSerialUp = _T("");
		sLayerDn = _T(""); sSerialDn = _T(""); sCompletedSerialDn = _T("");
		sSerialEng = _T("");
		sInnerModelUp = _T(""); sInnerLayerUp = _T(""); sInnerLotUp = _T("");
		sInnerModelDn = _T(""); sInnerLayerDn = _T(""); sInnerLotDn = _T("");

		sSelUserName = _T(""); sReelTotLen = _T(""); sOnePnlLen = _T("");
		bLotSep = FALSE;
		sLotSepLen = _T(""); sLotCutPosLen = _T("");
		bTempPause = FALSE;
		nMergingLayer = 0; 	// [0]:AOI-Up , [1]:AOI-Dn
		sTempPauseLen = _T(""); sLmtTotYld = _T(""); sLmtPatlYld = _T("");
		sStripOutRatio = _T("20.0"); // Minimum 20%
		sCustomNeedRatio = _T("");
		bContFixDef = FALSE;
		sNumRangeFixDef = _T("");
		sNumContFixDef = _T("");
		sUltraSonicCleannerStTim = _T("5.0"); // AOI_Dn : MW05940, AOI_Up : MW05942
		bRclDrSen = FALSE; bMkDrSen = FALSE; bBufDrSen = FALSE; bAoiUpDrSen = FALSE; bAoiDnDrSen = FALSE; bEngvDrSen = FALSE; bUclDrSen = FALSE; 
		bUse380mm = FALSE;
		bDispMkPcs = FALSE; bStopFixDef = FALSE; bMkSftySen = FALSE; bAoiSftySen = FALSE;
		sJogSpd = _T(""); sLotSerial = _T(""); //sLightVal=""); 
		bLightOn = FALSE; bMkOnePnl = FALSE; bAoiOnePnl = FALSE; bEngraveOnePnl = FALSE;
		bVerify = FALSE; bReview = FALSE;
		sVerifyLen = _T("");
		nVerifyPeriod = 0;
		//sDistAoiMk = _T("");
		sFurgeNum = _T(""); sFurgeRun = _T("");
		sMkLastShot = _T("0");
		sAoiLastShot[0] = _T("0");
		sAoiLastShot[1] = _T("0");
		sPartialSpd = _T("10");

		bOneMetal = FALSE; bTwoMetal = FALSE;
		bDualTest = TRUE; bDualTestInner = TRUE; bSampleTest = FALSE; nTestMode = 0;
		bCore150Recoiler = FALSE; bCore150Uncoiler = FALSE;
		sSampleTestShotNum = _T("");
		bUseEngraveUltrasonic = FALSE; bUseAoiDnUltrasonic = FALSE;
		bVelEngraveUltrasonic = FALSE; bVelAoiDnUltrasonic = FALSE;

		bUse2Layer = FALSE;

		sEngraveOrderNum = _T(""); sEngraveLastShot = _T("");
		sEngraveOrgX = _T(""); sEngraveOrgY = _T(""); sEngravePosOffsetX = _T(""); sEngravePosOffsetY = _T(""); sEngravePosTheta = _T("");
		nAlignMethode = TWO_POINT;

		bUseAoiUpCleanRoler = FALSE; bUseAoiDnCleanRoler = FALSE;
		sEngItsCode = _T("");
		sCurrentShotNum = _T(""); sSettingShotNum = _T("");

		nAlarmTimePunch = 10800; nAlarmTimeAoi = 10800;
		bDispContRun = FALSE; bDispLotEnd = FALSE;
	}
};

struct stMarking
{
	CString sWaitPos;
	CString sWaitVel;
	CString sWaitAcc;
	CString sMarkingPos;
	CString sMarkingVel;
	CString sMarkingAcc;
	CString sMarkingToq;
	CString sMarkingToqOffset;
	CString sMeasurePosX[4], sMeasurePosY[4];
	CString sAverDist;
	CString sMarkingDisp1Toq, sMarkingDisp2Toq;
	int nMkCnt;
	int nMkLimit;

	stMarking()
	{
		sWaitPos = _T("");
		sWaitPos = _T("");
		sWaitVel = _T("");
		sWaitAcc = _T("");
		sMarkingPos = _T("");
		sMarkingVel = _T("");
		sMarkingAcc = _T("");
		sMarkingToq = _T("");
		sMarkingToqOffset = _T("");
		sMarkingDisp1Toq = _T("");
		sMarkingDisp2Toq = _T("");

		for (int i = 0; i < 4; i++)
		{
			sMeasurePosX[i] = _T("");
			sMeasurePosY[i] = _T("");
		}

		sAverDist = _T("");

		nMkCnt = 0;
		nMkLimit = 0;
	}
};

struct stElecChk
{
	BOOL bUse, bStopOnOpen;
	CString sWaitPos;
	CString sWaitVel;
	CString sWaitAcc;
	CString sProbingPos;
	CString sProbingVel;
	CString sProbingAcc;
	CString sProbingToq;
	CString sMeasurePosX, sMeasurePosY;
	CString sRepeatTestNum;
	int nRepeatTest;

	stElecChk()
	{
		bUse = TRUE;
		bStopOnOpen = TRUE;
		sWaitPos = _T("");
		sWaitPos = _T("");
		sWaitVel = _T("");
		sWaitAcc = _T("");
		sProbingPos = _T("");
		sProbingVel = _T("");
		sProbingAcc = _T("");
		sProbingToq = _T("");

		sMeasurePosX = _T("");
		sMeasurePosY = _T("");
		sRepeatTestNum = _T("3");
		nRepeatTest = 0;
	}
};

struct stVocieCoil
{
	CString sPort, sBaudRate, sVal;
	BOOL bCr, bLf;
	CString sSmacHeightAtPos[4];
	CString sSmacAverageDist;
	//	CString sSmacFinalPos, sSmacFinalVel, sSmacFinalAcc, sSmacFinalToq;
	//	CString sSmacShiftPos, sSmacShiftVel, sSmacShiftAcc, sSmacShiftToq;
	stVocieCoil()
	{
		sPort = _T(""); sBaudRate = _T(""); sVal = _T("");
		bCr = FALSE; bLf = FALSE;
		sSmacAverageDist = _T("");

		for (int i = 0; i < 4; i++)
		{
			sSmacHeightAtPos[i] = _T("");
		}
	}
};

struct stLight
{
	CString sPort, sBaudRate, sCh[MAX_LIGHT_CH], sVal[MAX_LIGHT_CH];
	BOOL bCr, bLf;

	stLight()
	{
		sPort = _T(""); sBaudRate = _T("");
		bCr = FALSE; bLf = FALSE;
		for (int i = 0; i < MAX_LIGHT_CH; i++)
		{
			sCh[i] = _T("");
			sVal[i] = _T("");
		}
	}
};

struct stFluck
{
	BOOL bUse;
	CString sPort, sBaudRate;
	BOOL bCr, bLf;
	CString sThreshold;
	CString sRejectMkNum; // in Strip
	double dMeasPosX[2], dMeasPosY[2];

	stFluck()
	{
		bUse = FALSE;
		sPort = _T(""); sBaudRate = _T("");
		bCr = TRUE; bLf = FALSE;

		sThreshold = _T("");
		sRejectMkNum = _T("");

		dMeasPosX[0] = 0.0; dMeasPosY[0] = 0.0;
		dMeasPosX[1] = 0.0; dMeasPosY[1] = 0.0;
	}
};

struct stVision
{
	CString sCamPxlRes;
	CString sPinImgSz;
	CString sResX, sResY;
	CString sMkOffsetX, sMkOffsetY;
	CString sAlgnPosX[2], sAlgnPosY[2];
	CString sPtMatScr, sStdScr;

	stVision()
	{
		sCamPxlRes = _T("");
		sPinImgSz = _T("");
		sResX = _T(""); sResY = _T("");
		sMkOffsetX = _T(""); sMkOffsetY = _T("");
		sAlgnPosX[2] = _T(""); sAlgnPosY[2] = _T("");
		sPtMatScr = _T("");
		sPtMatScr = _T("");
	}
};

struct stLotTime
{
	int nYear, nMonth, nDay;
	int nHour, nMin, nSec;

	stLotTime()
	{
		nYear = 0; nMonth = 0; nDay = 0;
		nHour = 0; nMin = 0; nSec = 0;
	}
};

struct stLot
{
	stLotTime StTime, CurTime, EdTime;
	DWORD dwStTick;
	CString sTotalReelDist;
	CString sSeparateDist;
	CString sCuttingDist;
	CString sStopDist;

	stLot()
	{
		sTotalReelDist = _T("");
		sSeparateDist = _T("");
		sCuttingDist = _T("");
		sStopDist = _T("");
	}
};

struct stModelInfo
{
	CString sModel, sLayer, sLot, sItsCode;

	stModelInfo()
	{
		sModel = _T("");
		sLayer = _T("");
		sLot = _T("");
		sItsCode = _T("");
	}
};

struct stJobModel
{
	CString sModel, sLayerUp, sLayerDn, sLot, sItsCode;
	CString sLayerUpInner, sLayerDnInner, sLotInner;
	int nTestMode, nTestModeInner;

	stJobModel()
	{
		sModel = _T("");
		sItsCode = _T("");
		sLot = _T("");
		sLayerUp = _T("");
		sLayerDn = _T("");
		nTestMode = 0;
		sLotInner = _T("");
		sLayerUpInner = _T("");
		sLayerDnInner = _T("");
		nTestModeInner = 0;
	}

	~stJobModel(){}	

	void Reset() 
	{
		sModel = _T("");
		sItsCode = _T("");
		sLot = _T("");
		sLayerUp = _T("");
		sLayerDn = _T("");
		nTestMode = 0;
		sLotInner = _T("");
		sLayerUpInner = _T("");
		sLayerDnInner = _T("");
		nTestModeInner = 0;
	}

	stJobModel& stJobModel::operator=(stJobModel& Info)
	{
		sModel = Info.sModel;
		sItsCode = Info.sItsCode;
		sLot = Info.sLot;
		sLayerUp = Info.sLayerUp;
		sLayerDn = Info.sLayerDn;
		nTestMode = Info.nTestMode;
		sLotInner = Info.sLotInner;
		sLayerUpInner = Info.sLayerUpInner;
		sLayerDnInner = Info.sLayerDnInner;
		nTestModeInner = Info.nTestModeInner;

		return *this;
	}

};

struct stWorkingInfo
{
	stSystem System;
	stLastJob LastJob;
	stMotionMotion Motion;
	stMarking Marking[2];
	stVocieCoil VoiceCoil[2];
	stLight Light;
	stFluck Fluck;
	stVision Vision[2];
	stLot Lot;
	stElecChk Probing[2];
	stEngraveInfo EngInfo;
	stJobModel PrevModel, CurrModel, NextModel; // PrevModel : 마킹이 끝난 모델, CurrModel : 마킹하는 모델, NextModel : 마킹을 할 예정인 모델
};

struct stYield
{
	int nTot, nGood, nDef;
	int nTotSriptOut;
	int nDefStrip[MAX_STRIP_NUM], nDefA[MAX_DEF], nDefPerStrip[MAX_STRIP_NUM][MAX_DEF], nStripOut[MAX_STRIP_NUM];

	stYield()
	{
		nTot = 0; nGood = 0; nDef = 0;
		nTotSriptOut = 0;
		nDefStrip[0] = 0; nDefStrip[1] = 0; nDefStrip[2] = 0; nDefStrip[3] = 0;
		nStripOut[0] = 0; nStripOut[1] = 0; nStripOut[2] = 0; nStripOut[3] = 0;

		for (int k = 0; k < MAX_DEF; k++)
		{
			nDefA[k] = 0;

			for (int i = 0; i < MAX_STRIP_NUM; i++)
			{
				nDefPerStrip[i][k] = 0;
			}
		}
	}

	~stYield()
	{
		;
	}
};



struct stSliceIo
{
	int nMaxSeg, nInSeg, nOutSeg;
	CString **pAddrIn, **pAddrOut;

	stSliceIo()
	{
		nMaxSeg = 0; nInSeg = 0; nOutSeg = 0;
		pAddrIn = NULL;
		pAddrOut = NULL;
	}

	~stSliceIo()
	{
		if (pAddrIn)
		{
			for (int k = 0; k < nInSeg; k++)
				delete[] pAddrIn[k];
			delete[] pAddrIn;
			pAddrIn = NULL;
		}

		if (pAddrOut)
		{
			for (int k = 0; k < nOutSeg; k++)
				delete[] pAddrOut[k];
			delete[] pAddrOut;
			pAddrOut = NULL;
		}
	}
};

struct stMpeIo
{
	int nMaxSeg, nInSeg, nOutSeg;
	CString **pAddrIn, **pAddrOut;
	CString **pSymIn;

	int nGrpStep;
	int nGrpIn, nGrpOut;
	int nGrpInSt, nGrpOutSt;

	stMpeIo()
	{
		pAddrIn = NULL;
		pAddrOut = NULL;
		pSymIn = NULL;
	}

	~stMpeIo()
	{
		if (pAddrIn)
		{
			for (int k = 0; k < nInSeg; k++)
				delete[] pAddrIn[k];
			delete[] pAddrIn;
			pAddrIn = NULL;
		}

		if (pAddrOut)
		{
			for (int k = 0; k < nOutSeg; k++)
				delete[] pAddrOut[k];
			delete[] pAddrOut;
			pAddrOut = NULL;
		}

		if (pSymIn)
		{
			for (int k = 0; k < nInSeg; k++)
				delete[] pSymIn[k];
			delete[] pSymIn;
			pSymIn = NULL;
		}
	}
};

struct stMkIo
{
	// 	stSliceIo SliceIo;
	stMpeIo MpeIo, MpeSignal, MpeData;
};


struct stBtnMain
{
	BOOL Ready, Run, Reset, Stop, Auto, Manual;
	BOOL PrevReady, PrevRun, PrevReset, PrevStop, PrevAuto, PrevManual;

	BOOL IsReady, IsRun, IsReset, IsStop, IsAuto, IsManual;
	BOOL IsPrevReady, IsPrevRun, IsPrevReset, IsPrevStop, IsPrevAuto, IsPrevManual;

	stBtnMain()
	{
		Init();
	}

	void Init()
	{
		Ready = FALSE; Run = FALSE; Reset = FALSE; Stop = FALSE; Auto = FALSE; Manual = FALSE;
		PrevReady = FALSE; PrevRun = FALSE; PrevReset = FALSE; PrevStop = FALSE; PrevAuto = FALSE; PrevManual = FALSE;

		IsReady = FALSE; IsRun = FALSE; IsReset = FALSE; IsStop = FALSE; IsAuto = FALSE; IsManual = FALSE;
		IsPrevReady = FALSE; IsPrevRun = FALSE; IsPrevReset = FALSE; IsPrevStop = FALSE; IsPrevAuto = FALSE; IsPrevManual = FALSE;
	}
};

struct stBtnMsg
{
	BOOL Yes, No, Ok, Cancel;
	BOOL IsYes, IsNo, IsOk, IsCancel;

	stBtnMsg()
	{
		Init();
	}

	void Init()
	{
		Yes = FALSE; No = FALSE; Ok = FALSE; Cancel = FALSE;
		IsYes = FALSE; IsNo = FALSE; IsOk = FALSE; IsCancel = FALSE;
	}
};

struct stBtnDisp
{
	BOOL DualSample, SingleSample, DualTest, SingleTest, InitRun, Ready, Run, Stop;
	BOOL PrevDualSample, PrevSingleSample, PrevDualTest, PrevSingleTest, PrevInitRun, PrevReady, PrevRun, PrevStop;

	BOOL IsDualSample, IsSingleSample, IsDualTest, IsSingleTest, IsInitRun, IsReady, IsRun, IsStop;
	BOOL IsPrevDualSample, IsPrevSingleSample, IsPrevDualTest, IsPrevSingleTest, IsPrevInitRun, IsPrevReady, IsPrevRun, IsPrevStop;

	stBtnDisp()
	{
		Init();
	}

	void Init()
	{
		DualSample = FALSE; SingleSample = FALSE; DualTest = FALSE; SingleTest = FALSE; InitRun = FALSE;
		Ready = FALSE; Run = FALSE; Stop = FALSE;
		PrevDualSample = FALSE; PrevSingleSample = FALSE; PrevDualTest = FALSE; PrevSingleTest = FALSE;
		PrevInitRun = FALSE; PrevReady = FALSE; PrevRun = FALSE; PrevStop = FALSE;

		IsDualSample = FALSE; IsSingleSample = FALSE; IsDualTest = FALSE; IsSingleTest = FALSE; IsInitRun = FALSE;
		IsReady = FALSE; IsRun = FALSE; IsStop = FALSE;
		IsPrevDualSample = FALSE; IsPrevSingleSample = FALSE; IsPrevDualTest = FALSE; IsPrevSingleTest = FALSE;
		IsPrevInitRun = FALSE; IsPrevReady = FALSE; IsPrevRun = FALSE; IsPrevStop = FALSE;
	}
};

struct stBtnTqMotor
{
	BOOL Mk, Aoi, Eng;
	BOOL PrevMk, PrevAoi, PrevEng;

	BOOL IsMk, IsAoi, IsEng;
	BOOL IsPrevMk, IsPrevAoi, IsPrevEng;

	stBtnTqMotor()
	{
		Mk = FALSE; Aoi = FALSE; Eng = FALSE;
		PrevMk = FALSE; PrevAoi = FALSE; PrevEng = FALSE;

		IsMk = FALSE; IsAoi = FALSE; IsEng = FALSE;
		IsPrevMk = FALSE; IsPrevAoi = FALSE; IsPrevEng = FALSE;
	}
};

struct stBtnInductMotor
{
	BOOL Uc, Rc;
	BOOL PrevUc, PrevRc;

	BOOL IsUc, IsRc;
	BOOL IsPrevUc, IsPrevRc;

	stBtnInductMotor()
	{
		Uc = FALSE; Rc = FALSE;
		PrevUc = FALSE; PrevRc = FALSE;

		IsUc = FALSE; IsRc = FALSE;
		IsPrevUc = FALSE; IsPrevRc = FALSE;
	}
};

struct stBtnCore150
{
	BOOL Uc, Rc;
	BOOL PrevUc, PrevRc;

	BOOL IsUc, IsRc;
	BOOL IsPrevUc, IsPrevRc;

	stBtnCore150()
	{
		Uc = FALSE; Rc = FALSE;
		PrevUc = FALSE; PrevRc = FALSE;

		IsUc = FALSE; IsRc = FALSE;
		IsPrevUc = FALSE; IsPrevRc = FALSE;
	}
};

struct stBtnEtc
{
	BOOL BufR, EmgAoi;
	BOOL PrevBufR, PrevEmgAoi;

	BOOL IsBufR, IsEmgAoi;
	BOOL IsPrevBufR, IsPrevEmgAoi;

	stBtnEtc()
	{
		BufR = FALSE; EmgAoi = FALSE;
		PrevBufR = FALSE; PrevEmgAoi = FALSE;

		IsBufR = FALSE; IsEmgAoi = FALSE;
		IsPrevBufR = FALSE; IsPrevEmgAoi = FALSE;
	}
};

struct stBtnRecoiler
{
	BOOL Relation, FdCw, FdCcw, ReelChuck;
	BOOL DcRlUpDn, ReelJoinL, ReelJoinR, ReelJoinVac;
	BOOL PprChuck, PprCw, PprCcw, Rewine, RewineReelPpr;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevReelChuck;
	BOOL PrevDcRlUpDn, PrevReelJoinL, PrevReelJoinR, PrevReelJoinVac;
	BOOL PrevPprChuck, PrevPprCw, PrevPprCcw, PrevRewine, PrevRewineReelPpr;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsReelChuck;
	BOOL IsDcRlUpDn, IsReelJoinL, IsReelJoinR, IsReelJoinVac;
	BOOL IsPprChuck, IsPprCw, IsPprCcw, IsRewine, IsRewineReelPpr;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevReelChuck;
	BOOL IsPrevDcRlUpDn, IsPrevReelJoinL, IsPrevReelJoinR, IsPrevReelJoinVac;
	BOOL IsPrevPprChuck, IsPrevPprCw, IsPrevPprCcw, IsPrevRewine, IsPrevRewineReelPpr;

	stBtnRecoiler()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; ReelChuck = FALSE;
		DcRlUpDn = FALSE; ReelJoinL = FALSE; ReelJoinR = FALSE; ReelJoinVac = FALSE;
		PprChuck = FALSE; PprCw = FALSE; PprCcw = FALSE; Rewine = FALSE; RewineReelPpr = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevReelChuck = FALSE;
		PrevDcRlUpDn = FALSE; PrevReelJoinL = FALSE; PrevReelJoinR = FALSE; PrevReelJoinVac = FALSE;
		PrevPprChuck = FALSE; PrevPprCw = FALSE; PrevPprCcw = FALSE; PrevRewine = FALSE; PrevRewineReelPpr = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsReelChuck = FALSE;
		IsDcRlUpDn = FALSE; IsReelJoinL = FALSE; IsReelJoinR = FALSE; IsReelJoinVac = FALSE;
		IsPprChuck = FALSE; IsPprCw = FALSE; IsPprCcw = FALSE; IsRewine = FALSE; IsRewineReelPpr = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevReelChuck = FALSE;
		IsPrevDcRlUpDn = FALSE; IsPrevReelJoinL = FALSE; IsPrevReelJoinR = FALSE; IsPrevReelJoinVac = FALSE;
		IsPrevPprChuck = FALSE; IsPrevPprCw = FALSE; IsPrevPprCcw = FALSE; IsPrevRewine = FALSE; IsPrevRewineReelPpr = FALSE;
	}
};

struct stBtnPunch
{
	BOOL Relation, FdCw, FdCcw, FdVac;
	BOOL PushUp, TblBlw, TblVac, FdClp;
	BOOL TqClp, MvOne, LsrPt;
	BOOL DcRSol;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevFdVac;
	BOOL PrevPushUp, PrevTblBlw, PrevTblVac, PrevFdClp;
	BOOL PrevTqClp, PrevMvOne, PrevLsrPt;
	BOOL PrevDcRSol;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsFdVac;
	BOOL IsPushUp, IsTblBlw, IsTblVac, IsFdClp;
	BOOL IsTqClp, IsMvOne, IsLsrPt;
	BOOL IsDcRSol;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevFdVac;
	BOOL IsPrevPushUp, IsPrevTblBlw, IsPrevTblVac, IsPrevFdClp;
	BOOL IsPrevTqClp, IsPrevMvOne, IsPrevLsrPt;
	BOOL IsPrevDcRSol;

	stBtnPunch()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; FdVac = FALSE;
		PushUp = FALSE; TblBlw = FALSE; TblVac = FALSE; FdClp = FALSE;
		TqClp = FALSE; MvOne = FALSE; LsrPt = FALSE;
		DcRSol = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevFdVac = FALSE;
		PrevPushUp = FALSE; PrevTblBlw = FALSE; PrevTblVac = FALSE; PrevFdClp = FALSE;
		PrevTqClp = FALSE; PrevMvOne = FALSE; PrevLsrPt = FALSE;
		PrevDcRSol = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsFdVac = FALSE;
		IsPushUp = FALSE; IsTblBlw = FALSE; IsTblVac = FALSE; IsFdClp = FALSE;
		IsTqClp = FALSE; IsMvOne = FALSE; IsLsrPt = FALSE;
		IsDcRSol = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevFdVac = FALSE;
		IsPrevPushUp = FALSE; IsPrevTblBlw = FALSE; IsPrevTblVac = FALSE; IsPrevFdClp = FALSE;
		IsPrevTqClp = FALSE; IsPrevMvOne = FALSE; IsPrevLsrPt = FALSE;
		IsPrevDcRSol = FALSE;
	}
};

struct stBtnAOIDn
{
	BOOL Relation, FdCw, FdCcw, FdVac;
	BOOL PushUp, TblBlw, TblVac, FdClp;
	BOOL TqClp, MvOne, LsrPt;
	BOOL ClrRoll, VelSonicBlw, Test, Reset, LotEnd;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevFdVac;
	BOOL PrevPushUp, PrevTblBlw, PrevTblVac, PrevFdClp;
	BOOL PrevTqClp, PrevMvOne, PrevLsrPt;
	BOOL PrevClrRoll, PrevVelSonicBlw, PrevTest, PrevReset, PrevLotEnd;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsFdVac;
	BOOL IsPushUp, IsTblBlw, IsTblVac, IsFdClp;
	BOOL IsTqClp, IsMvOne, IsLsrPt;
	BOOL IsClrRoll, IsVelSonicBlw, IsTest, IsReset, IsLotEnd;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevFdVac;
	BOOL IsPrevPushUp, IsPrevTblBlw, IsPrevTblVac, IsPrevFdClp;
	BOOL IsPrevTqClp, IsPrevMvOne, IsPrevLsrPt;
	BOOL IsPrevClrRoll, IsPrevVelSonicBlw, IsPrevTest, IsPrevReset, IsPrevLotEnd;

	stBtnAOIDn()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; FdVac = FALSE;
		PushUp = FALSE; TblBlw = FALSE; TblVac = FALSE; FdClp = FALSE;
		TqClp = FALSE; MvOne = FALSE; LsrPt = FALSE;
		ClrRoll = FALSE; VelSonicBlw = FALSE; Test = FALSE; Reset = FALSE; LotEnd = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevFdVac = FALSE;
		PrevPushUp = FALSE; PrevTblBlw = FALSE; PrevTblVac = FALSE; PrevFdClp = FALSE;
		PrevTqClp = FALSE; PrevMvOne = FALSE; PrevLsrPt = FALSE;
		PrevClrRoll = FALSE; PrevVelSonicBlw = FALSE; PrevTest = FALSE; PrevReset = FALSE; PrevLotEnd = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsFdVac = FALSE;
		IsPushUp = FALSE; IsTblBlw = FALSE; IsTblVac = FALSE; IsFdClp = FALSE;
		IsTqClp = FALSE; IsMvOne = FALSE; IsLsrPt = FALSE;
		IsClrRoll = FALSE; IsVelSonicBlw = FALSE; IsTest = FALSE; IsReset = FALSE; IsLotEnd = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevFdVac = FALSE;
		IsPrevPushUp = FALSE; IsPrevTblBlw = FALSE; IsPrevTblVac = FALSE; IsPrevFdClp = FALSE;
		IsPrevTqClp = FALSE; IsPrevMvOne = FALSE; IsPrevLsrPt = FALSE;
		IsPrevClrRoll = FALSE; IsPrevVelSonicBlw = FALSE; IsPrevTest = FALSE; IsPrevReset = FALSE; IsPrevLotEnd = FALSE;
	}
};

struct stBtnAOIUp
{
	BOOL Relation, FdCw, FdCcw, FdVac;
	BOOL PushUp, TblBlw, TblVac, FdClp;
	BOOL TqClp, MvOne, LsrPt;
	BOOL ClrRoll, TqVac, Test, Reset, LotEnd;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevFdVac;
	BOOL PrevPushUp, PrevTblBlw, PrevTblVac, PrevFdClp;
	BOOL PrevTqClp, PrevMvOne, PrevLsrPt;
	BOOL PrevClrRoll, PrevTqVac, PrevTest, PrevReset, PrevLotEnd;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsFdVac;
	BOOL IsPushUp, IsTblBlw, IsTblVac, IsFdClp;
	BOOL IsTqClp, IsMvOne, IsLsrPt;
	BOOL IsClrRoll, IsTqVac, IsTest, IsReset, IsLotEnd;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevFdVac;
	BOOL IsPrevPushUp, IsPrevTblBlw, IsPrevTblVac, IsPrevFdClp;
	BOOL IsPrevTqClp, IsPrevMvOne, IsPrevLsrPt;
	BOOL IsPrevClrRoll, IsPrevTqVac, IsPrevTest, IsPrevReset, IsPrevLotEnd;

	stBtnAOIUp()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; FdVac = FALSE;
		PushUp = FALSE; TblBlw = FALSE; TblVac = FALSE; FdClp = FALSE;
		TqClp = FALSE; MvOne = FALSE; LsrPt = FALSE;
		ClrRoll = FALSE; TqVac = FALSE; Test = FALSE; Reset = FALSE; LotEnd = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevFdVac = FALSE;
		PrevPushUp = FALSE; PrevTblBlw = FALSE; PrevTblVac = FALSE; PrevFdClp = FALSE;
		PrevTqClp = FALSE; PrevMvOne = FALSE; PrevLsrPt = FALSE;
		PrevClrRoll = FALSE; PrevTqVac = FALSE; PrevTest = FALSE; PrevReset = FALSE; PrevLotEnd = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsFdVac = FALSE;
		IsPushUp = FALSE; IsTblBlw = FALSE; IsTblVac = FALSE; IsFdClp = FALSE;
		IsTqClp = FALSE; IsMvOne = FALSE; IsLsrPt = FALSE;
		IsClrRoll = FALSE; IsTqVac = FALSE; IsTest = FALSE; IsReset = FALSE; IsLotEnd = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevFdVac = FALSE;
		IsPrevPushUp = FALSE; IsPrevTblBlw = FALSE; IsPrevTblVac = FALSE; IsPrevFdClp = FALSE;
		IsPrevTqClp = FALSE; IsPrevMvOne = FALSE; IsPrevLsrPt = FALSE;
		IsPrevClrRoll = FALSE; IsPrevTqVac = FALSE; IsPrevTest = FALSE; IsPrevReset = FALSE; IsPrevLotEnd = FALSE;
	}
};

struct stBtnEngrave
{
	BOOL Relation, FdCw, FdCcw, FdVac;
	BOOL PushUp, TblBlw, TblVac, FdClp;
	BOOL TqClp, MvOne, LsrPt;
	BOOL DcRSol, VelSonicBlw;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevFdVac;
	BOOL PrevPushUp, PrevTblBlw, PrevTblVac, PrevFdClp;
	BOOL PrevTqClp, PrevMvOne, PrevLsrPt;
	BOOL PrevDcRSol, PrevVelSonicBlw;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsFdVac;
	BOOL IsPushUp, IsTblBlw, IsTblVac, IsFdClp;
	BOOL IsTqClp, IsMvOne, IsLsrPt;
	BOOL IsDcRSol, IsVelSonicBlw;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevFdVac;
	BOOL IsPrevPushUp, IsPrevTblBlw, IsPrevTblVac, IsPrevFdClp;
	BOOL IsPrevTqClp, IsPrevMvOne, IsPrevLsrPt;
	BOOL IsPrevDcRSol, IsPrevVelSonicBlw;

	stBtnEngrave()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; FdVac = FALSE;
		PushUp = FALSE; TblBlw = FALSE; TblVac = FALSE; FdClp = FALSE;
		TqClp = FALSE; MvOne = FALSE; LsrPt = FALSE;
		DcRSol = FALSE; DcRSol = FALSE; VelSonicBlw = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevFdVac = FALSE;
		PrevPushUp = FALSE; PrevTblBlw = FALSE; PrevTblVac = FALSE; PrevFdClp = FALSE;
		PrevTqClp = FALSE; PrevMvOne = FALSE; PrevLsrPt = FALSE;
		PrevDcRSol = FALSE; PrevVelSonicBlw = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsFdVac = FALSE;
		IsPushUp = FALSE; IsTblBlw = FALSE; IsTblVac = FALSE; IsFdClp = FALSE;
		IsTqClp = FALSE; IsMvOne = FALSE; IsLsrPt = FALSE;
		IsDcRSol = FALSE; IsDcRSol = FALSE;  IsVelSonicBlw = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevFdVac = FALSE;
		IsPrevPushUp = FALSE; IsPrevTblBlw = FALSE; IsPrevTblVac = FALSE; IsPrevFdClp = FALSE;
		IsPrevTqClp = FALSE; IsPrevMvOne = FALSE; IsPrevLsrPt = FALSE;
		IsPrevDcRSol = FALSE; IsPrevVelSonicBlw = FALSE;
	}
};

struct stBtnUncoiler
{
	BOOL Relation, FdCw, FdCcw, ReelChuck;
	BOOL DcRlUpDn, ReelJoinL, ReelJoinR, ReelJoinVac;
	BOOL PprChuck, PprCw, PprCcw, ClRlUpDn, ClRlPshUpDn;

	BOOL PrevRelation, PrevFdCw, PrevFdCcw, PrevReelChuck;
	BOOL PrevDcRlUpDn, PrevReelJoinL, PrevReelJoinR, PrevReelJoinVac;
	BOOL PrevPprChuck, PrevPprCw, PrevPprCcw, PrevClRlUpDn, PrevClRlPshUpDn;

	BOOL IsRelation, IsFdCw, IsFdCcw, IsReelChuck;
	BOOL IsDcRlUpDn, IsReelJoinL, IsReelJoinR, IsReelJoinVac;
	BOOL IsPprChuck, IsPprCw, IsPprCcw, IsClRlUpDn, IsClRlPshUpDn;

	BOOL IsPrevRelation, IsPrevFdCw, IsPrevFdCcw, IsPrevReelChuck;
	BOOL IsPrevDcRlUpDn, IsPrevReelJoinL, IsPrevReelJoinR, IsPrevReelJoinVac;
	BOOL IsPrevPprChuck, IsPrevPprCw, IsPrevPprCcw, IsPrevClRlUpDn, IsPrevClRlPshUpDn;

	stBtnUncoiler()
	{
		Relation = FALSE; FdCw = FALSE; FdCcw = FALSE; ReelChuck = FALSE;
		DcRlUpDn = FALSE; ReelJoinL = FALSE; ReelJoinR = FALSE; ReelJoinVac = FALSE;
		PprChuck = FALSE; PprCw = FALSE; PprCcw = FALSE; ClRlUpDn = FALSE; ClRlPshUpDn = FALSE;

		PrevRelation = FALSE; PrevFdCw = FALSE; PrevFdCcw = FALSE; PrevReelChuck = FALSE;
		PrevDcRlUpDn = FALSE; PrevReelJoinL = FALSE; PrevReelJoinR = FALSE; PrevReelJoinVac = FALSE;
		PrevPprChuck = FALSE; PrevPprCw = FALSE; PrevPprCcw = FALSE; PrevClRlUpDn = FALSE; PrevClRlPshUpDn = FALSE;

		IsRelation = FALSE; IsFdCw = FALSE; IsFdCcw = FALSE; IsReelChuck = FALSE;
		IsDcRlUpDn = FALSE; IsReelJoinL = FALSE; IsReelJoinR = FALSE; IsReelJoinVac = FALSE;
		IsPprChuck = FALSE; IsPprCw = FALSE; IsPprCcw = FALSE; IsClRlUpDn = FALSE; IsClRlPshUpDn = FALSE;

		IsPrevRelation = FALSE; IsPrevFdCw = FALSE; IsPrevFdCcw = FALSE; IsPrevReelChuck = FALSE;
		IsPrevDcRlUpDn = FALSE; IsPrevReelJoinL = FALSE; IsPrevReelJoinR = FALSE; IsPrevReelJoinVac = FALSE;
		IsPrevPprChuck = FALSE; IsPrevPprCw = FALSE; IsPrevPprCcw = FALSE; IsPrevClRlUpDn = FALSE; IsPrevClRlPshUpDn = FALSE;
	}
};

struct stBtnEngAuto
{
	BOOL Init, MkSt, OnMking, MkDone, Read2dSt, OnRead2d, Read2dDone, FdDone;
	BOOL InitF, MkStF, OnMkingF, MkDoneF, Read2dStF, OnRead2dF, Read2dDoneF, FdDoneF;

	BOOL IsInit, IsMkSt, IsOnMking, IsMkDone, IsRead2dSt, IsOnRead2d, IsRead2dDone, IsFdDone;
	BOOL IsInitF, IsMkStF, IsOnMkingF, IsMkDoneF, IsRead2dStF, IsOnRead2dF, IsRead2dDoneF, IsFdDoneF;

	stBtnEngAuto()
	{
		_Init();
	}

	void _Init()
	{
		Init = FALSE; MkSt = FALSE; OnMking = FALSE; MkDone = FALSE; Read2dSt = FALSE; OnRead2d = FALSE; Read2dDone = FALSE; FdDone = FALSE;
		InitF = FALSE; MkStF = FALSE; OnMkingF = FALSE; MkDoneF = FALSE; Read2dStF = FALSE; OnRead2dF = FALSE; Read2dDoneF = FALSE; FdDoneF = FALSE;

		IsInit = FALSE; IsMkSt = FALSE; IsOnMking = FALSE; IsMkDone = FALSE; IsRead2dSt = FALSE; IsOnRead2d = FALSE; IsRead2dDone = FALSE; IsFdDone = FALSE;
		IsInitF = FALSE; IsMkStF = FALSE; IsOnMkingF = FALSE; IsMkDoneF = FALSE; IsRead2dStF = FALSE; IsOnRead2dF = FALSE; IsRead2dDoneF = FALSE; IsFdDoneF = FALSE;
	}
};

struct stBtnSettingEng
{
	BOOL OffsetInitPosMove;

	stBtnSettingEng()
	{
		_Init();
	}

	void _Init()
	{
		OffsetInitPosMove = FALSE;
	}
};

struct stBtnStatus
{
	stBtnMsg Msg;
	stBtnMain Main;
	stBtnDisp Disp;
	stBtnTqMotor Tq;
	stBtnInductMotor Induct;
	stBtnCore150 Core150;
	stBtnEtc Etc;
	stBtnRecoiler Rc;
	stBtnPunch Mk;
	stBtnAOIDn AoiDn;
	stBtnAOIUp AoiUp;
	stBtnEngrave Eng;
	stBtnUncoiler Uc;
	stBtnEngAuto EngAuto;
	stBtnSettingEng SettingEng;
};


struct stMenu01Info
{
	CString sOperator, sModel, sLot, sLayerUp, sLayerDn;
	int nTotShot, nVerifyImgNum;
	double dTotWorkRto, dLotWorkRto, dTotSpd, dPartSpd, dDoneLenMk, dDoneLenAoiUp, dDoneLengthAoiDn, dDoneLengthEng;

	stMenu01Info()
	{
		_Init();
	}

	void _Init()
	{
		sOperator = _T(""); sModel = _T(""); sLot = _T(""); sLayerUp = _T(""); sLayerDn = _T("");
		nTotShot = 0; dTotWorkRto = 0.0; dLotWorkRto = 0.0; dTotSpd = 0.0; dPartSpd = 0.0; dDoneLenMk = 0.0;
		dDoneLenAoiUp = 0.0; dDoneLengthAoiDn = 0.0; dDoneLengthEng = 0.0; nVerifyImgNum = 0;
	}

};

struct stMenu01TotalTest
{
	double nUp, nDn, nTotal;

	stMenu01TotalTest()
	{
		_Init();
	}

	void _Init()
	{
		nUp = 0; nDn = 0; nTotal = 0;
	}

};

struct stMenu01GoodRatio
{
	double dUp, dDn, dTotal;

	stMenu01GoodRatio()
	{
		_Init();
	}

	void _Init()
	{
		dUp = 0.0; dDn = 0.0; dTotal = 0.0;
	}

};

struct stMenu01Good
{
	int nUp, nDn, nTotal;

	stMenu01Good()
	{
		_Init();
	}

	void _Init()
	{
		nUp = 0; nDn = 0; nTotal = 0;
	}

};

struct stMenu01BedRatio
{
	double dUp, dDn, dTotal;

	stMenu01BedRatio()
	{
		_Init();
	}

	void _Init()
	{
		dUp = 0.0; dDn = 0.0; dTotal = 0.0;
	}

};

struct stMenu01Bed
{
	int nUp, nDn, nTotal;

	stMenu01Bed()
	{
		_Init();
	}

	void _Init()
	{
		nUp = 0; nDn = 0; nTotal = 0;
	}

};

struct stMenu01YieldTotal
{
	double dUp, dDn, dTotal;

	stMenu01YieldTotal()
	{
		_Init();
	}

	void _Init()
	{
		dUp = 0.0; dDn = 0.0; dTotal = 0.0;
	}

};

struct stMenu01YieldStrip
{
	double dUp, dDn, dTotal;

	stMenu01YieldStrip()
	{
		_Init();
	}

	void _Init()
	{
		dUp = 0.0; dDn = 0.0; dTotal = 0.0;
	}

};

struct stMenu01Defect
{
	int nDefNum[MAX_DEF];

	stMenu01Defect()
	{
		_Init();
	}

	void _Init()
	{
		for (int i = 0; i < MAX_DEF; i++)
			nDefNum[i] = 0;
	}

};

struct stMenu01Data
{
	int nMkNumLf, nMkNumRt;
	double dVerifyLen;

	stMenu01Data()
	{
		_Init();
	}

	void _Init()
	{
		nMkNumLf = 0; nMkNumRt = 0; dVerifyLen = 0.0;
	}

};

struct stMenu01Status
{
	stMenu01Info Info;
	stMenu01TotalTest TotTest;
	stMenu01GoodRatio GoodRto;
	stMenu01Good Good;
	stMenu01BedRatio BedRto;
	stMenu01Bed Bed;
	stMenu01YieldTotal YieldTot;
	stMenu01YieldStrip YieldStrip[MAX_STRIP];
	stMenu01Defect Defect;
	stMenu01Data Data;
};

typedef enum {
	DOOR_FL_MK = 0, DOOR_FR_MK = 1,
	DOOR_BL_MK = 2, DOOR_BR_MK = 3
}  DOOR_MK;
typedef enum {
	DOOR_FM_AOI_UP = 0, DOOR_FL_AOI_UP = 1, DOOR_FR_AOI_UP = 2,
	DOOR_BM_AOI_UP = 3, DOOR_BL_AOI_UP = 4, DOOR_BR_AOI_UP = 5
}  DOOR_AOI_UP;
typedef enum {
	DOOR_FM_AOI_DN = 6, DOOR_FL_AOI_DN = 7, DOOR_FR_AOI_DN = 8,
	DOOR_BM_AOI_DN = 9, DOOR_BL_AOI_DN = 10, DOOR_BR_AOI_DN = 11
}  DOOR_AOI_DN;
typedef enum {
	DOOR_FL_UC = 0, DOOR_FR_UC = 1,
	DOOR_BL_UC = 2, DOOR_BR_UC = 3
}  DOOR_UC;
typedef enum {
	DOOR_FL_RC = 0, DOOR_FR_RC = 1,
	DOOR_S_RC = 2, DOOR_BL_RC = 3, DOOR_BR_RC = 4
}  DOOR_RC;
typedef enum {
	DOOR_FL_ENGV = 0, DOOR_FR_ENGV = 1,
	DOOR_BL_ENGV = 2, DOOR_BR_ENGV = 3
}  DOOR_ENGV;//DOOR_S_ENGV = 2, 

typedef enum { EMG_M_MK = 0, EMG_B_MK = 1 }  EMG_MK;
typedef enum { EMG_F_AOI_UP = 0, EMG_B_AOI_UP = 1 }  EMG_AOI_UP;
typedef enum { EMG_F_AOI_DN = 2, EMG_B_AOI_DN = 3 }  EMG_AOI_DN;
typedef enum { LMT_NEG = 0, LMT_POS = 1 }  SENS_LIMIT;



struct stPcrShare
{
	BOOL bExist;
	int nSerial;
	CString sModel, sLayer, sLot, sItsCode, sPrcsCode;

	stPcrShare()
	{
		bExist = FALSE;
		nSerial = 0;
		sModel = _T(""); sLayer = _T(""); sLot = _T(""); sItsCode = _T(""); sPrcsCode = _T("");
	}
};

struct stStatus
{
	BOOL bAuto, bManual, bOneCycle;								// Mode 스위치
	BOOL bSwJogLeft, bSwJogFast, bSwJogStep;								// Jog 판넬 선택 스위치
	BOOL bDoorMk[4], bDoorAoi[12];								// 도어 센서
	BOOL bDoorMkF[4], bDoorAoiF[12];							// 도어 센서
	BOOL bEmgMk[2], bEmgAoi[4];									// 비상정지 스위치
	BOOL bEmgUc, bEmgRc;										// 비상정지 스위치
	BOOL bEmgEngv[2], bEmgEngvF[2];								// 비상정지 스위치
	BOOL bEmgMkF[2], bEmgAoiF[4];								// 비상정지 스위치
	BOOL bEmgUcF, bEmgRcF;										// 비상정지 스위치
	BOOL bMainAirMk, bMainAirAoi;								// 메인 에어
	BOOL bSensTblVacMk, bSensTblVacAoi;							// 테이블 진공 센서
	BOOL bSensTblPrsMk, bSensTblPrsAoi;							// 테이블 압력 센서
	BOOL bSensSaftyMk, bSensSaftyAoi;							// 안전 센서
	BOOL bSensSaftyMkF, bSensSaftyAoiF;							// 안전 센서
	BOOL bSensLmtBufMk[2], bSensLmtBufRc[2], bSensLmtBufUc[2];	// 버퍼 롤러 리미트 센서
	BOOL bSigTestDoneAoi, bSigTblAirAoi;						// 검사부 신호
	BOOL bDoorUc[4], bDoorRe[5];								// 도어 센서
	BOOL bDoorUcF[4], bDoorReF[5];								// 도어 센서
	BOOL bDoorEngv[4], bDoorEngvF[4];							// 도어 센서

	stPcrShare PcrShare[2], PcrShareVs[2];

	stStatus()
	{
		bAuto = FALSE; bManual = FALSE; bOneCycle = FALSE; bSwJogLeft = FALSE; bSwJogFast = FALSE; bSwJogStep = FALSE;
		bDoorEngv[0] = FALSE; bDoorEngv[1] = FALSE; bDoorEngv[2] = FALSE; bDoorEngv[3] = FALSE;
		bDoorEngvF[0] = FALSE; bDoorEngvF[1] = FALSE; bDoorEngvF[2] = FALSE; bDoorEngvF[3] = FALSE;
		bDoorMk[0] = FALSE; bDoorMk[1] = FALSE; bDoorMk[2] = FALSE; bDoorMk[3] = FALSE;
		bDoorMkF[0] = FALSE; bDoorMkF[1] = FALSE; bDoorMkF[2] = FALSE; bDoorMkF[3] = FALSE;
		bDoorAoi[0] = FALSE; bDoorAoi[1] = FALSE; bDoorAoi[2] = FALSE; bDoorAoi[3] = FALSE; bDoorAoi[4] = FALSE; bDoorAoi[5] = FALSE;
		bDoorAoiF[0] = FALSE; bDoorAoiF[1] = FALSE; bDoorAoiF[2] = FALSE; bDoorAoiF[3] = FALSE; bDoorAoiF[4] = FALSE; bDoorAoiF[5] = FALSE;
		bEmgMk[0] = FALSE; bEmgMk[1] = FALSE;
		bEmgAoi[0] = FALSE; bEmgAoi[1] = FALSE;
		bEmgUc = FALSE; bEmgRc = FALSE;
		bEmgEngv[0] = FALSE; bEmgEngvF[0] = FALSE;
		bEmgEngv[1] = FALSE; bEmgEngvF[1] = FALSE;
		bEmgMkF[0] = FALSE; bEmgMkF[1] = FALSE;
		bEmgAoiF[0] = FALSE; bEmgAoiF[1] = FALSE;
		bEmgUcF = FALSE; bEmgRcF = FALSE;
		bMainAirMk = FALSE; bMainAirAoi = FALSE;
		bSensTblVacMk = FALSE; bSensTblVacAoi = FALSE;
		bSensTblPrsMk = FALSE; bSensTblPrsAoi = FALSE;
		bSensSaftyMk = FALSE; bSensSaftyAoi = FALSE;
		bSensSaftyMkF = FALSE; bSensSaftyAoiF = FALSE;
		bSensLmtBufMk[0] = FALSE; bSensLmtBufMk[1] = FALSE;
		bSensLmtBufUc[0] = FALSE; bSensLmtBufUc[1] = FALSE;
		bSensLmtBufRc[0] = FALSE; bSensLmtBufRc[1] = FALSE;
		bSigTestDoneAoi = FALSE; bSigTblAirAoi = FALSE;
		bDoorUc[0] = FALSE; bDoorUc[1] = FALSE; bDoorUc[2] = FALSE; bDoorUc[3] = FALSE;
		bDoorUcF[0] = FALSE; bDoorUcF[1] = FALSE; bDoorUcF[2] = FALSE; bDoorUcF[3] = FALSE;
		bDoorRe[0] = FALSE; bDoorRe[1] = FALSE; bDoorRe[2] = FALSE; bDoorRe[3] = FALSE; bDoorRe[4] = FALSE;
		bDoorReF[0] = FALSE; bDoorReF[1] = FALSE; bDoorReF[2] = FALSE; bDoorReF[3] = FALSE; bDoorReF[4] = FALSE;
	}
};


struct stMpeIoWrite
{
	int nIdx;
	CString sAddr;
	long lData;

	stMpeIoWrite()
	{
		nIdx = -1;
		sAddr = _T("");
		lData = 0;
	}
};

struct stPcrMerge
{
	int nIdx, nIdxUp, nIdxDn, nIdxUpInner, nIdxDnInner;

	stPcrMerge()
	{
		nIdx = -1; nIdxUp = -1; nIdxDn = -1; nIdxUpInner = -1; nIdxDnInner = -1;
	}
};

struct stListBuf
{
	int nTot;
	int nSerial[BUF_SZ];

	stListBuf()
	{
		nTot = 0;
		for (int i = 0; i < BUF_SZ; i++)
			nSerial[BUF_SZ] = 0;
	}

	BOOL stListBuf::Push(int nS)
	{
		if (nS < 1 || (nTot + 1) > BUF_SZ)
			return FALSE;
		nSerial[nTot] = nS;
		nTot++;
		return TRUE;
	}

	int stListBuf::Pop()
	{
		if (nSerial[0] < 1 || (nTot - 1) < 0)
			return 0;

		int nS = nSerial[0];
		for (int i = 0; i < (nTot - 1); i++)
			nSerial[i] = nSerial[i + 1];
		nTot--;
		return nS;
	}

	int stListBuf::GetLast()
	{
		if (nSerial[0] < 1 || (nTot - 1) < 0)
		{
			if (nSerial[0] > 0)
				return nSerial[0];
			else
				return 0;
		}
		return nSerial[nTot - 1];
	}

	void stListBuf::Clear()
	{
		nTot = 0;
		for (int i = 0; i < BUF_SZ; i++)
			nSerial[i] = 0;
	}

};


struct stDlgInfoReg
{
	CString TwoMetal, OneMetal, SampleTest, SampleTestShotNum;
	CString ModeInner, ModeOutter; //SingleMode, 
	CString FeedCcwRecoiler, FeedCcwUncoiler;
	CString DoorSensorUncoiler, DoorSensorEngrave, DoorSensorAoiUp, DoorSensorAoiDn, DoorSensorPunch, DoorSensorRecoiler;
	CString TotalReelLength, LotLength, LotCutLength, StopLength, UseStopLength, UseLotLength, OneShotLength;
	CString CleanRollerAoiUp, CleanRollerAoiDn, Use380mm; //UltraSonicStTimeAoiUp, UltraSonicStTimeAoiDn,
	CString UltraSonicEngrave, UltraSonicAoi;
	CString UltraSonicStTimeAoi, Use346mm, Use340mm;

	stDlgInfoReg()
	{
		//SingleMode = _T("MB44017A");
		TwoMetal = _T("MB400020");
		OneMetal = _T("MB400021");
		SampleTest = _T("MB400022");
		SampleTestShotNum = _T("MW41111");
		ModeInner = _T("MB400023");
		ModeOutter = _T("MB400024");
		FeedCcwRecoiler = _T("MB400051");
		FeedCcwUncoiler = _T("MB400050");
		DoorSensorUncoiler = _T("MB400014");
		DoorSensorEngrave = _T("MB400015");
		DoorSensorAoiUp = _T("MB400016");
		DoorSensorAoiDn = _T("MB400017");
		DoorSensorPunch = _T("MB400018");
		DoorSensorRecoiler = _T("MB400019");
		CleanRollerAoiUp = _T("MB400065");
		CleanRollerAoiDn = _T("MB400066");
		TotalReelLength = _T("ML41000");
		LotLength = _T("ML41002");
		LotCutLength = _T("ML41004");
		StopLength = _T("ML41006");
		UseStopLength = _T("MB40000B");
		UseLotLength = _T("MB40000C");
		OneShotLength = _T("ML41030");
		//UltraSonicStTimeAoiUp = _T("MW05942");
		//UltraSonicStTimeAoiDn = _T("MW05940");
		UltraSonicStTimeAoi = _T("MW41130");
		Use380mm = _T("MB400054");
		Use346mm = _T("MB400053");
		Use340mm = _T("MB400052");
		UltraSonicEngrave = _T("MB400062");
		UltraSonicAoi = _T("MB400067");
	}
};

struct stDlgFrameHighReg
{
	CString FeedOffsetPunch, FeedOffsetAoiUp, FeedOffsetAoiDn, FeedOffsetEngrave; //FeedOffsetAoi

	stDlgFrameHighReg()
	{
		FeedOffsetPunch = _T("ML41066");
		FeedOffsetAoiUp = _T("ML41062");
		FeedOffsetAoiDn = _T("ML45064");
		FeedOffsetEngrave = _T("ML41060");
	}
};


struct stDlgMenu01
{
	//CString LastJobFromEngrave, LastJobFromAoiUp, LastJobFromAoiDn,
	CString LastJob, LastShotNum, JobEnd, FeedCwPunch, FeedCwAoi, FeedCwEngrave;

	stDlgMenu01()
	{
		//LastJobFromEngrave = _T("MB44019D");
		//LastJobFromAoiUp = _T("MB440185");
		//LastJobFromAoiDn = _T("MB440186");
		LastJob = _T("MB400010");
		LastShotNum = _T("MW41113");
		JobEnd = _T("MB400009");

		FeedCwPunch = _T("MB440161");
		FeedCwAoi = _T("MB440160");
		FeedCwEngrave = _T("MB440199");
	}
};

struct stDlgMenu03
{
	CString Ready, Run, Reset, Stop;
	CString ConnectModule;
	CString ChuckPcbRecoiler, ChuckPaperRecoiler, JoinClampRecoiler, PcbShaftSupportRecoiler;
	CString EpcActHomeRecoiler, EpcActFirstRecoiler, EpcActSecondRecoiler, EpcActThirdRecoiler, EpcAutoRecoiler, EpcManualRecoiler;
	CString EpcHomeRecoiler, EpcInRecoiler, EpcOutRecoiler, PcbInverterCwRecoiler, PcbInverterCcwRecoiler;
	CString PaperInverterCwRecoiler, PaperInverterCcwRecoiler, DancerUpperRecoiler, DancerFixerRecoiler;
	CString FeedCwPunch, FeedCcwPunch, TensionCwPunch, TensionCcwPunch, FeedHomePunch, FeedVacuumPunch, FeedClampPunch, TensionClampPunch; //PcbPushPunch 
	CString TableBlowerPunch, TableVacuumPunch, TableCylinderPunch, TableClampDnPunch, TableClampForwardPunch, PunchStartPunch;
	CString FeedCwAoiDn, FeedCcwAoiDn, TensionCwAoiDn, TensionCcwAoiDn, FeedHomeAoiDn, FeedVacuumAoiDn, TableBlowerAoiDn, TableVacuumAoiDn, TableCylinderAoiDn;
	CString FeedClampAoiDn, TensionClampAoiDn, CleanRollerUpAoiDn, CleanRollerDnAoiDn, CleanRollerPushAoiDn, TestStartAoiDn;
	CString BufferRollerUpAoiDn, BufferRollerFixAoiDn; //PcbPushAoiDn, 
	CString FeedCwAoiUp, FeedCcwAoiUp, TensionCwAoiUp, TensionCcwAoiUp, FeedHomeAoiUp, FeedVacuumAoiUp, TableBlowerAoiUp, TableVacuumAoiUp, TableCylinderAoiUp;
	CString FeedClampAoiUp, TensionClampAoiUp, CleanRollerUpAoiUp, CleanRollerDnAoiUp, CleanRollerPushAoiUp, TestStartAoiUp;
	CString UltrasonicDnAoiUp, UltrasonicRunAoiUp, UltrasonicSpeedAoiUp; // PcbPushAoiUp, 
	CString FeedCwEngrave, FeedCcwEngrave, TensionCwEngrave, TensionCcwEngrave, FeedHomeEngrave, FeedVacuumEngrave, PcbPushEngrave;
	CString TableBlowerEngrave, TableVacuumEngrave, TableCylinderEngrave, FeedClampEngrave, TensionClampEngrave;
	CString UltrasonicDownEngrave, UltrasonicRunEngrave, UltrasonicSpeedEngrave, DancerUpperEngrave, DancerFixerEngrave;
	CString AlignStartEngrave, LaserStartEngrave, ReadStartEngrave;
	//CString FeedCwUncoiler, FeedCcwUncoiler, JoinUpLfUncoiler, JoinDnRtUncoiler, JoinVacuumUncoiler;
	//CString PaperCwUncoiler, PaperCcwUncoiler, CleannerUncoiler, CleannerPushUncoiler;
	CString ChuckPcbUncoiler, DancerUpperUncoiler, DancerFixerUncoiler, JoinClampUncoiler, PcbShaftSupportUncoiler, ChuckPaperUncoiler;
	CString EpcActHomeUncoiler, EpcActFirstUncoiler, EpcActSecondUncoiler, EpcActThirdUncoiler, EpcAutoUncoiler, EpcManualUncoiler;
	CString EpcHomeUncoiler, EpcInUncoiler, EpcOutUncoiler, PcbInverterCwUncoiler, PcbInverterCcwUncoiler;
	CString PaperInverterCwUncoiler, PaperInverterCcwUncoiler;
	CString FeedOnePanel, AllDancerUpDn, AllDancerFixOnOff;

	//CString TensionOnPunch, TensionOnAoi, TensionOnEngrave, UltrasonicSpeedAoiDn;
	//CString UseCore150mmRecoiler, UseCore150mmUncoiler, FeedOnePanel;
	
	stDlgMenu03()
	{
		Ready = _T("MB400003");
		Run = _T("MB400006");
		Reset = _T("MB400182");
		Stop = _T("MB400007");

		ConnectModule = _T("MB40000F");

		ChuckPcbRecoiler = _T("MB400160");
		ChuckPaperRecoiler = _T("MB400161");
		JoinClampRecoiler = _T("MB400162");
		PcbShaftSupportUncoiler = _T("MB400163");
		EpcActHomeRecoiler = _T("MB400164");
		EpcActFirstRecoiler = _T("MB400165");
		EpcActSecondRecoiler = _T("MB400166");
		EpcActThirdRecoiler = _T("MB400167");
		EpcAutoRecoiler = _T("MB400169");
		EpcManualRecoiler = _T("MB40016A");
		EpcHomeRecoiler = _T("MB40016B");
		EpcInRecoiler = _T("MB40016C");
		EpcOutRecoiler = _T("MB40016D");
		PcbInverterCwRecoiler = _T("MB400170");
		PcbInverterCcwRecoiler = _T("MB400171");
		PaperInverterCwRecoiler = _T("MB400172");
		PaperInverterCcwRecoiler = _T("MB400173");
		DancerUpperRecoiler = _T("MB400174");
		DancerFixerRecoiler = _T("MB400175");

		FeedCwPunch = _T("MB400140");
		FeedCcwPunch = _T("MB400141");
		TensionCwPunch = _T("MB400142");
		TensionCcwPunch = _T("MB400143");
		FeedHomePunch = _T("MB400144");
		FeedVacuumPunch = _T("MB400145");
		FeedClampPunch = _T("MB400146");
		TensionClampPunch = _T("MB400147");
		//PcbPushPunch = _T("MB005516");
		TableVacuumPunch = _T("MB400148");
		TableBlowerPunch = _T("MB400149");
		TableCylinderPunch = _T("MB40014A");
		TableClampDnPunch = _T("MB40014B");
		TableClampForwardPunch = _T("MB40014C");
		PunchStartPunch = _T("MB400150");

		FeedCwAoiDn = _T("MB40010A");
		FeedCcwAoiDn = _T("MB40010B");
		TensionCwAoiDn = _T("MB40010C");
		TensionCcwAoiDn = _T("MB40010D");
		FeedHomeAoiDn = _T("MB40010E");
		FeedVacuumAoiDn = _T("MB400129");
		//PcbPushAoiDn = _T("MB005706");
		TableBlowerAoiDn = _T("MB40012D");
		TableVacuumAoiDn = _T("MB40012C");
		TableCylinderAoiDn = _T("MB400130");
		FeedClampAoiDn = _T("MB005709");
		TensionClampAoiDn = _T("MB400133");
		CleanRollerUpAoiDn = _T("MB400118");
		CleanRollerDnAoiDn = _T("MB400134");
		CleanRollerPushAoiDn = _T("MB400135");
		TestStartAoiDn = _T("MB400136");
		BufferRollerUpAoiDn = _T("MB40013C");
		BufferRollerFixAoiDn = _T("MB40013D");

		FeedCwAoiUp = _T("MB40010A");
		FeedCcwAoiUp = _T("MB40010B");
		TensionCwAoiUp = _T("MB40010C");
		TensionCcwAoiUp = _T("MB40010D");
		FeedHomeAoiUp = _T("MB40010E");
		FeedVacuumAoiUp = _T("MB400129");
		//PcbPushAoiUp = _T("MB005606");
		TableBlowerAoiUp = _T("MB400114");
		TableVacuumAoiUp = _T("MB400113");
		TableCylinderAoiUp = _T("MB400115");
		FeedClampAoiUp = _T("MB400111");
		TensionClampAoiUp = _T("MB400112");
		CleanRollerUpAoiUp = _T("MB400118");
		CleanRollerDnAoiUp = _T("MB400119");
		CleanRollerPushAoiUp = _T("MB40011A");
		TestStartAoiUp = _T("MB400120");
		UltrasonicDnAoiUp = _T("MB400126");
		UltrasonicRunAoiUp = _T("MB400127");
		UltrasonicSpeedAoiUp = _T("MB400128");

		FeedCwEngrave = _T("MB400086");
		FeedCcwEngrave = _T("MB400087");
		TensionCwEngrave = _T("MB400088");
		TensionCcwEngrave = _T("MB400089");
		FeedHomeEngrave = _T("MB40008A");
		FeedVacuumEngrave = _T("MB40008B");
		PcbPushEngrave = _T("MB005516");
		TableBlowerEngrave = _T("MB400091");
		TableVacuumEngrave = _T("MB400090");
		TableCylinderEngrave = _T("MB400092");
		FeedClampEngrave = _T("MB40008C");
		TensionClampEngrave = _T("MB40008D");
		UltrasonicDownEngrave = _T("MB400093");
		UltrasonicRunEngrave = _T("MB400094");
		UltrasonicSpeedEngrave = _T("MB400095");
		DancerUpperEngrave = _T("MB400096");
		DancerFixerEngrave = _T("MB400097");
		AlignStartEngrave = _T("MB400100");
		LaserStartEngrave = _T("MB400103");
		ReadStartEngrave = _T("MB400106");

		//FeedCwUncoiler = _T("MB00540C");
		//FeedCcwUncoiler = _T("MB00540D");
		ChuckPcbUncoiler = _T("MB400070");
		DancerUpperUncoiler = _T("MB400084");
		DancerFixerUncoiler = _T("MB400085");
		//JoinUpLfUncoiler = _T("MB005405");
		//JoinDnRtUncoiler = _T("MB005406");
		//JoinVacuumUncoiler = _T("MB00540F");
		JoinClampUncoiler = _T("MB400072");
		PcbShaftSupportUncoiler = _T("MB400073");
		ChuckPaperUncoiler = _T("MB005408");
		EpcActHomeUncoiler = _T("MB400074");
		EpcActFirstUncoiler = _T("MB400075");
		EpcActSecondUncoiler = _T("MB400076");
		EpcActThirdUncoiler = _T("MB400077");
		EpcAutoUncoiler = _T("MB400079");
		EpcManualUncoiler = _T("MB40007A");
		EpcHomeUncoiler = _T("MB40007B");
		EpcInUncoiler = _T("MB40007C");
		EpcOutUncoiler = _T("MB40007D");
		PcbInverterCwUncoiler = _T("MB400080");
		PcbInverterCcwUncoiler = _T("MB400081");
		PaperInverterCwUncoiler = _T("MB400082");
		PaperInverterCcwUncoiler = _T("MB400083");
		//PaperCwUncoiler = _T("MB005409");
		//PaperCcwUncoiler = _T("MB00540A");
		//CleannerUncoiler = _T("MB005403");
		//CleannerPushUncoiler = _T("MB005404");
		//TensionOnPunch = _T("MB440155");
		//TensionOnAoi = _T("MB440156");
		//TensionOnEngrave = _T("MB440154");
		//UltrasonicSpeedAoiDn = _T("MB44014F");
		//UseCore150mmRecoiler = _T("MB44017E");
		//UseCore150mmUncoiler = _T("MB44017F");

		FeedOnePanel = _T("MB40000E");
		AllDancerUpDn  = _T("MB40005B");
		AllDancerFixOnOff = _T("MB40005C");
	}
};

struct stDlgMenu04
{
	CString FeedTorqueCwPunch, FeedTorqueCcwPunch, FeedTorqueCwAoi, FeedTorqueCcwAoi, FeedTorqueCwEngrave, FeedTorqueCcwEngrave;
	CString FeedSpeed, FeedAcc, FeedOnSpeed;//FeedTorquePunch, FeedTorqueAoi, FeedTorqueEngrave, 
	CString FeedOnAcc, FeedLeadPitchAoi, FeedLeadPitchPunch, FeedLeadPitchEngrave;
	CString BufferPosStAoi, BufferPosStEngrave, FeedLengthFromAoiToPunch, ShotNumFromAoiUpToAoiDn;
	CString FeedLengthFromEngraveToAoi, FeedSpeed2dCode, FeedAcc2dCode;

	stDlgMenu04()
	{
		FeedTorqueCwPunch = _T("ML41050");
		FeedTorqueCcwPunch = _T("ML41052");
		FeedTorqueCwAoi = _T("ML41044");
		FeedTorqueCcwAoi = _T("ML41046");
		FeedTorqueCwEngrave = _T("ML41040");
		FeedTorqueCcwEngrave = _T("ML41042");
		//FeedTorquePunch = _T("ML45044");
		//FeedTorqueAoi = _T("ML45042");
		//FeedTorqueEngrave = _T("ML45050");
		FeedSpeed = _T("ML45034");
		FeedAcc = _T("ML45036");
		FeedOnSpeed = _T("ML45038");
		FeedOnAcc = _T("ML45040");
		FeedLeadPitchAoi = _T("ML45012");
		FeedLeadPitchPunch = _T("ML45014");
		FeedLeadPitchEngrave = _T("ML45020");
		BufferPosStAoi = _T("ML45016");
		BufferPosStEngrave = _T("ML45028");
		FeedLengthFromAoiToPunch = _T("ML45008");
		ShotNumFromAoiUpToAoiDn = _T("ML45010");
		FeedLengthFromEngraveToAoi = _T("ML45024");
		FeedSpeed2dCode = _T("ML45060");
		FeedAcc2dCode = _T("ML45062");
	}
};

struct stGuiRegister
{
	stDlgInfoReg DlgInfo;
	stDlgFrameHighReg DlgFrameHigh;
	stDlgMenu01 DlgMenu01;
	stDlgMenu03 DlgMenu03;
	stDlgMenu04 DlgMenu04;
};




#endif // !defined(AFX_GLOBALDEFINE_H_INCLUDED_)

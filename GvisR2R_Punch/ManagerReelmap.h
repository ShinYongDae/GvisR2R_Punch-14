#pragma once
#include "afxwin.h"

#include "Global/GlobalDefine.h"
#include "Process/CamMaster.h"
#include "Process/ReelMap.h"
#include "Process/DataMarking.h"
#include "Process/ThreadTask.h"
#include "Device/Vision.h"

#define MAX_THREAD_MGR_REELMAP		23
#define TIM_INIT_REELMAP			0

typedef enum { Up=0, Dn=1 }tpLayer;

class CManagerReelmap :	public CWnd
{
public:
	CManagerReelmap(CWnd* pParent = NULL);
	virtual ~CManagerReelmap();

	int m_nNodeX, m_nNodeY;
	REGION_STRIP* m_pCellRgn;
	CPcsRgn* m_pPcsRgn;
	stMasterInfo* m_pMasterInfo;
	stMasterInfo* m_pMasterInfoInner;

	UCHAR*(*m_pCADCellImg[2])[MAX_CELL_NUM];		// Up, Dn
	UCHAR*(*m_pCADCellImgInner[2])[MAX_CELL_NUM];	// Up, Dn
	int m_nCellInspID[MAX_CELL_NUM];
	UCHAR *m_pPinImg, *m_pPcsImg, *m_pAlignImg[4];
	UCHAR *m_pPinImgInner, *m_pPcsImgInner, *m_pAlignImgInner[4];

	stAlignMark m_stAlignMk;						// 캠마스터에서 가져온 2point 정렬영상 이미지 좌표.
	stAlignMark2 m_stAlignMk2;						// 캠마스터에서 가져온 4point 정렬영상 이미지 좌표.
	stPieceMark m_stPcsMk[MAX_PCS];					// 캠마스터에서 가져온 마킹 인덱스 좌표.

	BOOL SetMstInfo();
	CString GetMasterLocation();
	void SetPinPos(int nCam, CfPoint ptPnt);
	BOOL IsMstSpec(CString sSpecFolderPath, CString  sModel, CString sLayer);
	BOOL IsMstInnerSpec(CString sSpecFolderPath, CString  sModel, CString sLayer);
	int GetPcrIdx(int nSerial);
	int LoadPcrUp(int nSerial);							// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	int LoadPcrDn(int nSerial);							// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	int LoadPcrAll(int nSerial);
	int LoadPcrUpInner(int nSerial);	// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	int LoadPcrDnInner(int nSerial);	// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	int LoadPcrAllInner(int nSerial);	// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	
	// ITS
	int LoadPcrIts(int nSerial);	// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	void LoadPcrIts11(int nSerial); // 11 -> 외층 : 양면, 내층 : 양면
	void LoadPcrIts10(int nSerial); // 10 -> 외층 : 양면, 내층 : 단면
	void LoadPcrIts01(int nSerial); // 11 -> 외층 : 단면, 내층 : 양면
	void LoadPcrIts00(int nSerial); // 10 -> 외층 : 단면, 내층 : 단면

	void ThreadKill();

public:
	CWnd* m_pParent;

	BOOL m_bTIM_INIT_REELMAP;
	int m_nStepInitReelmap;

	void Init();
	BOOL Create();
	void LoadConfig();
	BOOL LoadDefectTableIni();

	void GetResult();
	void MakeResult();
	void MakeResultIts();
	void MakeSapp3();
	BOOL RemakeReelmap();
	BOOL RemakeReelmapInner();
	void DuplicateRmap(int nRmap);
	CString CharToString(const char *szStr);
	char* TCHARToChar(TCHAR *tszStr);
	char* StringToChar(CString str);
	char* StrToChar(CString str);
	void StrToChar(CString str, char* pCh); // char* returned must be deleted... 
	void StringToChar(CString str, char* pCh); // char* returned must be deleted... 
	BOOL DirectoryExists(LPCTSTR szPath);
	CString GetItsPath(int nSerial, int nLayer);	// RMAP_UP, RMAP_DN, RMAP_INNER_UP, RMAP_INNER_DN

	// 특성입니다.
public:
	char m_cBigDefCode[MAX_DEF];
	char m_cSmallDefCode[MAX_DEF];
	CString m_sKorDef[MAX_DEF], m_sEngDef[MAX_DEF];
	char m_cBigDef[MAX_DEF], m_cSmallDef[MAX_DEF];
	int m_nBkColor[3]; //RGB
	COLORREF m_rgbDef[MAX_DEF];
	int m_nOdr[MAX_DEF];

	CVision* m_pVision[2];	// [0] : LeftCam , [1] : RightCam
	CVision* m_pVisionInner[2];	// [0] : LeftCam , [1] : RightCam

	// 현재 작업인 데이터구조 ===================================================================
	BOOL m_bCamChged;
	CCamMaster m_Master[2];
	CDataMarking* m_pPcr[MAX_PCR][MAX_PCR_PNL];	//릴맵화면표시를 위한 데이터	// [0]:AOI-Up , [1]:AOI-Dn , [2]:AOI-AllUp , [3]:AOI-AllDn

	CReelMap* m_pReelMapDisp;
	CReelMap* m_pReelMap;
	CReelMap *m_pReelMapUp, *m_pReelMapDn, *m_pReelMapAll;

	// 내층 작업한 데이터구조  ====================================================================
	CCamMaster m_MasterInner[2];
	CDataMarking* m_pPcrInner[MAX_PCR][MAX_PCR_PNL];	//릴맵화면표시를 위한 데이터	// [0]:AOI-Up , [1]:AOI-Dn , [2]:AOI-AllUp , [3]:AOI-AllDn
	CDataMarking* m_pPcrIts[MAX_PCR_PNL];				//릴맵화면표시를 위한 데이터	// 내외층 merging

	CReelMap* m_pReelMapInner;
	CReelMap *m_pReelMapInnerUp, *m_pReelMapInnerDn, *m_pReelMapInnerAll;
	CReelMap* m_pReelMapIts;

	//=============================================================================================

	// 작업입니다.
public:
	void InitPcr();
	void ClrPcr();
	void Reset();
	BOOL InitAct();
	void SetRgbDef(int nDef, COLORREF rgbVal);
	void SetRgbBackGround(int nRed, int nGreen, int nBlue);
	void ClrFixPcs();
	void RestoreReelmap();
	int GetPcrIdx0(int nSerial, BOOL bNewLot = FALSE);	// Up - 릴맵화면 표시를 위한 Display buffer의 Shot 인덱스
	int GetPcrIdx1(int nSerial, BOOL bNewLot = FALSE);	// Dn - 릴맵화면 표시를 위한 Display buffer의 Shot 인덱스
	int LoadPCR0(int nSerial);							// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	int LoadPCR1(int nSerial);							// return : 2(Failed), 1(정상), -1(Align Error, 노광불량), -2(Lot End)
	CfPoint GetMkPnt(int nSerial, int nMkPcs);			// pcr 시리얼, pcr 불량 피스 읽은 순서 인덱스
	CfPoint GetMkPntIts(int nSerial, int nMkPcs);		// pcr 시리얼, pcr 불량 피스 읽은 순서 인덱스
	BOOL MakeMkDir();
	void SetCompletedSerial(int nSerial);
	void ResetReelmapPath();
	BOOL ChkYield(); // 수율 양호 : TRUE , 수율 불량 : FALSE

	BOOL GetPcrInfo(CString sPath, stModelInfo &stInfo);
	void MakeResultMDS();
	void UpdateData();
	void SetPathAtBuf();
	void CropCadImgUp(int nIdxMkInfo, int nSerial, int nIdxDef);
	void CropCadImgDn(int nIdxMkInfo, int nSerial, int nIdxDef);
	void ClrMkInfo();
	void LoadCADBufUp(UCHAR *pCADCellImg, long OrgStX, long OrgStY, long DesStX, long DesStY, long SizeX, long SizeY);
	void LoadCADBufDn(UCHAR *pCADCellImg, long OrgStX, long OrgStY, long DesStX, long DesStY, long SizeX, long SizeY);

	BOOL InitReelmap();
	void InitReelmapUp();
	void InitReelmapDn();
	void FreeReelmap();
	void FreePcr();
	void SetReelmap(int nDir = ROT_NONE);
	void SwitchReelmapDisp(int nSelRmap);
	BOOL InitReelmapInner();
	BOOL InitReelmapInnerUp();
	BOOL InitReelmapInnerDn();
	void SetReelmapInner(int nDir = ROT_NONE);

	BOOL OpenReelmapFromBuf(int nSerial);
	BOOL OpenReelmap();
	BOOL OpenReelmapUp();
	BOOL OpenReelmapDn();
	BOOL OpenReelmapInner();
	BOOL OpenReelmapInnerUp();
	BOOL OpenReelmapInnerDn();

	BOOL ReloadReelmap();
	BOOL ReloadReelmapFromThread();
	BOOL IsDoneReloadReelmap(int& nProc);

	BOOL ReloadReelmapInner();
	BOOL IsDoneReloadReelmapInner(int& nProc);

	void UpdateProcessNum(CString sProcessNum);

	BOOL UpdateReelmap(int nSerial);	// 시리얼파일의 정보로 릴맵을 만듬 
	BOOL UpdateReelmapInner(int nSerial);	// 시리얼파일의 정보로 릴맵을 만듬 

	// ITS
	CString GetItsFolderPath();
	CString GetItsTargetFolderPath();
	CString GetPathReelmapIts();
	BOOL MakeItsReelmapHeader();	// 내외층 머징된 릴맵 헤드
	BOOL WriteIts(int nItsSerial);
	BOOL MakeItsFile(int nSerial, int nLayer);			// RMAP_UP, RMAP_DN, RMAP_INNER_UP, RMAP_INNER_DN
	CString GetItsFileData(int nSerial, int nLayer);	// RMAP_UP, RMAP_DN, RMAP_INNER_UP, RMAP_INNER_DN
	BOOL MakeDirIts();
	BOOL MakeItsFile(int nSerial);
	void DelItsAll(CString strPath);
	void UpdateYield(int nSerial);


	BOOL m_bThreadAliveFinalCopyItsFiles, m_bRtnThreadFinalCopyItsFiles;
	CThreadTask m_ThreadTaskFinalCopyItsFiles; // CThreadTask class, handles the threading code
	void StartThreadFinalCopyItsFiles();
	void StopThreadFinalCopyItsFiles();
	BOOL FinalCopyItsFiles();
	BOOL CopyItsFile(CString sPathSrc, CString sPathDest);
	static BOOL ThreadProcFinalCopyItsFiles(LPVOID lpContext);


	// 보조작업입니다.
public:
	void SetUserName(CString sName);
	void SetOnePnlLen(double dPnlLen);
	void SetTempPauseLen(double dTempPauseLen);
	void SetLotCutPosLen(double dLotCutPosLen);
	void SetPathAtBufUp();
	void SetPathAtBufDn();
	COLORREF GetRgbStcDef(int nDefColor);
	CString GetKorDef(int nDefCode);

	BOOL LoadMstInfo();
	BOOL ChkModelInfo(int nAoi);
	void SetAlignPos();

	stJobModel ModelInfo;
	void SetModelInfo(stJobModel stInfo);
	CString GetPathReelmap(int nLayer);

	// ThreadProc
	DWORD m_dwThreadTick[MAX_THREAD_MGR_REELMAP];
	BOOL m_bThread[MAX_THREAD_MGR_REELMAP];
	CThreadTask m_Thread[MAX_THREAD_MGR_REELMAP];

	int	m_nSnTHREAD_UPDATE_REELMAP, m_nSnTHREAD_UPDATE_REELMAP_INNER;
	BOOL m_bTHREAD_UPDATE_REELMAP_UP, m_bTHREAD_UPDATE_REELMAP_DN, m_bTHREAD_UPDATE_REELMAP_ALL;
	BOOL m_bTHREAD_UPDATE_REELMAP_INNER_UP, m_bTHREAD_UPDATE_REELMAP_INNER_DN, m_bTHREAD_UPDATE_REELMAP_INNER_ALL;
	BOOL m_bTHREAD_UPDATE_REELMAP_ITS;

	int m_nSnTHREAD_MAKE_ITS_FILE;
	BOOL m_bTHREAD_MAKE_ITS_FILE_UP, m_bTHREAD_MAKE_ITS_FILE_DN;

	int	m_nSnTHREAD_UPDATE_YIELD, m_nSnTHREAD_UPDATE_YIELD_INNER;
	BOOL m_bTHREAD_UPDATE_YIELD_UP, m_bTHREAD_UPDATE_YIELD_DN, m_bTHREAD_UPDATE_YIELD_ALL;
	BOOL m_bTHREAD_UPDATE_YIELD_INNER_UP, m_bTHREAD_UPDATE_YIELD_INNER_DN, m_bTHREAD_UPDATE_YIELD_INNER_ALL;
	BOOL m_bTHREAD_UPDATE_YIELD_ITS;

	BOOL m_bTHREAD_RELOAD_REELMAP_UP, m_bTHREAD_RELOAD_REELMAP_DN, m_bTHREAD_RELOAD_REELMAP_ALL;
	BOOL m_bTHREAD_RELOAD_REELMAP_INNER_UP, m_bTHREAD_RELOAD_REELMAP_INNER_DN, m_bTHREAD_RELOAD_REELMAP_INNER_ALL;
	BOOL m_bTHREAD_RELOAD_REELMAP_ITS;

	void InitThread();
	BOOL IsUpdateReelmap();
	BOOL IsUpdateReelmapInner();
	BOOL IsUpdateReelmapIts();
	BOOL IsUpdateYield();
	BOOL IsUpdateYieldInner();
	BOOL IsUpdateYieldIts();
	BOOL IsMakeItsFile();
	BOOL IsReloadReelmap();
	BOOL IsReloadReelmapInner();
	BOOL IsReloadReelmapIts();

	UINT (*ptrThreadProc[MAX_THREAD_MGR_REELMAP])(LPVOID lpContext);

	static UINT ThreadProc0(LPVOID lpContext);	// UpdateReelmapUp()
	static UINT ThreadProc1(LPVOID lpContext);	// UpdateReelmapDn()
	static UINT ThreadProc2(LPVOID lpContext);	// UpdateReelmapAll()
	static UINT ThreadProc3(LPVOID lpContext);	// UpdateReelmapInnerUp()
	static UINT ThreadProc4(LPVOID lpContext);	// UpdateReelmapInnerDn()
	static UINT ThreadProc5(LPVOID lpContext);	// UpdateReelmapInnerAll()
	static UINT ThreadProc6(LPVOID lpContext);	// UpdateReelmapIts()

	static UINT ThreadProc7(LPVOID lpContext);	// MakeItsFileUp()
	static UINT ThreadProc8(LPVOID lpContext);	// MakeItsFileDn()

	static UINT ThreadProc9(LPVOID lpContext);	// UpdateYieldUp()
	static UINT ThreadProc10(LPVOID lpContext);	// UpdateYieldDn()
	static UINT ThreadProc11(LPVOID lpContext);	// UpdateYieldAll()
	static UINT ThreadProc12(LPVOID lpContext);	// UpdateYieldInnerUp()
	static UINT ThreadProc13(LPVOID lpContext);	// UpdateYieldInnerDn()
	static UINT ThreadProc14(LPVOID lpContext);	// UpdateYieldInnerAll()
	static UINT ThreadProc15(LPVOID lpContext);	// UpdateYieldIts()

	static UINT ThreadProc16(LPVOID lpContext); // ReloadReelmapUp()
	static UINT ThreadProc17(LPVOID lpContext); // ReloadReelmapDn()
	static UINT ThreadProc18(LPVOID lpContext); // ReloadReelmapAll()
	static UINT ThreadProc19(LPVOID lpContext); // ReloadReelmapInnerUp()
	static UINT ThreadProc20(LPVOID lpContext); // ReloadReelmapInnerDn()
	static UINT ThreadProc21(LPVOID lpContext); // ReloadReelmapInnerAll()
	static UINT ThreadProc22(LPVOID lpContext); // ReloadReelmapIts()

	void UpdateReelmapUp();						// ThreadProc0
	void UpdateReelmapDn();						// ThreadProc1
	void UpdateReelmapAll();					// ThreadProc2
	void UpdateReelmapInnerUp();				// ThreadProc3
	void UpdateReelmapInnerDn();				// ThreadProc4
	void UpdateReelmapInnerAll();				// ThreadProc5
	BOOL UpdateReelmapIts();					// ThreadProc6

	BOOL MakeItsFileUp(int nSerial);			// ThreadProc7
	BOOL MakeItsFileDn(int nSerial);			// ThreadProc8

	void UpdateYieldUp(int nSerial);			// ThreadProc9
	void UpdateYieldDn(int nSerial);			// ThreadProc10
	void UpdateYieldAll(int nSerial);			// ThreadProc11
	void UpdateYieldInnerUp(int nSerial);		// ThreadProc12
	void UpdateYieldInnerDn(int nSerial);		// ThreadProc13
	void UpdateYieldInnerAll(int nSerial);		// ThreadProc14
	void UpdateYieldIts(int nSerial);			// ThreadProc15

	void ReloadReelmapUp();						// ThreadProc16
	void ReloadReelmapDn();						// ThreadProc17
	void ReloadReelmapAll();					// ThreadProc18
	void ReloadReelmapInnerUp();				// ThreadProc19
	void ReloadReelmapInnerDn();				// ThreadProc20
	void ReloadReelmapInnerAll();				// ThreadProc21
	BOOL ReloadReelmapIts();					// ThreadProc22

	// 생성된 메시지 맵 함수
protected:

public:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


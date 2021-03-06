// FingerPrintRecognitionDlg.h : 头文件
//

#pragma once

//add mine
#include<cv.h>
#include<highgui.h>
#include "CvvImage.h"
#include "InputDlg.h"


// CFingerPrintRecognitionDlg 对话框
class CFingerPrintRecognitionDlg : public CDialogEx
{
// 构造
public:
	CFingerPrintRecognitionDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_FINGERPRINTRECOGNITION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	//add mine
	enum DlgMode {MODE_ADD = 11, MODE_RECG = 20, MODE_MATCH = 30};
	//CvvImage m_leftImage;
	//CvvImage m_rightImage;
	CMenu menu;
	DlgMode m_mode;

	void showImgInHDC(UINT ID, const cv::Mat img);
	//void drawPicToHDC(UINT ID);
	void changeDlgMode(DlgMode);
	afx_msg void OnBnClickedOpenImg1();
	afx_msg void OnBnClickedOpenImg2();
	afx_msg void OnBnClickedMatch();
	afx_msg void OnBnClickedRecognize();
	afx_msg void OnBnClickedExtractTrait();
	afx_msg void OnBnClickedSave();
	afx_msg void OnBnMenuAdd();
	afx_msg void OnBnMenuNew();
	afx_msg void OnBnMenuRecognize();
	afx_msg void OnBnMenuMatch();
};

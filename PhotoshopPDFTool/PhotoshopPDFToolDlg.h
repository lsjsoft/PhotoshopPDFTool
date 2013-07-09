// PhotoshopPDFToolDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CPhotoshopPDFToolDlg dialog
class CPhotoshopPDFToolDlg : public CDialog
{
// Construction
public:
	CPhotoshopPDFToolDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_PHOTOSHOPPDFTOOL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

    void OnDropFiles(HDROP hDropInfo);

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
    afx_msg void OnBnClickedRun();
    DECLARE_MESSAGE_MAP()
public:
    /** 动作集 */
    CString m_strActionSetName;
    /** 动作 */
    CString m_strAction;
    /** PDF文件 */
    CString m_strPDFFile;
    /** 信息 */
    CString m_strInfo;
    /** 信息控件 */
    CStatic m_InfoCtl;
    /** Photoshop是否可见 */
    BOOL m_bPhotosopVisible;
    /** 品质 */
    UINT m_Quality;
};

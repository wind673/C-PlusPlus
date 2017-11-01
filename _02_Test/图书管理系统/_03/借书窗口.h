#pragma once


// 借书窗口 对话框

class 借书窗口 : public CDialogEx
{
	DECLARE_DYNAMIC(借书窗口)

public:
	借书窗口(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~借书窗口();

// 对话框数据
	enum { IDD = ID_APP_BORROW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenuBorrow();
};

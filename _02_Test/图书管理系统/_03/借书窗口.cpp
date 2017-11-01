// 借书窗口.cpp : 实现文件
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "借书窗口.h"
#include "afxdialogex.h"


// 借书窗口 对话框

IMPLEMENT_DYNAMIC(借书窗口, CDialogEx)

借书窗口::借书窗口(CWnd* pParent /*=NULL*/)
	: CDialogEx(借书窗口::IDD, pParent)
{

}

借书窗口::~借书窗口()
{
}

void 借书窗口::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(借书窗口, CDialogEx)
	ON_COMMAND(ID_MENU_BORROW, &借书窗口::OnMenuBorrow)
END_MESSAGE_MAP()


// 借书窗口 消息处理程序


void 借书窗口::OnMenuBorrow()
{
	// TODO: 在此添加命令处理程序代码  
	借书窗口 *dlg = new  借书窗口(this);
	dlg->Create(IDD_BORROW_BOX); 
	dlg->ShowWindow(IDD_BORROW_BOX); 
}





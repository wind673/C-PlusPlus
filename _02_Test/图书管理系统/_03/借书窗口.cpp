// ���鴰��.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ͼ�����ϵͳ.h"
#include "���鴰��.h"
#include "afxdialogex.h"


// ���鴰�� �Ի���

IMPLEMENT_DYNAMIC(���鴰��, CDialogEx)

���鴰��::���鴰��(CWnd* pParent /*=NULL*/)
	: CDialogEx(���鴰��::IDD, pParent)
{

}

���鴰��::~���鴰��()
{
}

void ���鴰��::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(���鴰��, CDialogEx)
	ON_COMMAND(ID_MENU_BORROW, &���鴰��::OnMenuBorrow)
END_MESSAGE_MAP()


// ���鴰�� ��Ϣ�������


void ���鴰��::OnMenuBorrow()
{
	// TODO: �ڴ���������������  
	���鴰�� *dlg = new  ���鴰��(this);
	dlg->Create(IDD_BORROW_BOX); 
	dlg->ShowWindow(IDD_BORROW_BOX); 
}





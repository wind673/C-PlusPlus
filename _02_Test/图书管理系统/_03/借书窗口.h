#pragma once


// ���鴰�� �Ի���

class ���鴰�� : public CDialogEx
{
	DECLARE_DYNAMIC(���鴰��)

public:
	���鴰��(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~���鴰��();

// �Ի�������
	enum { IDD = ID_APP_BORROW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenuBorrow();
};


// ͼ�����ϵͳView.h : Cͼ�����ϵͳView ��Ľӿ�
//

#pragma once


class Cͼ�����ϵͳView : public CView
{
protected: // �������л�����
	Cͼ�����ϵͳView();
	DECLARE_DYNCREATE(Cͼ�����ϵͳView)

// ����
public:
	Cͼ�����ϵͳDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cͼ�����ϵͳView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ͼ�����ϵͳView.cpp �еĵ��԰汾
inline Cͼ�����ϵͳDoc* Cͼ�����ϵͳView::GetDocument() const
   { return reinterpret_cast<Cͼ�����ϵͳDoc*>(m_pDocument); }
#endif


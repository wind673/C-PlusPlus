
// ͼ�����ϵͳView.cpp : Cͼ�����ϵͳView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ͼ�����ϵͳ.h"
#endif

#include "ͼ�����ϵͳDoc.h"
#include "ͼ�����ϵͳView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cͼ�����ϵͳView

IMPLEMENT_DYNCREATE(Cͼ�����ϵͳView, CView)

BEGIN_MESSAGE_MAP(Cͼ�����ϵͳView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cͼ�����ϵͳView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// Cͼ�����ϵͳView ����/����

Cͼ�����ϵͳView::Cͼ�����ϵͳView()
{
	// TODO: �ڴ˴���ӹ������

}

Cͼ�����ϵͳView::~Cͼ�����ϵͳView()
{
}

BOOL Cͼ�����ϵͳView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cͼ�����ϵͳView ����

void Cͼ�����ϵͳView::OnDraw(CDC* /*pDC*/)
{
	Cͼ�����ϵͳDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cͼ�����ϵͳView ��ӡ


void Cͼ�����ϵͳView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cͼ�����ϵͳView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cͼ�����ϵͳView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cͼ�����ϵͳView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void Cͼ�����ϵͳView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cͼ�����ϵͳView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	//theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cͼ�����ϵͳView ���

#ifdef _DEBUG
void Cͼ�����ϵͳView::AssertValid() const
{
	CView::AssertValid();
}

void Cͼ�����ϵͳView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cͼ�����ϵͳDoc* Cͼ�����ϵͳView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cͼ�����ϵͳDoc)));
	return (Cͼ�����ϵͳDoc*)m_pDocument;
}
#endif //_DEBUG


// Cͼ�����ϵͳView ��Ϣ�������

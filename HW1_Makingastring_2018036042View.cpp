
// HW1_Makingastring_2018036042View.cpp : CHW1_Makingastring_2018036042View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "HW1_Makingastring_2018036042.h"
#endif

#include "HW1_Makingastring_2018036042Doc.h"
#include "HW1_Makingastring_2018036042View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW1_Makingastring_2018036042View

IMPLEMENT_DYNCREATE(CHW1_Makingastring_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW1_Makingastring_2018036042View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CHW1_Makingastring_2018036042View ����/�Ҹ�

CHW1_Makingastring_2018036042View::CHW1_Makingastring_2018036042View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CHW1_Makingastring_2018036042View::~CHW1_Makingastring_2018036042View()
{
}

BOOL CHW1_Makingastring_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CHW1_Makingastring_2018036042View �׸���

void CHW1_Makingastring_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW1_Makingastring_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CHW1_Makingastring_2018036042View �μ�

BOOL CHW1_Makingastring_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CHW1_Makingastring_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CHW1_Makingastring_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CHW1_Makingastring_2018036042View ����

#ifdef _DEBUG
void CHW1_Makingastring_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW1_Makingastring_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW1_Makingastring_2018036042Doc* CHW1_Makingastring_2018036042View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW1_Makingastring_2018036042Doc)));
	return (CHW1_Makingastring_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW1_Makingastring_2018036042View �޽��� ó����


void CHW1_Makingastring_2018036042View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	CString str;


	str.Format(_T("%c"), nChar); 
	CClientDC dc(this);

	if (str == 47 || str == 46 || str == 45 || str == 44 || str == 43 || str == 42 || str == 41 || str == 40 || str == 39 || str == 38 
		|| str == 37 || str == 36 || str == 35 || str == 34 || str == 33 || str == 58 || str == 59 || str == 60 || str == 61 || str == 62 || str == 63 || str == 64
		|| str == 91 || str == 92 || str == 93 || str == 94 || str == 95 || str == 96 || str == 123 || str == 124 || str == 125 || str == 126)
	{
		str.Remove(47);		str.Remove(46);		str.Remove(45);		str.Remove(44);		str.Remove(43);		str.Remove(42);		str.Remove(41);		str.Remove(40);
		str.Remove(39);		str.Remove(38);		str.Remove(37);		str.Remove(36);		str.Remove(35);		str.Remove(34);		str.Remove(33);		str.Remove(58);
		str.Remove(59);		str.Remove(60);		str.Remove(61);		str.Remove(62);		str.Remove(63);		str.Remove(64);		str.Remove(91);		str.Remove(92);
		str.Remove(93);		str.Remove(94);		str.Remove(95);		str.Remove(96);		str.Remove(123);		str.Remove(124);		str.Remove(125);
		str.Remove(126);
	}
	//Ư�����ڰ� �Էµɽ� Ư������ ����(�ƽ�Ű�ڵ�)

	dc.TextOutW(x, y, str);	//x,y ��ǥ�� str���
	CSize size = dc.GetTextExtent(str);	//������ ũ��
	x += size.cx;	//������ ũ�⸸ŭ x������ �̵�
	

	CView::OnChar(nChar, nRepCnt, nFlags);
}

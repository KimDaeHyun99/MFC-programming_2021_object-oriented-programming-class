
// HW1_Makingastring_2018036042View.h : CHW1_Makingastring_2018036042View Ŭ������ �������̽�
//

#pragma once


class CHW1_Makingastring_2018036042View : public CView
{
protected: // serialization������ ��������ϴ�.
	CHW1_Makingastring_2018036042View();
	DECLARE_DYNCREATE(CHW1_Makingastring_2018036042View)

// Ư���Դϴ�.
public:
	CHW1_Makingastring_2018036042Doc* GetDocument() const;
	int x = 10;
	int y = 20;
// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CHW1_Makingastring_2018036042View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // HW1_Makingastring_2018036042View.cpp�� ����� ����
inline CHW1_Makingastring_2018036042Doc* CHW1_Makingastring_2018036042View::GetDocument() const
   { return reinterpret_cast<CHW1_Makingastring_2018036042Doc*>(m_pDocument); }
#endif


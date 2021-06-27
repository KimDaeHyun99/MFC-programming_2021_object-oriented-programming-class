
// HW1_Makingastring_2018036042View.h : CHW1_Makingastring_2018036042View 클래스의 인터페이스
//

#pragma once


class CHW1_Makingastring_2018036042View : public CView
{
protected: // serialization에서만 만들어집니다.
	CHW1_Makingastring_2018036042View();
	DECLARE_DYNCREATE(CHW1_Makingastring_2018036042View)

// 특성입니다.
public:
	CHW1_Makingastring_2018036042Doc* GetDocument() const;
	int x = 10;
	int y = 20;
// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CHW1_Makingastring_2018036042View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // HW1_Makingastring_2018036042View.cpp의 디버그 버전
inline CHW1_Makingastring_2018036042Doc* CHW1_Makingastring_2018036042View::GetDocument() const
   { return reinterpret_cast<CHW1_Makingastring_2018036042Doc*>(m_pDocument); }
#endif


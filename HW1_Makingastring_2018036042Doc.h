
// HW1_Makingastring_2018036042Doc.h : CHW1_Makingastring_2018036042Doc Ŭ������ �������̽�
//


#pragma once


class CHW1_Makingastring_2018036042Doc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CHW1_Makingastring_2018036042Doc();
	DECLARE_DYNCREATE(CHW1_Makingastring_2018036042Doc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
public:
	virtual ~CHW1_Makingastring_2018036042Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};

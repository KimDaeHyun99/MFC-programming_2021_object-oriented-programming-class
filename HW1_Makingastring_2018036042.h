
// HW1_Makingastring_2018036042.h : HW1_Makingastring_2018036042 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CHW1_Makingastring_2018036042App:
// �� Ŭ������ ������ ���ؼ��� HW1_Makingastring_2018036042.cpp�� �����Ͻʽÿ�.
//

class CHW1_Makingastring_2018036042App : public CWinAppEx
{
public:
	CHW1_Makingastring_2018036042App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHW1_Makingastring_2018036042App theApp;

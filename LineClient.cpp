// LineClient.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "LineClient.h"


// CLineClient

CLineClient::CLineClient()
{
}

CLineClient::~CLineClient()
{
}


// CLineClient 멤버 함수


void CLineClient::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	this->ShutDown();
	this->Close();
	AfxMessageBox(_T("서버가 연결을 종료하였습니다."));
	::PostQuitMessage(0);	//프로그램 강제 종료
	CSocket::OnClose(nErrorCode);
}


void CLineClient::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.


	CSocket::OnReceive(nErrorCode);
}

CLineClient::CLineClient(CPoint pointto, CPoint pointfrom)
{
	m_pointfrom = pointfrom;
	m_pointto = pointto;
}
// ClientSocket.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "ClientSocket.h"
#include "ChatClientDlg.h"

// CClientSocket

CClientSocket::CClientSocket()
{
}

CClientSocket::~CClientSocket()
{
}


// CClientSocket 멤버 함수


void CClientSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	this->ShutDown();
	this->Close();
	AfxMessageBox(_T("서버가 연결을 종료하였습니다."));
	::PostQuitMessage(0);	//프로그램 강제 종료


	CSocket::OnClose(nErrorCode);
}


//void CClientSocket::OnAccept(int nErrorCode)
//{
//	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
//	
//
//
//
//	CSocket::OnAccept(nErrorCode);
//}


void CClientSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	TCHAR szBuff[1024]; //::ZeroMemory(szBuff, sizeof(szBuff));
	int nRead = Receive(szBuff, sizeof(szBuff));
	switch (nRead) {
	case 0: this->Close(); break;
	case SOCKET_ERROR: if (GetLastError() != WSAEWOULDBLOCK)
	{
		AfxMessageBox(_T("Error occurred"));
		this->Close();
	} break;
	default:
		// 수신한 메시지를 화면에 보여준다.
		szBuff[nRead] = _T('\0');
		CChatClientDlg *pMain = (CChatClientDlg *)AfxGetMainWnd();
		pMain->m_ctrlEdit.ReplaceSel(szBuff);
	}


	CSocket::OnReceive(nErrorCode);
}

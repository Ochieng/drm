// dllmain.cpp : DllMain �̎���

#include "stdafx.h"
#include "resource.h"
#include "DrmExt_i.h"
#include "dllmain.h"

CDrmExtModule _AtlModule;

class CDrmExtApp : public CWinApp
{
public:

// �I�[�o�[���C�h
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CDrmExtApp, CWinApp)
END_MESSAGE_MAP()

CDrmExtApp theApp;

BOOL CDrmExtApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CDrmExtApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}

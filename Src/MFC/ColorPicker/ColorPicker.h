
// ColorPicker.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CColorPickerApp:
// �� Ŭ������ ������ ���ؼ��� ColorPicker.cpp�� �����Ͻʽÿ�.
//

class CColorPickerApp : public CWinApp
{
public:
	CColorPickerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CColorPickerApp theApp;
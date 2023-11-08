#pragma once
#include "StateObj.h"
#include "LogoBack.h"
#include "StateMgr.h"
#include "Include.h"
#include "AbStractFactory.h"

class Logo
	:public StateObj
{
private:
	Obj* m_pLogoBack;
	DWORD dwTime;
	int delaytime;
public:
	void Initialize();
	void Progress();
	void Render(HDC _hdc);
	void Release();
public:
	Logo();
	~Logo();
};
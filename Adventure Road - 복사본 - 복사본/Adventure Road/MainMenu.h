#pragma once
#include "Include.h"
#include "LoadBmp.h"
#include "Obj.h"
#include "StateObj.h"
#include "MenuBack.h"
#include "AbStractFactory.h"
class MainMenu
	: public StateObj
{
private:
	list<Obj*> m_ObjList[OBJ_MENU_END];
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:
	MainMenu();
	virtual ~MainMenu();
};


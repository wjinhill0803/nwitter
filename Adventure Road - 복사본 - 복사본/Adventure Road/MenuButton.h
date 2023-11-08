#pragma once
#include "Include.h"
#include "Obj.h"

class MenuButton
{
private:
public:
	void Initialize();
	void Progress();
	void Render(HDC _hdc);
	void Release();
public:
	MenuButton();
	~MenuButton();
};
#pragma once
#include "Obj.h"

class LoadBmp;

class LogoBack :
	public Obj
{
public:

	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:

	LogoBack(void);

	LogoBack(float _fx, float _fy, float _fsizex, float _fsizey)
		:Obj(_fx, _fy, _fsizex, _fsizey) {};

	virtual ~LogoBack(void);
};


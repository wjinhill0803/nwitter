#pragma once
#include "Obj.h"
#include "AbStractFactory.h"

class MenuBack :
	public Obj
{
public:

	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:

	MenuBack(void);

	MenuBack(float _fx, float _fy, float _fsizex, float _fsizey)
		:Obj(_fx, _fy, _fsizex, _fsizey) {};

	virtual ~MenuBack(void);
};


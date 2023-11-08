#pragma once
#include "Obj.h"
class StateBack :
    public Obj
{
public:

	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:

	StateBack(void);

	StateBack(float _fx, float _fy, float _fsizex, float _fsizey)
		:Obj(_fx, _fy, _fsizex, _fsizey) {};

	virtual ~StateBack(void);
};


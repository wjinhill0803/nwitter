#pragma once
#include "Obj.h"

class StageBack:
	public Obj
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:
	StageBack();
	virtual ~StageBack();
};


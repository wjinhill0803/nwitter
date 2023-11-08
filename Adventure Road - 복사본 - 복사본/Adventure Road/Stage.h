#pragma once
#include "StateObj.h"
#include "Obj.h"
#include "LoadBmp.h"
#include "AbStractFactory.h"
#include "StageBack.h"
#include "Player.h"
#include "StateObj.h"

class Stage:
	public StateObj
{
private:

	list<Obj*> m_ObjList[OBJ_STAGE_END];

public:

	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();

public:

	Stage();
	virtual ~Stage();

};


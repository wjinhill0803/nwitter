#pragma once

#include "Obj.h"

template <typename T>
class AbStractFactory
{
public:
	static inline Obj* CreateObj()
	{
		Obj* pObj = NULL;
		pObj = new T;
		pObj->Initialize();

		return pObj;
	}

	static inline Obj* CreateObj(float _fx, float _fy)
	{
		Obj* pObj = NULL;
		pObj = new T(_fx, _fy);
		pObj->Initialize();

		return pObj;
	}

	static inline Obj* CreateObj(float _fx, float _fy, float _fsizex, float _fsizey)
	{
		Obj* pObj = NULL;
		pObj = new T(_fx, _fy, _fsizex, _fsizey);
		pObj->Initialize();

		return pObj;
	}

public:
	AbStractFactory() {};
	~AbStractFactory() {};
};

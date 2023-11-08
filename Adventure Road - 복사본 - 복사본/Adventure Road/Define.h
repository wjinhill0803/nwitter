#pragma once
#include "framework.h"

#define SAFE_DELETE(p) if(p) {delete p; p = NULL;}
#define PATHBMP(FilePath) (new LoadBmp)->LoadBmpf(TEXT( FilePath) )
#define FACTORY(ObjName) AbStractFactory<ObjName>::CreateObj()
#define FACTORY_POS(ObjName, X, Y) AbStractFactory<ObjName>::CreateObj(X, Y)

const int Window_Size_X = 800;
const int Window_Size_Y = 600;

extern HWND g_hWnd;
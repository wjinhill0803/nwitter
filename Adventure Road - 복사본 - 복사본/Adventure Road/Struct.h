#pragma once

typedef struct tagInfo
{
	float		fX;
	float		fY;
	float		fSizeX;
	float		fSizeY;
	
	tagInfo(void) {}

	tagInfo(float _fx, float _fy)
		: fX(_fx), fY(_fy) {}

	tagInfo(float _fx, float _fy, float _fSizex, float _fSizey)
		: fX(_fx), fY(_fy), fSizeX(_fSizex), fSizeY(fSizeY) {}

}INFO, *PINFO;

typedef struct tagFrame
{
	int		iStartX;
	int		iStartY;
	int		iLastX;
	int		iLastY;
	DWORD	dwTime;

}FRAME;
#include "Logo.h"

Logo::Logo()
	:m_pLogoBack(NULL)
{
};

Logo::~Logo()
{
	Release();
}

void Logo::Initialize()
{
	m_vecBmp.push_back((new LoadBmp)->LoadBmpf(TEXT("../Texture/BackBuffer.bmp")));
	m_vecBmp.push_back(PATHBMP("../Texture/Logo/LogoBack/Logo.bmp"));
	m_pLogoBack = FACTORY(LogoBack);
	Obj::SetBmp(&m_vecBmp);
	dwTime = GetTickCount();
	delaytime = 3000;

}

void Logo::Progress()
{
	if (dwTime + delaytime < GetTickCount())
	{
		StateMgr::GetInst()->SetState(STATE_STAGE);
	}
}

void Logo::Render(HDC _hdc)
{
	m_pLogoBack->Render(m_vecBmp[BMP_LOGO_BACKBUFFER]->GetMemDC());
	BitBlt(_hdc, 0, 0, Window_Size_X, Window_Size_Y, m_vecBmp[BMP_LOGO_BACKBUFFER]->GetMemDC(), 0, 0, SRCCOPY);
}

void Logo::Release()
{
	SAFE_DELETE(m_pLogoBack);
}
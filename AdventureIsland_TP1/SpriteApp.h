#pragma once

#include "Player.h"
#include "BackGround.h"

class SpriteApp :
	public D3DApp
{
public:
	SpriteApp(HINSTANCE hInstance
		, std::string winCaption
		, D3DDEVTYPE devType
		, DWORD requestedVP);
	~SpriteApp();

	void OnLostDevice();
	void OnResetDevice();

private:
	SpriteApp() { }
	Player* player;
	BackGround* background;
	BackGround* background2;

};


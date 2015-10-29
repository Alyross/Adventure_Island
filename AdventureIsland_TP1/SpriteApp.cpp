#include "SpriteApp.h"

SpriteApp::SpriteApp(HINSTANCE hInstance
				, std::string winCaption
				, D3DDEVTYPE devType
				, DWORD requestedVP)
	: D3DApp(hInstance, winCaption,devType, requestedVP)
{
	background = new BackGround();
	background->SetPosition(D3DXVECTOR3(-400.f, -300.f, 0.f));
	background2 = new BackGround();
	background2->SetPosition(D3DXVECTOR3(619.f, -300.f, 0.f));
	player = new Player();
	player->SetPosition(D3DXVECTOR3(-200.f, 36.f, 1.f));
}

SpriteApp::~SpriteApp()
{
	delete background;
	delete background2;
	delete player;
}

void SpriteApp::OnLostDevice()
{
	
}

void SpriteApp::OnResetDevice()
{

}

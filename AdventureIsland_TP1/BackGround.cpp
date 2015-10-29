#include "BackGround.h"



BackGround::BackGround()
	: Sprite("images/BackGround.png")
	, endPos(-1424.f)
	, startPos(D3DXVECTOR3(619.f, -300.f, 0.f))
	, speed(0.05f)
	, maxBackwardPos(-400.f)
{
	
}

BackGround::~BackGround()
{
}

void BackGround::Update(float dt)
{
	Sprite::Update(dt);

	if (gDInput->keyDown(DIK_D))
	{
		position.x -= speed;
	}

	if (gDInput->keyDown(DIK_A))
	{
		if (position.x <= maxBackwardPos)
		{
			position.x += speed;
		}
		
	}

	if (position.x <= endPos)
	{
		SetPosition(startPos);
	}
}

void BackGround::Draw()
{
	Sprite::Draw();

	D3DXMATRIX rotation;
	D3DXMatrixRotationZ(&rotation, D3DX_PI);
	HR(gD3DApp->GetSpriteBatch()->SetTransform(&rotation));
}

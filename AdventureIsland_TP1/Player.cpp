#include "Player.h"

Player::Player()
	: Sprite("images/runRight.png")
	, isJumping(false)
	, maxHeight(-40.f)
	, jumpSpeed(.03f)
	, minHeight(36.f)
	, canJump(true)
{
}

Player::~Player()
{
}

void Player::Update(float dt)
{
	Sprite::Update(dt);

	JumpManagement();
}

void Player::Draw()
{
	Sprite::Draw();

	D3DXMATRIX rotation;
	D3DXMatrixRotationZ(&rotation, D3DX_PI);
	HR(gD3DApp->GetSpriteBatch()->SetTransform(&rotation));
}

void Player::JumpManagement()
{
	if (canJump == true)
	{
		if (gDInput->keyDown(DIK_SPACE))
		{
			isJumping = true;
			canJump = false;
		}
	}

	if (isJumping == true)
	{
		Jump();
		canJump = false;
	}
	else if (isJumping == false)
	{
		Fall();
	}

	if (position.y == minHeight)
	{
		canJump = true;
	}
}

void Player::Jump()
{
	position.y -= jumpSpeed;

	if (position.y <= maxHeight)
	{
		isJumping = false;
	}
}

void Player::Fall()
{
	if (position.y <= minHeight)
	{
		position.y += jumpSpeed;
	}
}
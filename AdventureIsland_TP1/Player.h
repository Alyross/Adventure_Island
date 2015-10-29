#pragma once
#include "D3DApp.h"
#include "Sprite.h"

class Player :
	public Sprite
{
public:
	Player();
	~Player();

	void Update(float dt);
	void Draw();

private:
	bool isJumping;
	bool canJump;
	float maxHeight;
	float jumpSpeed;
	float minHeight;

	void JumpManagement();
	void Jump();
	void Fall();
};


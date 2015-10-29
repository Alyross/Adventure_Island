#pragma once
#include "D3DApp.h"
#include "Sprite.h"

class BackGround :
	public Sprite
{
public:
	BackGround();
	~BackGround();

	void Update(float dt);
	void Draw();

	

private:
	float speed;
	float endPos;
	float maxBackwardPos;
	D3DXVECTOR3 startPos;
};


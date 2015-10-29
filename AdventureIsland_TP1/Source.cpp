#include <iostream>
#include <fstream>

#include <d3dx9.h>
#include "SpriteApp.h"

int WINAPI WinMain( HINSTANCE hInstance
				  , HINSTANCE prevInstance
				  , PSTR cmdLine
				  , int showCmd)
{
	SpriteApp app( hInstance, "Hello Direct 3D!"
			  , D3DDEVTYPE_HAL, D3DCREATE_HARDWARE_VERTEXPROCESSING);

	gD3DApp = &app;

	return gD3DApp->Run();
}
#include "stdafx.h"
#include "GraphicManager.h"


	LPDIRECT3DDEVICE9 GraphicManager::device = nullptr;

LPDIRECT3DTEXTURE9 GraphicManager::CraeteTex(LPCWSTR file)
{
	LPDIRECT3DTEXTURE9 tex;
	
	D3DXCreateTextureFromFileEx(device,
		file,
		D3DX_DEFAULT_NONPOW2,
		D3DX_DEFAULT_NONPOW2,
		1,
		0,
		D3DFMT_A8R8G8B8,
		D3DPOOL_MANAGED,
		D3DX_FILTER_NONE,
		D3DX_DEFAULT,
		0,
		NULL,
		NULL,
		&tex);
	
	return tex;
}

GraphicManager::GraphicManager()
{
}


GraphicManager::~GraphicManager()
{
}

#pragma once
#include <d3d9.h>

static class GameManager
{
public:
	LPDIRECT3D9 g_pD3D;
	LPDIRECT3DDEVICE9 g_pd3dDevice;
	HWND hWnd;

	LRESULT Init(HWND hWnd);
	void Render();


	GameManager();
	~GameManager();
};


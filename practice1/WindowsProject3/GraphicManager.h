#pragma once
class GraphicManager
{
public:
	LPDIRECT3DTEXTURE9 CraeteTex(LPCWSTR file);

	GraphicManager();
	~GraphicManager();


private:
	static LPDIRECT3DDEVICE9 device;
};


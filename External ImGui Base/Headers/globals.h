/*
* FILE: globals.h
* SUMMARY: File to declare global variables.
*/
#pragma once
#include <Windows.h>

extern HANDLE hProcess;
extern DWORD ProcessId;
extern HWND hWnd;
extern DWORD ModuleBase;
extern DWORD BaseAddress;

extern int Height;
extern int Width;

// Menu variables
extern bool ShowMenu;
extern unsigned int TabPos;

// Functionality variables
extern bool DrawFps;
extern bool DrawWatermark;

extern bool CheckBox1;
extern bool CheckBox2;

// DirectX/Overlay variables
extern IDirect3D9Ex* p_Object;
extern LPDIRECT3DDEVICE9 D3dDevice;
extern DWORD ScreenCenterX;
extern DWORD ScreenCenterY;
extern RECT GameRect;
extern D3DPRESENT_PARAMETERS d3dpp;
extern const MARGINS Margin;
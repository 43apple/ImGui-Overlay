/*
* FILE: Entry.cpp
* SUMMARY: Entry point for application.
*/
#include "../Headers/win_utils.h"

/* Declaring globals */
// Memory variables
HANDLE hProcess = NULL;
DWORD ProcessId = NULL;
HWND hWnd = NULL;
DWORD ModuleBase = NULL;
DWORD BaseAddress = NULL;

// Menu variables
bool ShowMenu = true;
unsigned int TabPos = 0;

// Functionality variables
bool DrawFps = true;
bool DrawWatermark = true;

bool CheckBox1 = true;
bool CheckBox2 = false;

// DirectX/Overlay variables
IDirect3D9Ex* p_Object = NULL;
DWORD ScreenCenterX = NULL;
DWORD ScreenCenterY = NULL;
RECT GameRect = { NULL };
D3DPRESENT_PARAMETERS d3dpp;
const MARGINS Margin = { -1 };
int Height = NULL;
int Width = NULL;

int main(void)
{
	// UpdateCheck(); need to fill in info in Update.cpp before uncommenting
	SetupConsole();
	Attach();
	CreateThread(NULL, NULL, MemoryThread, NULL, NULL, NULL);
	CreateThread(NULL, NULL, ConsoleThread, NULL, NULL, NULL);
	CreateThread(NULL, NULL, KeybindThread, NULL, NULL, NULL);
	InitOverlay();
	xShutdown();
	return (EXIT_SUCCESS);
}
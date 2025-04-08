/*
* FILE: Console.cpp
* SUMMARY: All code regarding the console front-end.
*/
#include "../Headers/win_utils.h"

using namespace std;

HWND hWndC = NULL;

// Set console title and enable TopMost
void SetupConsole()
{
	SetConsoleTitleA("My External Console");
	// TopMost
	hWndC = GetConsoleWindow();
	SetWindowPos(hWndC, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	ShowWindow(hWndC, SW_NORMAL);
}

// Thread to handle console output
DWORD ConsoleThread(LPVOID in)
{
	system("cls");
	cout << "Add some code to Console.cpp";
	return (0);
}
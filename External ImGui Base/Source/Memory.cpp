/*
* FILE: Memory.cpp
* SUMMARY: All code regarding memory, be it reading or writing.
*/
#include "../Headers/win_utils.h"

using namespace std;

void GetTargetHandle();
void AwaitKeypress();

// Attach to target process
void Attach()
{
	while (!hWnd)
	{
		cout << "Looking for target process...";
		hWnd = FindWindowA(0, "Friends - Discord");
		Sleep(200);
		system("cls");
	}

	cout << "Target process found. Attaching.\n";
	GetTargetHandle();
	// optionally await a keypress
	cout << "Succesfully attached to target process.\n";
	cout << "Press F1 when in lobby.\n";
	AwaitKeypress();
}

// Creating handle to target process (READ ONLY)
void GetTargetHandle()
{
	GetWindowThreadProcessId(hWnd, &ProcessId);
	if (!ProcessId)
	{
		std::cout << "GetWindowThreadProcessId failed. GetLastError: " << GetLastError();
		system("pause");
		exit(EXIT_FAILURE);
	}
	hProcess = OpenProcess(PROCESS_VM_READ, false, ProcessId);
	if (!hProcess)
	{
		std::cout << "OpenProcess failed. GetLastError: " << GetLastError();
		system("pause");
		exit(EXIT_FAILURE);
	}
	// FOR MONO (UNITY) GAMES (optional)
	/*
	ModuleBase = GetModuleBaseAddress(ProcessId, L"GameAssembly.dll");
	if (!moduleBase)
	{
		std::cout << "failed to get base address of GameAssembly.dll. GetLastError: " << GetLastError();
		system("pause");
		exit(EXIT_FAILURE);
	}
	*/
}

// Wait for specific keypress in order to continue (F1 default)
void AwaitKeypress()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 1)
			break;
		Sleep(2);
	}
}

DWORD MemoryThread(LPVOID in)
{
	// Any reading/writing memory should go here
	return (0);
}
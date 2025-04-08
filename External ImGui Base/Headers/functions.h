/*
* FILE: functions.h
* SUMMARY: File to prototype commonly used functions.
*/
#pragma once

// Functions
void UpdateCheck();
void SetupConsole();
void Attach();
void InitOverlay();
void xShutdown();
std::string StringConvert_UTF8(const std::string& str);

// Threads
DWORD ConsoleThread(LPVOID in);
DWORD MemoryThread(LPVOID in);
DWORD KeybindThread(LPVOID in);

// ImGui functions
void DrawText1(int x, int y, const char* str, RGBA* color);
void DrawCircle(int x, int y, int radius, RGBA* color, int segments);
void DrawCircleFilled(int x, int y, int radius, RGBA* color, int segments);
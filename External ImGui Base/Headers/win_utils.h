/*
* FILE: win_utils.h
* SUMMARY: Include common libraries or other header files.
*/
#pragma once
#include <windows.h>
#include <winternl.h>
#include <process.h>
#include <tlhelp32.h>
#include <inttypes.h>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <chrono>
#include <sstream>
#include <d3d9.h>
#include <Uxtheme.h>
#include <dwmapi.h>

#pragma comment (lib, "d3d9.lib")

#include "defs.h"
#include "globals.h"
#include "../Headers/functions.h"
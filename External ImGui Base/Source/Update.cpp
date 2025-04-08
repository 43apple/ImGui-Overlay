/*
* FILE: Update.cpp
* SUMMARY: Checking for possible new version of the application.
*/
#include "../Headers/win_utils.h"
#include <wininet.h>

std::string GetLatestVersion();

void UpdateCheck()
{
    std::string localVersion = "1.0";
    std::string latestVersion = GetLatestVersion();

    if (localVersion != latestVersion)
    {
        int response = MessageBox(NULL, "There is an update available! Click OK to go to download.", "External ImGui by 43apple", MB_OKCANCEL | MB_ICONINFORMATION);
        if (response == IDOK)
        {
            system("start https://github.com/loc8258");
            exit(EXIT_SUCCESS);
        }
    }
}

std::string GetLatestVersion() {
    HINTERNET hInternet = InternetOpenA("VersionCheck", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
    if (!hInternet) return "Error";

    /* LINK TO RAW VERSION NUMBER BELOW */
    HINTERNET hConnect = InternetOpenUrlA(hInternet, "LINK TO RAW VERSION NUMBER", NULL, 0, INTERNET_FLAG_RELOAD, 0);
    if (!hConnect) {
        InternetCloseHandle(hInternet);
        return "Error";
    }

    char buffer[64];
    DWORD bytesRead;
    std::string version;

    if (InternetReadFile(hConnect, buffer, sizeof(buffer) - 1, &bytesRead) && bytesRead > 0) {
        buffer[bytesRead] = '\0';
        version = buffer;
    }

    InternetCloseHandle(hConnect);
    InternetCloseHandle(hInternet);

    return version;
}

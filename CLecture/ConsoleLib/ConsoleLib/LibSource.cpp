#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "LibSource.h"

ON_UPDATE_CALLBACK  g_onUpdateCb = nullptr;
bool            g_isGameLoop = true;
int             g_keyvalue[256];

void ClearKeyvalues()
{
    memset(g_keyvalue, 0, sizeof(g_keyvalue));
}

void SetOnUpdateCallback(ON_UPDATE_CALLBACK pOnUpdate)
{
    g_onUpdateCb = pOnUpdate;
}

void GameLoop()
{
    DWORD dwOldTime = timeGetTime();
    ClearKeyvalues();
    while ( g_isGameLoop == true )
    {
        if (_kbhit())
        {
            const int ch = getch();
            g_keyvalue[ch] = 1;
        }//if
        DWORD dwCurrentTime = timeGetTime();
        DWORD dwElapsedTime = dwCurrentTime - dwOldTime;
        const float fElapsedTime = dwElapsedTime / 1000.f;

        if (g_onUpdateCb != nullptr)
            g_onUpdateCb(fElapsedTime);

        ClearKeyvalues();
        dwOldTime = dwCurrentTime;
    }//while
}
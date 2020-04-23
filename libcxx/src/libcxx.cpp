// dllmain.cpp : Defines the entry point for the DLL application.
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#include <iostream>

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::cout << "Hello DLL_PROCESS_ATTACH World!\n";
    case DLL_THREAD_ATTACH:
        std::cout << "Hello DLL_THREAD_ATTACH World!\n";
    case DLL_THREAD_DETACH:
        std::cout << "Hello DLL_THREAD_DETACH World!\n";
    case DLL_PROCESS_DETACH:
        std::cout << "Hello DLL_PROCESS_DETACH World!\n";
        break;
    }
    return TRUE;
}


// libcxx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


int main()
{
    std::cout << "Hello World!\n";
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

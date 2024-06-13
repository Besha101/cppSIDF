//
// Created by Besha on 13. 6. 2024..
//

#include <iostream>
#include <windows.h>
#include <psapi.h>

using namespace std;

void PrintMemoryInfo() {
    PROCESS_MEMORY_COUNTERS_EX pmc;
    if (GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc))) {
        cout << "Virtual Memory (VSZ): " << pmc.PrivateUsage << " bytes" << endl;
        cout << "Physical Memory (RSS): " << pmc.WorkingSetSize << " bytes" << endl;
    } else {
        cerr << "Failed to retrieve process memory info." << endl;
    }
}

int main() {
    cout << "Press Enter to continue...";
    cin.get();

    PrintMemoryInfo();

    const char* data = "Hello, Memory!";
    void* ptr = VirtualAlloc(NULL, strlen(data) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (ptr == nullptr) {
        cerr << "VirtualAlloc failed" << endl;
        return 1;
    }

    memcpy(ptr, data, strlen(data) + 1);

    PrintMemoryInfo();

    if (!VirtualFree(ptr, 0, MEM_RELEASE)) {
        cerr << "VirtualFree failed" << endl;
        return 1;
    }

    return 0;
}


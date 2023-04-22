#include <windows.h>
int main(){

STARTUPINFOW si ={0};

PROCESS_INFORMATION pi={0};

if(!CreateProcessW(L"D:\\FL Studio (GAB)\\FL.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)){
    return 1;
}
    return 0;

}

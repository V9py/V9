#include <cstdlib>
#include <windows.h>
#include <iostream>
using namespace std;

int main(){
    ShellExecute(NULL, "open", "C:\\V9\\vm\\launch_vm.exe", NULL, NULL, SW_SHOWDEFAULT);    
    return 0;
};
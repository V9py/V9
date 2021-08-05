#include <iostream>
#include <cstdlib>
#include "./launcher.h"



int main(){

    V9 VM;

    std::system("python vm_launcher.py launchcmd launchgui");
    /* VM.create_vm_instance(); */
    /* ^ is for just launching the Gui part of V9 */
}
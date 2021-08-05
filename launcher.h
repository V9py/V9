#include <iostream>
#include <cstdlib>
using namespace std;



class V9
{
    public:
        int create_vm_instance(){
            int result = system(".\\vm\\launch_vm.exe");
            return result;
        }
};
#include "l-c-cpp.h"
#include <iostream>

#include "ks_ecolor.h"

int main()
{
    std::cout << KS_FC_BYELLOW;
    std::cout << "\nLearning process is starting" << std::endl;
    std::cout << KS_FC_BBLUE;
    std::cout << "C\t language\t std=c11" << std::endl;
    std::cout << "C++\t language\t std=c++17\n\n" << std::endl;
    std::cout << KS_C_DEFAULT;
    //RunLearnPartsCL();
    RunCppFunctions();

    return 0;
}
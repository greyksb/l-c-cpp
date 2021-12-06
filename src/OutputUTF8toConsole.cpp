#include <iostream>
#include <cstddef>

#include "ks_ecolor.h"

void PrintHelloUTF8()
{
    char str[] = u8"Привет Сережа";
    std::cout << KS_FC_BBLUE;
    std::cout << str << std::endl;
    std::cout << KS_FC_BGREEN;
    std::cout << u8"Hello Сережа (not UTF8)..." << std::endl;
    std::cout << KS_C_DEFAULT;

}
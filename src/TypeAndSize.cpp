#include <iostream>
#include <cstddef>


#include "ks_ecolor.h"

void ShowSomeSizes()
{
    bool v_bool = true;

    int8_t vi8      = INT8_MAX;
    int16_t vi16    = INT16_MAX;
    uint64_t vui64  = UINT64_MAX;

    std::cout << KS_FC_BGREEN;
    std::cout << "size of int8_t is \t" << KS_FC_BCYAN << sizeof(vi8) << "\t MAX = " << (int)vi8 << std::endl;

    std::cout << KS_FC_BGREEN;
    std::cout << "size of int16_t is \t" << KS_FC_BCYAN << sizeof(vi16) << "\t MAX = " << vi16 << std::endl;

    std::cout << KS_FC_BGREEN;
    std::cout << "size of uint64_t is \t" << KS_FC_BCYAN << sizeof(vui64) << "\t MAX = " << vui64 << std::endl;

    std::cout << KS_FC_BGREEN;
    std::cout << "size of bool is \t" << KS_FC_BCYAN << sizeof(v_bool) << "\t MAX = " << v_bool << std::endl;
    
    std::cout << KS_C_DEFAULT;


}
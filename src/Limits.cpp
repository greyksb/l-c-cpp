#include <iostream>
#include <limits>

#include "ks_ecolor.h"

void ShowLimits()
{
    std::cout
        << KS_FC_BGREEN
        << "type\t│ lowest()\t│ min()\t\t│ max()\n\n"
        << "bool\t│ "
        << KS_C_DEFAULT
        << std::numeric_limits<bool>::lowest() << "\t\t│ "
        << std::numeric_limits<bool>::min() << "\t\t│ "
        << std::numeric_limits<bool>::max() << '\n'
        << KS_FC_BGREEN
        << "uchar\t│ "
        << KS_C_DEFAULT
        << +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
        << +std::numeric_limits<unsigned char>::min() << "\t\t│ "
        << +std::numeric_limits<unsigned char>::max() << '\n'
        << KS_FC_BGREEN
        << "int\t│ "
        << KS_C_DEFAULT
        << std::numeric_limits<int>::lowest() << "\t│ "
        << std::numeric_limits<int>::min() << "\t│ "
        << std::numeric_limits<int>::max() << '\n'
        << KS_FC_BGREEN
        << "uint\t│ "
        << KS_C_DEFAULT
        << std::numeric_limits<unsigned int>::lowest() << "\t\t│ "
        << std::numeric_limits<unsigned int>::min() << "\t\t│ "
        << std::numeric_limits<unsigned int>::max() << '\n'
        << KS_FC_BGREEN
        << "float\t│ "
        << KS_C_DEFAULT
        << std::numeric_limits<float>::lowest() << "\t│ "
        << std::numeric_limits<float>::min() << "\t│ "
        << std::numeric_limits<float>::max() << '\n'
        << KS_FC_BGREEN
        << "double\t│ "
        << KS_C_DEFAULT
        << std::numeric_limits<double>::lowest() << "\t│ "
        << std::numeric_limits<double>::min() << "\t│ "
        << std::numeric_limits<double>::max() << '\n';
}

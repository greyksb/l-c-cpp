#include <iostream>

#include <cstdio>

#include "ks_ecolor.h"


void SimplePrintTest()
{
    printf("We'll try to print some string with different colors...\n");
    
    const char* testStr = "this is a wonderful and colorful world!";

    // set bright blue foreground color
    printf("%s", KS_FC_BBLUE);
    // print test string
    printf("%s\n", testStr);
    // try with other colors
    printf("%s%s\n", KS_FC_BGREEN, testStr);
    printf("%s%s\n", KS_FC_BMAGENTA, testStr);
    printf("%s%s\n", KS_FC_BYELLOW, testStr);
    printf("%s%s\n", KS_FC_BRED, testStr);
    // reset to default
    printf("%s", KS_C_DEFAULT);

    printf("%s This is a blinking text ...%s\n", KS_C_BLINK, KS_C_UNSET_BLINK);
    printf("%s This is underline effect%s\n", KS_C_SET_UNDERL, KS_C_UNSET_UNDERL);
    printf("%s This is bolding effect%s\n", KS_C_SET_BOLD, KS_C_DEFAULT);
    printf("%s This is reverse effect%s\n\n\n", KS_C_REVERSE, KS_C_UNSET_REVERSE);

    // try to use iostream
    std::cout << KS_FC_BMAGENTA << "Hello in magenta color" << KS_C_DEFAULT << std::endl;

}
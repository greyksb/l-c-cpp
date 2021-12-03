#include <cstdio>
#include "ks_ecolor.h"
//#include "l-c-cpp.h"


void SimplePrintTest()
{
    printf("We'll try to print some string with different colors...\n");
    
    const char* testStr = "this is colorful world!";

    // set bright blue foreground color
    printf("%s", KS_FC_BBLUE);
    // print test string
    printf("%s\n", testStr);
    // reset to default
    printf("%s", KS_C_DEFAULT);

}
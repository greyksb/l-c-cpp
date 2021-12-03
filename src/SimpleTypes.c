#include "l-c-cpp.h" 
#include <stdio.h>
#include <limits.h>



void TestInt()
{
    // how many bits is in one byte?
    printf("in this system one BYTE equals %d bits\n", CHAR_BIT) ;

    // size
    unsigned int sizeOfType = 0;
    
    sizeOfType = sizeof(short);
    printf("short size is %d\n", sizeOfType);

    sizeOfType = sizeof(int);
    printf("signed int size is %d\n", sizeOfType);

    sizeOfType = sizeof(unsigned);
    printf("unsigned int size is %d\n", sizeOfType);

    long val_L = 0L ;
    printf("long size is %lld\n", sizeof(val_L)) ;

    long long val_LL = 0LL ; 
    printf("long long size is %lld\n", sizeof(val_LL)) ;


}

void MainTestST()
{
    TestInt() ;

}
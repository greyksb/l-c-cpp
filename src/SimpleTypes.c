#include "l-c-cpp.h" 

void TestInt()
{
    // how many bits is in one byte?
    printf("in this system one BYTE equals %d bits\n", CHAR_BIT) ;

    // size
    printf("short size is %i\n", sizeof(short)) ;
    printf("signed int size is %d\n", sizeof(int)) ;
    printf("unsigned size is %u\n", sizeof(unsigned)) ;
    long val_L = 0L ;
    printf("long size is %ld\n", sizeof(val_L)) ;
    long long val_LL = 0LL ; 
    printf("long long size is %lld\n", sizeof(val_LL)) ;


}

void MainTestST()
{
    TestInt() ;

}
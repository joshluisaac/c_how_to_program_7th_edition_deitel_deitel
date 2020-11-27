#include <stdio.h>
#include "config.h"


#define log_address(p) printf("Mem address is -> %p\n", &p);
#define log_ptr_value(p) printf("Value of ptr is -> %p\n", p);


void print_array();
void print_array2(int* scorePtr);


int main()
{
    printf("Hello World!\n");
//    print_array();
    int n[SIZE] = {10,5,4,8,7774,65,90,-78,47,2};
    log_address(n);
    log_address(n[0]);
    print_array2(n);
    return 0;
}

void print_array()
{
    printf("Size of array is %d\n", SIZE);
    int n[SIZE] = {10,5,4,8,7774,65,90,-78,47,2};
    printf("%s%13s\n", "Element", "Value");
    for(int i=0; i<10; i++){
        printf("%7u%13d\n", i, n[i]);
    }

}

void print_array2(int* scorePtr){
    log_ptr_value(scorePtr);
    printf("%s%13s\n", "Element", "Value");
    for(int i=0; i<10; i++){
        printf("%7u%13d\n", i, scorePtr[i]);
    }
}

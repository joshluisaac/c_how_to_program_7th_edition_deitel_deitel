#include <stdio.h>
#include "config.h"

#define log_address(p) printf("Mem address is -> %p\n", &p);
#define log_ptr_value(p) printf("Value of ptr is -> %p\n", p);

void print_array();
void print_array_using_pointer(int* scorePtr);

int main()
{
    printf("Hello World!\n");
//    print_array();
    int n[SIZE] = {10,5,4,8,7774,65,90,-78,47,2};
    log_address(n);
    log_address(n[0]);
    print_array_using_pointer(n);

    char* message = "This is just some iterated message";
    printf("Message length -> %d\n", strlen(message));
    printf("%c\n", message[0]);
    printf("%c\n", *(message + 1));

    printf("%p\n", message);
    printf("%p\n", message + 1);
    printf("%p\n", message + 2);
    printf("%p\n", &message);
    printf("%c", *message);
    printf("%c", *message);

    while (message != NULL && *message != '\0')
    {
        printf("%c", *message);
        message++;

    }

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

void print_array_using_pointer(int* scorePtr){
    log_ptr_value(scorePtr);
    printf("%s%13s\n", "Element", "Value");
    for(int i=0; i<10; i++){
        printf("%7u%13d\n", i, scorePtr[i]);
    }
}

#include "config.h"
#include <stdio.h>
#include <string.h>

#define log_address(p) printf("Mem address is -> %p\n", &p);
#define log_ptr_value(p) printf("Value of ptr is -> %p\n", p);
#define endline printf("\n");

void print_array();
void print_array_using_pointer(int *scorePtr);
void print_message_using_forloop0(char *message);
void print_message_using_forloop1(char *message);
void print_message_using_whileloop(char *message);

void print_message_using_forloop0(char *message)
{
	printf("print_message_using_forloop");
	for (size_t i = 0; i < strlen(message); i++)
	{
		printf("%c", message[i]);
	}
	endline;
}

void print_message_using_forloop1(char *message)
{
	printf("print_message_using_forloop1");
	for (size_t i = 0; i < strlen(message); i++)
	{
		printf("%c", *(message + i)); // move 1 char unit (1 char unit = 1 byte) to
		                              // the right and print the value it points to
	}
	endline;
}

void print_message_using_whileloop(char *message)
{
	printf("print_message_using_whileloop");
	while (message != NULL && *message != '\0')
	{
		printf("%c", *message);
		++message;
	}
	endline;
}

int main()
{
	printf("Hello World!\n");
	int n[SIZE] = {10, 5, 4, 8, 7774, 65, 90, -78, 47, 2};
	log_address(n);
	log_address(n[0]);
	print_array_using_pointer(n);
	char *message = "This is just some iterated message";
	printf("Message length -> %lu\n", strlen(message));
	print_message_using_forloop0(message);
	print_message_using_forloop1(message);
	print_message_using_whileloop(message);
	return 0;
}

void print_array()
{
	printf("Size of array is %d\n", SIZE);
	int n[SIZE] = {10, 5, 4, 8, 7774, 65, 90, -78, 47, 2};
	printf("%s%13s\n", "Element", "Value");
	for (int i = 0; i < 10; i++)
	{
		printf("%7u%13d\n", i, n[i]);
	}
}

void print_array_using_pointer(int *scorePtr)
{
	log_ptr_value(scorePtr);
	printf("%s%13s\n", "Element", "Value");
	for (int i = 0; i < 10; i++)
	{
		printf("%7u%13d\n", i, scorePtr[i]);
	}
}

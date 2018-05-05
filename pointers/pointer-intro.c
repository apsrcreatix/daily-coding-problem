#include "stdio.h"
#include "stdlib.h"
#include "string.h"
// pointers in c

// introduction to the pointers
void introduction(){
    int variable1 = 100;
    int *pointer1 = &variable1;

    // can also be written as int* variable_name
    // assigning the value of address of the variable
    // we are storing address of the variable in the pointer
    // on printing pointer1 the output will be address of the variable

    printf("\n Value in variable = %d",variable1);
    printf("\n Value to pointer is pointing = %u",*pointer1);
    printf("\n Address of pointer = %d",&pointer1);
    printf("\n Address of varriable in the pointer = %d",pointer1);
    printf("\n Address of varriable = %d",&variable1);
    printf("\n");
}

// increament and decrement operations on the pointers value and address it is pointing to
void arithmetic(){
int variable;
int* pointer;
variable = 100;
pointer = &variable;
// value of the pointer is pointing to
printf(" *pointer :%u\n", *pointer);
// value of the address 
printf("++*pointer : %u\n", ++*pointer);
// value of successive value to the current value pointer is pointing to
printf("*(++pointer) :%u\n", *(++pointer));
// now pointer is pointing to the successive value of the previous value
printf(" *pointer :%u\n", *pointer);
// increamenting the addess of the pointer again
printf("++pointer :%u\n", ++pointer);
// showing the random value that is stored in the pointer's new address
printf(" *pointer :%u\n", *pointer);
}

// types of pointers
void typeOfPointers(){
    int variable1;
    int variable2;
    scanf("Enter the variable 1: %d",&variable1);
    scanf("Enter the variable 2: %d",&variable2);
    char* pointer1 = (char*)&variable1;
    char* pointer2 = (char*)&variable2;
    
     
}

int main(){
// introduction();
// arithmetic();

return 0;
}
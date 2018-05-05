
// External Libraries
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//c99 library for boolean operations
// it defines a bool type as true = 1 and fasle = 0
#include "stdbool.h" 

// Let us manually define the alternative to predefined bool types
typedef int Bool ; // can use Bool variableName ; and
//  then variableName = True or False; for making your own bool type
#define True 1
#define False 0

// EXIT_SUCCESS AND EXIT_FAILURE
void exitStatus(){ 
    // predefined values of exit status 
    printf("\nEXIT_SUCCESS = %d \nEXIT_FAILURE = %d\n", EXIT_SUCCESS, EXIT_FAILURE);
}

// boolean contants 
void booleanContants(){
    printf("From stdbool : \ntrue : %d \nfalse : %d\n",true,false);
    printf("From Bool (User Defined) : \nTrue : %d \nFalse : %d\n",True,False);
}

void stringFunctionTest(){
char A[]="Aditya";
// strlen returns long unsigned integer i.e lu
char B[strlen(A)+1];
// strcpy(destination,data);
strcpy(B,A);
printf("Value in B : %s\n",B);
printf("Length of A : %lu\nSize of A: %lu\n",strlen(A),sizeof(A));
printf("Length of B : %lu\nSize of B: %lu\n",strlen(B),sizeof(B));
printf("Are A and B finally indentical (0 for yes)? : %d\n",strcmp(A,B));

}

// boolean operator
void booleanOperation(){
    int x=1;
    int y=0;
    printf("x&&y : %d\n",x&&y);
    printf("x||y : %d\n",x||y);
    printf("!x and !y respectively : %d %d\n",!x,!y);
}

// bit level operations 
void bitLevelOperations(){
    int p=5;
    int q=4;
    printf("p&q : %d\n",p&q);
    printf("p|q : %d\n",p|q);
    printf("p^q : %d\n",p^q);
    //>> implies divide it by 2
    //<< implies multiply by 2
    printf("p>>1 : %d\n",(p>>1));
    printf("q<<1 : %d\n",(q<<1));
}

// void in the argument space in main shows that it does not requires any futher variables 
int main(void){
    
    // function to see example exit status values 
    // exitStatus();

    // function to see example of boolean values
    // booleanContants();

    // string function test
    // stringFunctionTest();

    //to perform booolean operation on the boolean values
    // booleanOperation();

    // to perform basic bit level operations
    // bitLevelOperations();

    return EXIT_SUCCESS;
}

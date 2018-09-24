#include <stdio.h>
#include <string.h>
//processpr directives
#ifndef SIZE_OF_STRING
#define SIZE_OF_STRING 1000
#endif

//checking length of string
int strlenCustom(char *stringSend){
  int x=0;
  while (*stringSend++)
    x++;

return x;
}
//copying the string
void stringcopy(char *string1,char *string2){
  while (*string2)
  *string1++=*string2++;

}
// trimming the string
void trimming(char *stringTaken){
char *source = stringTaken;
char *destination = source;
  while (*source)
  {
    if (*source!=' ')
    *destination++=*source;

  *source++;
  }
}
//reversing of string
char *reversing(char *stringObtained){int i;

  for(i=strlenCustom(stringObtained);i>=0;i--)
printf("%c", *(stringObtained+i));
}

//main function
int main() {
  char str[SIZE_OF_STRING];
  printf("Give the input : " );
  gets(str);
printf("Got : %s\n",str);
//checking string length
printf("Calulation of length : %d\n", strlenCustom(str));
//string copy
char string3[strlenCustom(str)-1];
stringcopy(string3,str);
printf("String 3 after copy : %s\n",string3);
//trimming the string
trimming(string3);
printf("Trimming : %s\n",string3);
//reversing

printf("reversing : %s\n",reversing(string3));
  return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char string[MAX];
    char string1[MAX];
fgets(string,1000,stdin);
//scanf("%s\n",string);
int size=strlen(string)+1;
char ch;

int i=0,j;int count=0;
  for(ch='A';ch<='z';ch++){
    for(j=0;j<size;j++){
      if(string[j]==ch)
      {
        string1[i]=ch;
        count++;
        i++;
        break;
      }
    }
  }
  printf("%s\n",string1);
  for(j=0;j<count;j++){
    if(string1[j]>='A'&&string1[j]<='z')
    {
      printf("%c", string1[j]);
    }
  }
    return 0;
}

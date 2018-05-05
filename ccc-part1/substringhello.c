#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
char string[100];
scanf("%s",string);
int i;
char temp;
int j;
for(i=0;i<strlen(string);i++){
for(j=i+1;j<strlen(string);j++){
  if(string[i]==string[j])
    string[i]='0';
}
}
int count=0;
char string1[100];
char ch='0';
printf("%s\n", string);

  for(j=0;j<strlen(string);j++){
    if(string[j]!='0')
    {printf("ehh!");
      string1[count]=string[j];
      count++;
      break;
    }

}
// printf("%s\n",string1);
for(i=0;i<count;i++){
  if(string1[i]=='h'){i++;
    if(string1[i]=='e'){i++;
      if(string1[i]=='l'){i++;
        if(string1[i]=='o'){
          printf("%s", "yes");
        }else printf("no");
      }else printf("no");
    }else printf("no");
  }
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

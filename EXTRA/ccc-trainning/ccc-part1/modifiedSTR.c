#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char string1[1000];
  char string2[1000];
  scanf("%s",string1);
  scanf("%s",string2);
  int size1=strlen(string1),size2=strlen(string2);
int i,j,count=0,temp=3;
double sum=0.0;
if(strcmp(string1,string2)!=0){
  if(size1>size2&&size2>1){
    for ( i = 0; i <size1-size2; i++) {
    temp=i;
  for ( j = 0; j<size2; j++) {
    if(string1[temp]==string2[j]){
      count++;
    }
    temp++;

  }
  if(count==size2){
    sum=sum+count;
  }else{
    count=0;
  }
}
sum=sum/size2;
i=(int)sum;if(i>sum)i--;
  printf("%d\n",i);
}else if(size1<size2&&size1>1){
  for ( i = 0; i <size2-size1; i++) {
    temp=i;
  for ( j = 0; j<size1; j++) {
    if(string2[temp]==string1[j]){
      count++;
    }
    temp++;

  }
  if(count==size1){
    sum=sum+count;
  }else{
    count=0;
  }
  }
  sum=sum/size1;
  i=(int)sum;if(i>sum)i--;
    printf("%d\n",i);
}else if(size1==1){
  for(i=0;i<size2;i++){
    if(string2[i]==string1[0])
    count++;
  }
  printf("%d\n",count);
}else if(size2==1){
  for(i=0;i<size1;i++){
    if(string1[i]==string2[0])
    count++;
  }
  printf("%d\n",count);

}
}else{
  printf("1");
}
  // count=count/size2;
  printf("%d\n",count );
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10000

int main() {
//main code
long long int number,temp,i;
scanf("%lld",&number );
long long int heights[number],index;

for ( i = 0; i < number; i++) {
scanf("%lld",&heights[i]);
}
long long int smallest=heights[0];
for ( i = 0; i < number; i++) {
  if(smallest>heights[i]){
smallest=heights[i];
index=i;
  }
}
temp=heights[0];
heights[0]=heights[index];
heights[index]=temp;
for ( i = 0; i < number; i++) {
  /* code */
printf("%lld ",heights[i]);
}

  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10000
void swap(long *x, long *y){
long  temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main() {
//main code
long n,k,i,j;
scanf("%ld",&n);
    long array[n],index,smallest;
scanf("%ld",&array[i]);
for ( i = 0; i < n; i++) {
scanf("%ld",&array[i]);
}
scanf("%ld",&k );
for ( i = 0; i < k; i++) {
  smallest=array[i];
for (j = i; j < n; j++) {
    /* code */
if(smallest>array[j]){
smallest=array[j];
index=j;
  }
}
swap(&array[i],&array[index]);
}

for ( i = 0; i < n; i++) {
  printf("%ld ",array[i] );
}
  return 0;
}

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
  long double product=1;
  long long i,number;
  scanf("%lld",&number );
  long double array[number];
  for ( i = 0; i < number; i++) {
scanf("%Lf",&array[i]);
product=product*array[i];
  }
for (i = 0; i < number; i++) {
array[i]=array[i]/product;
printf("%Lf ",array[i]);
}
return 0;
}

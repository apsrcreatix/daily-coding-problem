#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long int n;
  int k;
  scanf("%ld",&n);
  scanf("%d",&k);
  int array[n];
  int sum=0;
  for (size_t i =  0; i < n; i++ ) {
    scanf("%d",&array[i]);
    sum=sum+array[i];
  }
sum=sum/k-1;
printf("%d",sum);
  return 0;
}

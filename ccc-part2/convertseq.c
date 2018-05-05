#include "stdio.h"
#include "stdlib.h"
#ifndef MAX
#define MAX 1000
#endif

int main(){
  long unsigned int n,m;
  scanf("%lu",&n);
  long unsigned int a[n];
  for (size_t i = 0; i < n; i++) {
    scanf("%lu",&a[i]);
  }
  scanf("%lu",&m);
  long unsigned int b[m];
  for (size_t i = 0; i < m; i++) {
  scanf("%lu",&b[i]);
  }
long unsigned int counter=0,j;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      if(a[i]==b[j]){
        counter++;
        break;
      }
    }
  }
  long unsigned int sum = sizeof(b)/sizeof(b[0])-counter;
printf("%lu",sum);
  return 0;
}

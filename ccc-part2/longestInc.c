//longest increasing sub sequences
//using two arrays
#include "stdio.h"
#include "stdlib.h"
int main(){
  long int length;
  scanf("%ld",&length);
  long int array[length];
  for (size_t i = 0; i < length; i++) {
    scanf("%ld",&array[i]);
  }
  //array for indexing Initializing with 1
  long int indexing[length];
  for (size_t i = 0; i < length; i++) {
    indexing[i]=1;
  }
//checking how many elements are in increasing order
  for (size_t i = 0; i < length; i++) {
    for (size_t j = 0; j < i; j++) {
      if(array[i]>array[j]&&indexing[i]<indexing[j]+1){
        indexing[i]++;
      }
    }
  }
  //checking the main condition using indexing array
  //print the values
  long int max;
max=indexing[0];
for (size_t i = 0; i < length; i++) {
  printf("\n" );
    if(max<indexing[i]){
      printf("%ld ",indexing[i]);

      printf("%ld \n",array[i]);
      max=indexing[i];
    }
  }


  return 0;
}

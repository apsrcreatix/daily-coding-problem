#include<stdio.h>
#include<stdlib.h>

// x to the power y as a custom function
long int powerCustom(long int x,unsigned long int y){
  long int result=1;
  for (size_t i = 0; i <y/2; i++) {
    result=result*x;
  }
  if(y%2==0){
    return result*result;
  }if(y%2!=0){
    return result*result*x;
  }if(y==0){
    return 1;
  }
}

//inversion count
int getInvCount(int arr[], int n)
{
  int inv_count = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i+1; j < n; j++)
      if (arr[i] > arr[j])
        inv_count++;

  return inv_count;
}




//main functions
int main(){
  printf("\nhello world\n" );
  printf("%ld",powerCustom(2,11));
//inversion
int arr[] = {1, 2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
printf(" Number of inversions are %d \n", getInvCount(arr, n));
return 0;
}

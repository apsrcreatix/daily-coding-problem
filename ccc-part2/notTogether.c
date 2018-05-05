#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long distance(long long int x1,long long int y1,long long int x2,long long int y2){
return (long long int)abs(sqrt((double)(pow(x1-x2,2)+pow(y1-y2,2))));
}
int main(){
long long int number;

scanf("%lld",&number);
long long int array[number][2];
for(size_t i;i<number;i++){
  for (size_t j = 0; j < 2; j++) {
    scanf("%lld",&array[i][j]);
  }
}
long long int maxDistance = distance(array[0][0],array[0][1],array[1][0],array[1][1]);
for (size_t i = 1; i < number-1; i++) {
  if(maxDistance<distance(array[i][0],array[i][1],array[i+1][0],array[i+1][1]))
  maxDistance=distance(array[i][0],array[i][1],array[i+1][0],array[i+1][1]);
}
printf("%lld",maxDistance);
return 0;
}

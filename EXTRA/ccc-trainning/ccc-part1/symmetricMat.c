#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
  int i,j,size;
  scanf("%d",&size);
  int array[size][size];
for(i=0;i<size;i++){
  for ( j= 0; i < size; j++) {

    scanf("%d", &array[i][j]);
  }
}
bool condition;
for(i=0;i<size;i++){
  for ( j= 0; i < size; j++) {

  if (array[i][j]==array[j][i]) {
    condition=true;
  }else
  condition=false;
  }
}
printf("%s",condition?"Yes":"No" );

  return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int size,j;

 scanf("%d",&size);
 int i,array[size];

 for(i=0;i<size;i++){
 scanf("%d",&array[i]);
 }
 int temp,value,res[size];
  for(i=0;i<size;i++){
    res[i]=0;
  }
 for(i=0;i<size;i++){
    for(j=size;j>i;j--){

    if(array[i]==array[j]&&(j-i)!=0){
        res[i]=abs(j-i);
      res[j]=abs(j-i);
    }


    }
}
for (int i = 0; i < size; i++) {
 if(res[i]==0)
      {res[i]=-1;}
}

 for(i=0;i<size;i++){
     printf("%d ",res[i]);
 }
   return 0;
}

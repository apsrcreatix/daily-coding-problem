#include<stdio.h>
#define COL 3
int main(){
  int testCase;
  scanf("%d",&testCase);
  int date[testCase][COL];
  int i,j;
  for(i=0;i<testCase;i++){
    for(j=0;j<COL;j++){
      scanf("%d",&date[i][j]);;
    }
  }
  int temp[1][3]={0};

  for(j=0;j<testCase;j++){
    for (i=0;i<testCase-i-1;i++){
      if(date[i][2]>date[i+1][2]||date[i][2]==date[i+1][2]){
      if(date[i][1]>date[i+1][1]){
        if(date[i][0]>date[i+1][0]){
            {//temp=a;
        printf("hello\n" );
        temp[0][0]=date[i][0];
        temp[0][1]=date[i][1];
        temp[0][2]=date[i][2];
        //a=b;
        date[i][0]=date[i+1][0];
        date[i][1]=date[i+1][1];
        date[i][2]=date[i+1][2];
        //b=temp;
        date[i+1][0]=temp[i][0];
        date[i+1][1]=temp[i][1];
        date[i+1][2]=temp[i][2];

  }
}
}else if(date[i][1]==date[i+1][1]){
  if(date[i][0]>=date[i+1][0]){
      {//temp=a;
  printf("hello\n" );
  temp[0][0]=date[i][0];
  temp[0][1]=date[i][1];
  temp[0][2]=date[i][2];
  //a=b;
  date[i][0]=date[i+1][0];
  date[i][1]=date[i+1][1];
  date[i][2]=date[i+1][2];
  //b=temp;
  date[i+1][0]=temp[i][0];
  date[i+1][1]=temp[i][1];
  date[i+1][2]=temp[i][2];
  }
}
}
}
}
}
  for(i=0;i<testCase;i++)
{
  for(j=0;j<COL;j++)
  printf("%d ",date[i][j]);
  printf("\n");

}  return 0;
}

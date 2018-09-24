#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
long number,i,j,k,m,n;
scanf("%ld",&number);
long input[number];
long mapper[number][3];
long smallest[2];
scanf("%ld",&input[0]);
//storing smallest
smallest[0]=input[0];
smallest[1]=0;

for (i = 1; i < number; i++) {
scanf("%ld",&input[i]);
if(smallest[0]>input[i]){
  smallest[0]=input[i];
  smallest[1]=i;
}

if(i==2){
  for ( k= 2; k < number; k++) {
for (m=2,n=0;m>=0,n<3;m--,n++) {
    mapper[k][m]=input[n];
  }
}
}

if(i>2){
  for(m=0;m<3;m++){
    if(smallest[0]<input[i]){
      mapper[i][2]=mapper[i][1];
      mapper[i][1]=mapper[i][0];
      mapper[i][0]=input[i];
      printf("\n%ld\n",mapper[i][0]);
      printf("%ld\n",mapper[i][1]);
      printf("%ld\n",mapper[i][2]);
      break;
    }
  }
}
}
printf("-1\n");
printf("-1");
for(k=2;k<number;k++){
  printf("\n");
for(m=0;m<3;m++){
printf("%ld ",mapper[k][m]);
  }
}
return 0;
}

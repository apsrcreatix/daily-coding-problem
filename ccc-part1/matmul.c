#include <stdio.h>
#include <stdlib.h>
int main(){
    int row1,row2,col1,col2,i,j,k;

    scanf("%d %d",&row1,&col1);

    int mat1[row1][col1];

    for(i=0;i<row1;i++){
    for(j=0;j<col1;j++){
        scanf("%d",&mat1[i][j]);
        }
    }

    scanf("%d %d",&row2,&col2);

    int mat2[row2][col2];

    for(i=0;i<row2;i++){
    for(j=0;j<col2;j++){
        scanf("%d",&mat2[i][j]);
        }
    }


    int res[row1][col2];
      for(i=0;i<row2;i++){
    for(j=0;j<col2;j++){
        res[i][j]=0;
        }
      }

    for(i=0;i<row1;i++){
    for(j=0;j<col2;j++){
        for(k=0;k<row1;k++)
        res[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
         for(i=0;i<row2;i++){
    for(j=0;j<col2;j++){
        printf("%d ",res[i][j]);
        }
        printf("\n");
         }


        return 0;

}

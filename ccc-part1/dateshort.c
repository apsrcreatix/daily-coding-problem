#include <stdio.h>
#define MAX 100
struct DATE{
  int date;
  int month;
  int year;
}a[MAX],temp;
int condition(struct DATE *x,struct DATE *y){
  if(x->year>=y->year){
    if(x->month>y->month){
      return 1;
    }else if(x->month==y->month){
      if(x->date>=y->date)
      return 1;
    }
  }
return 0;
}
void swap(struct DATE *X,struct DATE *Y){
  struct DATE temp;
  temp=*X;
  *X=*Y;
  *Y=temp;
}

int main(){
  int size;
  int i,j;
  scanf("%d",&size);
  for(i=0;i<size;i++){
    scanf("%d %d %d",&a[i].date,&a[i].month,&a[i].year);
  }

  for (i = 0; i < size-1; i++)
      for (j = 0; j < size-i-1; j++){
        if(condition(&a[j],&a[j+1])){
          swap(&a[j],&a[j+1]);
        }
      }
      for(i=0;i<size;i++){
        printf("%d %d %d\n",a[i].date,a[i].month,a[i].year);
      }
  return 0;
}

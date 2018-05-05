#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
#define SIZE sizeof pers / sizeof pers*

struct person{
  long int id;
  float height;
  char name[30];
  double balance;
  long int phone_number;
}pers[100];

void fillup(struct person *mem,int i){
  printf("\nData of person %d\n",i+1);
  printf("ID\n");
  scanf("%ld",&mem->id);
    printf("Height\n");
  scanf("%f",&mem->height);
    printf("Name\n");
  scanf("%s",mem->name);
    printf("Balance($)\n");
  scanf("%lf",&mem->balance);
    printf("Contact\n");
  scanf("%ld",&mem->phone_number);
}
void display(struct person mem,int i) {
  printf("\n[%d].Data of %s\n",i+1,mem.name);
  printf("ID : %ld\n",mem.id);

    printf("Height : %f\n",mem.height);

    printf("Name :  %s\n",mem.name);

    printf("Balance : $%lf\n",mem.balance);

    printf("Contact : %ld\n",mem.phone_number);

}
int main(){
  int numOfPeople;
  printf("Number of person :\n" );
  scanf("%d",&numOfPeople);
  int i,j;
  for(i=0;i<numOfPeople;i++){
  fillup(&pers[i],i);
  display(pers[i],i);
  }
printf("\nCapacity left : %lu\n",sizeof(pers) / sizeof(pers[0])-i);
  return 0;
}

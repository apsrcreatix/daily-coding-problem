//goo.gl/y$Quxg
// goo.gl/5fCf2r
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
  int data;
}*next,*start=NULL;

struct node *create_ll(struct node *start){
  struct node *new_node,*ptr;
  int num;
  printf("Enter -1 to the end :\n");
  printf("Enter the data\n");

scanf("%d",&num );

while(num!=-1){

  new_node = (struct node*)malloc(sizeof(struct node));
  printf("Size of new_node %lu\n",sizeof(new_node));
  new_node->data = num;

  if(start==NULL){
    new_node->next=NULL;
    start=new_node;
  }
  else{
    ptr=start;
    while (ptr->next!=NULL) {
      ptr->next = new_node;
      new_node->next = NULL;
    }

    printf("\nEnter the data :");
    scanf("%d\n",&num);
  }
  return start;
}
}

int main(){
printf("Accessing LL:\n");
start=create_ll(start);
start=display(start);
  return 0;
}

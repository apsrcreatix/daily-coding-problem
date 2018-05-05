#include <stdio.h>
#include <malloc.h>
//created the structure of the tree
//with data and pointers for position
struct node {
  int data;
  struct node *left;
  struct node *right;
};
//creating another pointer tree for operation (ROOT)
struct node *tree;
//creating initially root as NULL
void create_tree(struct node *tree){
  tree=NULL;
}
//Inserting elements in the tree using passed value and tree (ROOT)
struct node *insertElement(struct node *tree, int value){
  struct node *ptr,*nodeptr,*parentptr;
//creation of blocks using malloc (memory allocation)
  ptr=(struct node*)malloc(sizeof(struct node));
//making data and position pointer available
  ptr->data=value;
  ptr->left=NULL;
  ptr->right=NULL;
  //if tree is NULL then making treee as new pointer
  if(tree==NULL){
    tree=ptr;
    tree->left=NULL;
    tree->right=NULL;
  }else
  {
    //otherwise making a parent node and traverse using teee node
    parentptr=NULL;
    nodeptr=tree;
    while(nodeptr!=NULL){
      parentptr=nodeptr;
//if the value entered is less traverse left side else right
      if(value<nodeptr->data)
      nodeptr=nodeptr->left;
      else //else insert at right
      nodeptr=nodeptr->right;
      }
      //making parent based on value
      if(value<parentptr->data)
      parentptr->left=ptr;
      else
      parentptr->right=ptr;
  }
  return tree;
}
//preorderTraversal
void preorderTraversal(struct node *tree){
  if(tree!=NULL){
    printf("%d\t",tree->data);
    preorderTraversal(tree->left);
    preorderTraversal(tree->right);
  }
}
//
void postorderTraversal(struct node *tree){
  if(tree!=NULL){
    postorderTraversal(tree->left);
    postorderTraversal(tree->right);
    printf("%d\t",tree->data);
  }
}
void inorderTraversal(struct node *tree){
  if(tree!=NULL){
    inorderTraversal(tree->left);
    printf("%d\t",tree->data);
    inorderTraversal(tree->right);

  }
}

struct node *findSmallestElement(struct node *tree){
  if((tree==NULL)||(tree->left==NULL)) return tree;
  else return findSmallestElement(tree->left);
}

struct node *findLargestElement(struct node *tree){
  if((tree==NULL)||(tree->right==NULL)) return tree;
  else return findLargestElement(tree->right);
}


struct node *deleteElement(struct node *tree,int val){
  struct node *cur,*parent,*suc,*psuc,*ptr;
  if(tree->left==NULL){
    printf("\nThe tree is empty");
    return(tree);
  }
  parent = tree;
  cur=tree->left;
  while(cur!=NULL&& val!=cur->data){
    parent=cur;
    cur=(val<cur->data)?cur->left:cur->right;
  }
  if(cur->left==NULL)
  ptr=cur->right;
  else if(cur->right==NULL)
  ptr = cur->left;
  else{
    //find the in-order successor and its parent
    psuc=cur;
    cur=cur->left;
    while(suc->left!=NULL){
      psuc=suc;
      suc=suc->left;
    }
    if(cur==psuc){
      //situation 1
      suc->left=cur->right;
    }
  else {
    //situation 2
    suc->left=cur->left;
    psuc->left=suc->right;
    suc->right=cur->right;
  }
  ptr=suc;
  }
  //Attach ptr to the parennt node
if(parent->left=ptr)
parent->left=ptr;
else
parent->right=ptr;

free(cur);
return tree;

}
int totalNodes(struct node *tree){
  if(tree==NULL)
  return 0;

  return(totalNodes(tree->left)+totalNodes(tree->right)+1);
}
int totalExternalNodes(struct node *tree){
  if(tree==NULL)
    return 0;
    else if((tree->left==NULL)&&(tree->right==NULL))
    return 1;
    else
    return (totalExternalNodes(tree->left)+totalExternalNodes(tree->right));
}
int totalInternalNode(struct node *tree){
  if((tree==NULL)||((tree->left==NULL)&&(tree->right==NULL)))
  return 0;
  else return (totalInternalNode(tree->left)+totalInternalNode(tree->right)+1);
}
int Height(struct node *tree){
  int leftheight,rightheight;
  if(tree==NULL||(tree->left==0&&tree->right== NULL)) return 0;
  else {
    leftheight=Height(tree->left);
    rightheight = Height(tree->right);
    if(leftheight>rightheight) return (leftheight + 1);
    else return (rightheight+1);
  }
}
  struct node *mirrorImage(struct node *tree){
    struct node *ptr;
    if(tree!=NULL){
      mirrorImage(tree->left);
      mirrorImage(tree->right);
      ptr=tree->left;
      ptr->left=ptr->right;
      tree->right=ptr;
    }
  }

  struct node *deleteTree(struct node *tree){
    if(tree!=NULL){
      deleteTree(tree->left);
      deleteTree(tree->right);
      free(tree);
    }
  }

int main(){
  int i,option,value;
  struct node *ptr;
  create_tree(tree);
  do{
    printf("\n\t\t\t\t||||||||||||Main Menu|||||||||||||||\n");
    printf("\n\t\t\t\t|||    1.Insert Element.         |||\n");
    printf("\n\t\t\t\t|||    2.preorderTraversal.      |||\n");
    printf("\n\t\t\t\t|||    3.in-order Traversal.     |||\n");
    printf("\n\t\t\t\t|||    4.postorderTraversal.     |||\n");
    printf("\n\t\t\t\t|||    5.Find the smallest.      |||\n");
    printf("\n\t\t\t\t|||    6.Find the largest.       |||\n");
    printf("\n\t\t\t\t|||    7.Delete an element.      |||\n");
    printf("\n\t\t\t\t|||    8.Total number of nodes.  |||\n");
    printf("\n\t\t\t\t|||    9.Total number of         |||\n");
    printf("\n\t\t\t\t|||      external node.          |||\n");
    printf("\n\t\t\t\t|||    10.Total number of        |||\n");
    printf("\n\t\t\t\t|||      internal node.          |||\n");
    printf("\n\t\t\t\t|||    11.Height of tree         |||\n");
    printf("\n\t\t\t\t|||    12.Mirror image of tree   |||\n");
    printf("\n\t\t\t\t|||    13.Delete the tree        |||\n");
    printf("\n\t\t\t\t|||    14.Exit                   |||\n");
    printf("\n\t\t\t\t|||||||||||||||END||||||||||||||||||\n");
    printf("\n\t\t\t\tEnter here : \n");
    scanf("%d",&option);
    switch (option) {
      case 1:printf("Enter value of new node : "); scanf("%d",&value); tree=insertElement(tree,value); break;
      case 2:printf("Elements of the tree are : \n"); preorderTraversal(tree); break;
      case 3:printf("Elements of the tree are : \n"); inorderTraversal(tree); break;
      case 4:printf("Elements of the tree are : \n"); postorderTraversal(tree); break;
      case 5:ptr=findSmallestElement(tree); printf("Smallest : %d",ptr->data);break;
      case 6:ptr=findLargestElement(tree); printf("Largest : %d",ptr->data);break;
      case 7:printf("Enter the element to be deleted : " ); scanf("%d\n",&value); tree=deleteElement(tree,value);break;
      case 8:printf("\n Total no. of node = %d",totalNodes(tree));break;
      case 9:printf("\n Total no. of external nodes = %d",totalExternalNodes(tree));break;
      case 10:printf("\nTotal no of internal nodes = %d",totalInternalNode(tree));break;
      case 11:printf("\nHeight of the tree = %d",Height(tree));break;
      case 12:tree=mirrorImage(tree);break;
      case 13:tree=deleteTree(tree);break;
    }
  }while(option!=14);

  return 0;
}

#include "stdio.h"
#include "stdlib.h"

int getNextOdd(){
  static int counter = 0;
  counter++;
  return 2*counter-1;

}
int main(){
  printf("%d\n",getNextOdd());
  printf("%d\n",getNextOdd());
  for (size_t i = 0; i < 5; i++) {
    printf("%d\n",getNextOdd());
  }
  return 0;
}

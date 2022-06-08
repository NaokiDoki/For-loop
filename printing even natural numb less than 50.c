#include<stdio.h>

int main(){
  int a;
  printf("First 50 even natural numbers are:\n");
  for(a = 1; a<= 50; a++){
    if (a % 2 == 0){	
	printf("%d\t", a);
  }
	}
  return 0;
}

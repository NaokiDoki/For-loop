#include<stdio.h>

int main(){
  int n,a, count = 0;
  printf("Enter any integer number: ");
  scanf("%d", &n);
  for(a = 1; a<= n; a++){
    if (n % a == 0){
	count ++;
	}
	}
	if(count == 2){
		printf("\nIt is prime");
	}
	else{
		printf("\nNot prime");
	}
	return 0;
}

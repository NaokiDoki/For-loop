#include<stdio.h>

int main(){
	int fact = 1,a ,n;
	printf("Enter the number for which you want to find factorial of: ");
	scanf("%d", &n);
	for(a = 1;a <=n; a++){
		fact = fact * a;
	}
	printf("\nFactorial is: %d", fact);
	return 0;
}

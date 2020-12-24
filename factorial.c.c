#include<stdio.h>

/*This is 1st method of taking Factorial.*/

main(){
	
	int i,n,factorial=1;
	char bear;






	printf("Enter a number.\n");
	scanf("%d", &n);
	
	
	for(i=1;i<n+1;i++){
		
		
		factorial = i*factorial; 
		
		
	}
	
	
	printf("factorial of %d is %d.\n" ,n,factorial);
	factorial=1;
	
	return 0;
	
}

#include<stdio.h>
#include<conio.h>
/*This is 2nd method of finding factorial.*/

main(){
	
		
	char bear='a';
	int i,n,factorial=1;
	

	printf("Enter a number.\n");
	scanf("%d", &n);
	i=1;
	
	
	while(i<n+1){
		
		
		factorial= i*factorial; 
		
		i++;
		
	};
	
	
	printf("factorial of %d is %d.\n" ,n,factorial);
	printf("Do you want to recalculate? if you want to press e or E. \n");
	
	

	return 0;
	
	
	
	
}

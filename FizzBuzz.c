#include<stdio.h>

//This is implementation of FizzBuzz algorithm.
main(){
	
	int i;
	
int a[11]={15,30,45,300,60,75,90,105,120,135,150};	
	
	
	for(i=0;i<12;i++){
		
		
		if((a[i]%15)==0){
			
			
			
			printf("%d is FizzBuzz.\n", a[i]);
			
			
			
		}else if((a[i]%5)==0){
			
			
			
			
			printf("%d is Buzz.\n", a[i]);
			
			
			
			
			
		}else if((a[i]%3)==0){
			
			
			printf("%d is Fizz.\n", a[i]);
			
			
			
		}else{
			
			
			printf("%d isn't Fizz,Buzz or FizzBuzz.\n", a[i]);
			
		}
		
		
	}
	


return 0;


}





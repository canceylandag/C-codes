#include<stdio.h>
#include<stdlib.h>


// Example about finding Prime numbers.

 void prime(int number){

	int nnn,i,sayac=0;

	nnn = number;
	
	for(i=2;i<=nnn;i++){
		
		if((nnn%i)==0){
			
			
			sayac++;
			
			
		}
		
		if((i==nnn)&&(i%i)==0){ 
		
		sayac--;
		
		}
		
		
		
		
	}
	
	if((sayac)==0){
		
		printf("it is prime.\n");
			
	    
	   }else{
		
		printf("this isn't prime.\n");
		
		
	}

	}
	int main(){
		
		int a,b;
		
		a=89;
		b=97;
		
		prime(a);
		prime(b);
		
		return 0;
		
	}

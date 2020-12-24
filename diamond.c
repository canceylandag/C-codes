#include<stdio.h>
#include<math.h>

//This code draws diamond shape on the screen.

int main(){
	
	int a,b,c;
	
	for(a=1;a<20;a++){
		
		
		for(b=1;b<20;b++){
			
			c=fabs(a-10)+fabs(b-10);
			
			if(c==10){
				
				printf("*");
				
			}else{ printf(" ");
			}
			
			
		}
		
		printf("\n");
	}
	
	
	
	
	
}

#include<stdio.h>

//Progam gives the sum of numbers from a to b that can be divided without remainders. 

int moon(int a,int b,int x){
int i,j;
int z=0;
int sum=0;
	int depo[50];
	for(i=a;i<b+1;i++){

		if(i%x==0){
		
		depo[z]=i;
		z++;
		
		}

	}
for(j=0;j<z;j++){

		
		
		sum=sum+depo[j];
		
		
	}
	
	return sum;

}

int main(){

int ar1,ar2,xxx,sonn;
	printf("Enter the a and b and div.\n");
	scanf("%d %d %d",&ar1,&ar2,&xxx);
	sonn=moon(ar1,ar2,xxx);
	printf("Toplam:%d\n",sonn);




}
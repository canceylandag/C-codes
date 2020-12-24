#include<stdio.h>

//Gauss elimination of a matrix. 

int mm=0;
void gauss(float x[3][4]);
void gauss2(float y[3][4]);
void yaz(float t[3][4]);

int main(){
	
	
	;
float A[3][4]={{2,3,3,7},{-1,2,3,8},{1,-1,2,-1}};
	yaz(A);
	printf("\n");
	gauss(A);
	gauss2(A);
	yaz(A);
	
	


}

void yaz(float t[3][4]){
	
		for(int i=0;i<3;i++){
		
			for(int j=0;j<4;j++){
			
				printf("%f\t",t[i][j]);
			
			
		    }
		
			printf("\n");
		
		}
		
		
	
	
	}

void gauss(float x[3][4]){
int n=3;
		for(int k=0;k<(n);k++){
		
			for(int i=(k+1);i<n;i++){
			
				float c=x[i][k]/x[k][k];
				for(int j=0;j<=(n);j++){
				
					x[i][j]=(x[i][j])-(c*(x[k][j]));
					//y[i]=(y[i])-(c*(y[k]));
				
				
				}
			
			
			}
		
		
		}
		
	

	}
	
	void gauss2(float y[3][4]){
int n=3;
		for(int j=0;j<(n);j++){
		
			for(int i=(j+1);i<n;i++){
			
				if(i==j){
					continue;
					
					
				}
				else{
					
					float c=((-1)*(y[i][j])/(y[j][j]));
					y[i][j]=(c*y[i][j])+y[i][j];
					
				}
				
				
				}
			
			
			}
		
		
		}
		
	

	
	
	
	
	
	
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Dosyadan isim okuyup yazdırma.
struct soldier{
	
	char  name[100];
	char attack[100];
	int attack_power;
	int stamina;
	int id;
	struct soldier *next;
};

int count(struct soldier *head){ 
int counter = 0;
 while(head != NULL) { // head->next!=NULL koşulu olsaydı son düğüm sayılmazdı
	counter++; 
	head = head -> next; 
	} 
	return counter; } 

int main(){
	typedef struct soldier ann;
	
	FILE *fp1;
	fp1=fopen("data.txt","r");
	
	ann *liste1=(ann*)malloc(sizeof(ann));
	ann *iter1=liste1;
	
	
	while(!feof(fp1)){
		
		char a[50],b[50];
		int st,at,idd;
		fscanf(fp1,"%s %s %d %d %d",a,b,&at,&st,&idd);
		
		strcpy(iter1->name,a);
		strcpy(iter1->attack,b);
		iter1->attack_power=at;
		iter1->stamina=st;
		iter1->id=idd;
		iter1->next=(ann*)malloc(sizeof(ann));
		iter1=iter1->next;
		
	}
	iter1->next=NULL;
	int co=count(liste1);
	int i=1;
	iter1=liste1;
	
	printf("Liste ierigi.\n");
	while(i<co){
		
		printf("%d-%s\n",iter1->id,iter1->name);
		iter1=iter1->next;
		i++;
		
	}
	
	
	
	
	
	
	

}
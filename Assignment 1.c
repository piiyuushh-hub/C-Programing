#include<stdio.h>

//PROGRAM TO CONVERT DECIMAL INTO BINARY:-
int main(){
	int a,re,x,binary=0,i=1;
	printf("Enter a Decimal Number:");
	scanf("%d",&a);
	
	x=a;
	
	while(a!=0){
		re=a%2;
		a=a/2;
		binary=binary+(re*i);
		i=i*10;
	}
	printf("Binary Representation of %d is %d",x,binary);
	return 0;
} 

//Program to convert Decimal to Hexadecimal
int main(){
	int a,x,re,hexa=0,i=1;
	printf("Enter a Decimal Number :");
	scanf("%d",&a);
	
	x=a;
	
	while(a!=0){
		re=a%16;
		a=a/16;
		hexa=hexa+(re*i);
		i=10*i;
	}
	printf("Hexadecimal Representation of %d is %d",x,hexa);
	return 0;
} 

//Program to convert Decimal to Octal
int main(){
	int a,x,re,octal=0,i=1;
	printf("Enter a Decimal Number:");
	scanf("%d",&a);
	
	x=a;
	
	while(a){
		re=a%8;
		a=a/8;
		octal=octal+(re*i);
		i=10*i;
	}
	printf("Octal Representation of %d is %d",x,octal);
	return 0;
}

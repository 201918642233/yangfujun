#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float p;
	scanf("%d",&n);
	float r5=0.03,r3=0.0275,r2=0.021,r1=0.015,r4=0.0035;
	if(n==5){
	
	p=1000*(1+n*r5);
	printf("%f",p);} 
	
	if(n==2){
	
	p=1000*(1+n*r2);
	p=p*(1+3*r3);
    printf("%f",p);
    } 
	if(n==3){
	
	p=1000*(1+n*r3);
	p=p*(1+n*r2);
    printf("%f",p); 
	} 
	if(n==1){
		p=1000*(1+r1);
		pow(p,5);
	    printf("%f",p);
	}
	
	
	
	
	
	return 0;
 } 

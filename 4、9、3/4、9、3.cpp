// 4¡¢9¡¢3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	a=x/10000;
	b=x/1000%10;
	c=x/100%10;
	d=x/10%10;
	e=x%10;
	printf("%d%d%d%d%d",e,d,c,b,a);
	return 0;
}


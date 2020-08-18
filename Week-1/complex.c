#include<stdio.h>
typedef struct
{
	int real,img;
}complex;
complex add(complex c1,complex c2)
{
	complex s1;
	s1.real = c1.real + c2.real;
	s1.img = c1.img + c2.img;
	return (s1);
}
int main()
{
	complex c1,c2,result;
	scanf("%d%d",&c1.real,&c1.img);
	scanf("%d%d",&c2.real,&c2.img);
	result = add(c1,c2);
	printf("Sum=%d+i%d\n",result.real,result.img);
	return 0;
	
}

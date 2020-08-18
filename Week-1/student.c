#include<stdio.h>
struct student
{
	char roll[15];
	char name[30];
	int m[5];
};
int main()
{
	struct student s[20];
	int n;
	float sum,avg;
	char grade;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		sum=0;
		scanf("%s",s[i].roll);
		scanf("%s",s[i].name);
		for(int j=0;j<5;j++)
		{
			scanf("%d",&s[i].m[j]);
			sum += s[i].m[j];
		}
		avg = sum/5.0;
		if(avg>50.0)
		{
			grade='A';
		}
		else
		{
			grade='B';
		}
		printf("roll=%s\t name=%s\t grade=%c\t",s[i].roll,s[i].name,grade);
		
	}
}
	

#include<stdio.h>
void Selection_sort(int a[100],int n)
{
	int i,j,t,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
}
int main()
{
        int n,a[30];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        Selection_sort(a,n);
        printf("Elements after sorting\n");
        for(int i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}

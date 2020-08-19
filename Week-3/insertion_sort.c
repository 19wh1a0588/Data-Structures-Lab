#include<stdio.h>
void Insertion_sort(int a[100],int n)
{
	for(int i=1;i<n;i++)
	{
		int index = a[i];
		int j=i;
		while((j>0) && (a[j-1]>index))
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j] = index;
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
        Insertion_sort(a,n);
        printf("Elements after sorting\n");
        for(int i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}


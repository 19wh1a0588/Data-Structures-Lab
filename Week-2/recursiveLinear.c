//Linear Search using Recursion
#include<stdio.h>
int linearsearch(int a[50],int n,int key)
{
        static int i;
	if(a[i] == key)
	{
		return i;
	}
	else if(i<n)
	{
		i++;
		linearsearch(a,n,key);
	}
	else
	{
		return -1;
	}
}
int main()
{
        int i,pos,n,key,a[50];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        scanf("%d",&key);
        pos=linearsearch(a,n,key);
        if(pos==-1)
                printf("element not present\n");
        else
                printf("element present at %d\n",pos+1);
}



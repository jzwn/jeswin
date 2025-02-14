#include<stdio.h>

int element_compare(int a[],int n, int num)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			return num;
		}
	}
		return -1;
}

int main()

{
	int a[100],n,i,num,flag;
	printf("Enter total elements : ");
        scanf("%d",&n);
        printf("Enter %d elements : \n",n);
        for (i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	printf("Enter the number to search : ");
	scanf("%d",&num);
	flag=element_compare(a,n,num);
	if (flag==-1)
	{
		printf("Searching Failed \n");
	}
	else
	{
		printf("Found\n");
	}
	return 0;
}

#include<stdio.h>

void bubbleSort(int a[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int swapped=0;
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swapped=1;
			}
		}
		if (!swapped)
		{
			break;
		}
	}

}

int main()
{
	int a[100],n,j;

	printf("Enter total elements of the array : ");
        scanf("%d",&n);

        printf("Enter %d elements : \n",n);
        for (int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

	printf("Array Before Sorting : \n");
	for (j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}

	bubbleSort(a,n);

	printf("\nAfter Sorting Array Elements\n");

	for (j=0;j<n;j++)
        {
                printf("%d\n",a[j]);
        }

	return 0;
}

#include<stdio.h>
#include<math.h>
void selection(int arr[], int n)
{
	int i=0,j=0,small;
	for (i=0;i<n-1;i++)
	{
		small=i; // Minimum element in unsorted array

		for (j=i+1;j<n;j++)
		{
			if (arr[j]<arr[small])
			{
				small=j;
			}
		}

		int temp=arr[small];
		arr[small]=arr[i];
		arr[i]=temp;
	}
}

void  printArr(int a[], int n)
{
	int i=0;
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

int main()
{
	int n,i=0,num;

	printf("Enter total elements of the array : ");
        scanf("%d",&num);

	int a[num];

        printf("Enter %d elements : \n",num);
        for (i=0;i<num;i++)
        {
                scanf("%d",&a[i]);
        }

	n=sizeof(a)/sizeof(a[0]);

	printf("Array Before Sorting : \n");
	printArr(a,n);

	selection(a,n);

	printf("\nAfter Sorting Array Elements\n");
	printArr(a,n);

	return 0;
}

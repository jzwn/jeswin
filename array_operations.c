#include<stdio.h>

int main()
{
        void merge(int *a[], int);
        void traverson(int a[], int);
        int insertion(int a[],int);
        void deletion(int a[],int);

        int n,a[100],i,fun,op;

        printf("Enter total elements of the array : ");
        scanf("%d",&n);
        printf("Enter %d elements : \n",n);
        for (i=0;i<n;i++)
         {
                scanf("%d",&a[i]);
        }

	do
	{

	printf("\nEnter the operation you want to execute : \n 1 - Insertion\n 2 - Deletion\n 3 - Traverson\n 4 - Merging Two arrays\n 5 - Exit \n\n ");
        scanf("%d",&op);

		switch(op)
		{
			case 1: insertion(a,n);
				break;
			case 2: deletion(a,n);
				break;
			case 3: traverson(a,n);
				break;
			case 4: merge(&a,n);
				break;
			case 5: printf("Exit Program\n");
				break;
			default : printf("Invalid Selection\n");
				break;
		}

	} while (op != 5);

        return 0;
}

void merge(int *a[],int n)
{
	int j,n2,i;

	printf("\nMERGING TWO ARRAYS\n");


	printf("Enter total elements of the second array : ");
	scanf("%d",&n2);
	printf("Enter the elements of second array : \n");

	for (j=n;j<n+n2;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("The updated array is : \n");
	for (i=0;i<n+n2;i++)
	{
		printf("%d\n",a[i]);
	}
}
void traverson(int a[],int n)
{
	int i;
	printf("\nTRAVERSON (Display Entered Array)\n");
	printf("Your array is : \n");
        for (i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}


int insertion(int a[],int n)
{
        int p,i,num,number;
	printf("\nINSERTION\n");
        printf("Please Enter the number to insert : ");
        scanf("%d",&number);
        printf("Enter the position to insert : ");
        scanf("%d",&num);
        p=num-1;
        for(i=n;i>p;i--)
        {
                a[i]=a[i-1];

        }
        a[i]=number;
        for (i=0;i<=n;i++)
        {
                printf("%d\n",a[i]);
        }
	return 0;
}

void deletion(int a[], int n)
{

	int i,p,num;
	printf("\nDELETION\n");
        printf("Element position to delete : ");
        scanf("%d",&num);
        p=num-1;
        for(i=p;i<n;i++)
        {
                a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
        {
                printf("%d\n",a[i]);
        }

}

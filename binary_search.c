#include<stdio.h>
void main()
{
	int a[100],i,loc,mid,beg,end,n,flag=0,item;
	printf("Enter total elements of the array : ");
        scanf("%d",&n);
        printf("Enter %d elements : \n",n);
        for (i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	printf("Enter the element to search : ");
	scanf("%d",&item);
	loc=0;
	beg=0;
	end=n-1;

	do
	{
		mid=((beg+end)/2);

		if(item==a[mid])
		{
			printf("Search is successful\n");
			loc=mid;
			printf("Position of the item : %d\n",loc+1);
			flag=flag+1;
		}
		else if (item<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	} while ((beg<=end)&&(item != a[mid]));

	if (flag==0)
	{
		printf("Search is not successful\n");
	}
}

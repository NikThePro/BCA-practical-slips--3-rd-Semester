/*Write a 'C' program to accept and sort n elements in ascending order by using insertion sort.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j=0,x,temp,n,a[20];
	
	printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The original array is: \n");
    for (i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
    
	printf("\n");
    printf("\n");
    
    //Insertion Sort Logic
	for(i=0; i<n; i++)
	{
		temp = a[i];
		j = i-1;
		
		while(j>=0 && a[j]>temp) {
			a[j+1]=a[j];
			j--;
		}
		
		a[j+1] = temp;
		
		printf("\n");
		printf("\n");
		for(x=0; x<n; x++) {
			printf("\t%d",a[x]);	
		}		
	}
	
	printf("\n");
	printf("\n");
	
	printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
    	printf("\t%d", a[i]);
	}
	
	return 0;    
}
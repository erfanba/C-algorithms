#include <stdio.h>
void pout() ;

int main(int argc, char const *argv[])
{
	int arr[] = {4,3,2,10,12,1,5,6} ;
	int swap ,length = sizeof arr / sizeof arr[0] ;
	
	for (int i = 1; i < length; ++i)
	{
		for (int j = i-1; j >=0 ; j--)
		{
			if (arr[j] > arr[i])
			{
				swap = arr[j] ;
				arr[j] = arr[i] ;
				arr[i] = swap ;
				i-- ;
			}
		}
	}
	pout(arr,length) ;
	return 0;
}


// print array 
void pout(int array[],int length){
	printf("\n\nthe array is :");
	for (int i = 0; i < length; ++i)
	{
		printf("%d,",array[i]);
	}
	printf("\n\n");
}




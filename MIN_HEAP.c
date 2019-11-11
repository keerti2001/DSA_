#include<stdio.h>
#include<stdbool.h>

int arr[10000];

void swap(int a , int b )
{
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void  Heapify( N , i )
{
    int smallest = i;
    int left=2*i+1;
    int right=2*i+2;

    if(left < N && arr[left] < arr[smallest])  
        smallest = left;

    if(right < N && arr[right] < arr[smallest]) 
        smallest = right;

    if(smallest != i)
    {
        swap( smallest , i );

        Heapify( N , smallest );
    }

}

void HeapSort(int N)
{
    int i;

    for(i=N/2-1;i>= 0;i--)
       Heapify( N , i );

    for(i=N-1;i>=0;i--)
    {

        swap( i , 0 );

        
        Heapify( i , 0 );
    }
}

int main()
{
    int i,N;
    printf("Enter the number of elements :");
    scanf("%d",&N);
 printf("\nEnter the elements : ");
    for( i = 0 ; i < N ; i++  )
        scanf("%d",&arr[i]);

    HeapSort(N);

    for(i = 0 ; i < N ; i++ )
        printf("%d ",arr[i]);
    printf("\n");
}

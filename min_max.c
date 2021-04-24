//Maximum and minimum of an array using minimum number of comparisons

//#include<iostream>
#include<stdio.h>
//using namespace std;
void main() {
    int max ,n, min;
    int arr[100];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for (int i=0; i<n;i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<min)
    min=arr[i];    
    }
    printf("Minimum of an array is: %d\n",min);
    printf("Maximum of an array is: %d",max);
}
/* OUTPUT:
Enter the size of array :5
Enter the elements of array:8 4 0 1 99
Minimum of an array is: 0
Maximum of an array is: 99

*/
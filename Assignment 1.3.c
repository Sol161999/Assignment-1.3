#include <stdio.h>
#include<stdlib.h>
void sort(int size, int *arr)
{
    int i, j,temp;
    printf("....Sorting the List....\n\n");
    for(i=0;i<size;i++)    
    {    
        for(j=i+1;j<size;j++)    
        {    
            if(arr[j] < arr[i])    
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }
    }
    printf(".....List is Sorted.....\n\n");
    printf("Lower Age is : %d \n",arr[0]);
    printf("Upper Age is : %d",arr[size-1]);
    
}
int main() 
{
    int n, i;
    int *age;
    printf("Enter number of employees : ");
    scanf("%d", &n);
    age=(int *)malloc(n*sizeof(int));
    printf("\nEnter the age of %d Employees : \n", n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &age[i]);
    }
    sort(n, age);
    

    return 0;
}
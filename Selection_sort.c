#include <stdio.h>
int selection_sort(int a[],int size);
int main()
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter %d elements:\n", size);

    for (i=0; i<size;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    selection_sort(a,size);
    printf("Sorted array:\n");

    for (i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

int selection_sort(int a[], int size)
{
    int i,j,min,temp;

    for (i=0;i<size-1;i++)
    {
        min = i;
        for (j=i+1;j<size;j++)
        {
            if (a[j]< a[min])
             {
                 min= j;
             }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

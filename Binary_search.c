#include <stdio.h>
int binary_search(int a[], int size, int n);

int main()
{
    int i, size, n, back;
    printf("size_of_array= ");
    scanf("%d", &size);
    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    printf("Enter the number= ");
    scanf("%d", &n);
    back = binary_search(a, size, n);

    if (back != -1)
    {
        printf("Element %d found at index %d.\n", n, back);
    } else
    {
        printf("Element %d not found in the array.\n", n);
    }
    return 0;
}

int binary_search(int a[], int size, int n)
{
    int low, high, mid;
    low = 0,
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == n)
        {
            return mid;
        }
        else if (a[mid] < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

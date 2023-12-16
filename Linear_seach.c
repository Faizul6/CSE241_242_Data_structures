#include <stdio.h>
int linear_search(int a[], int size, int n);

int main()
{
    int i, size, n, back;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &n);
    back = linear_search(a, size, n);

    if (back != -1)
    {
        printf("Element %d found at index %d.\n", n, back);
    }

    else
    {
        printf("Element %d not found in the array.\n", n);
    }
    return 0;
}

int linear_search(int a[], int size, int n)
{
    for (int i = 0; i < size; i++)

    {
        if (a[i] == n)
        {
            return i;
        }
    }

    return -1;
}

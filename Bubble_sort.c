#include <stdio.h>
int bubble_sort(int a[], int size);

int main()
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    bubble_sort(a, size);
    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

}

int bubble_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

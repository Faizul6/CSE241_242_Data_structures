#include <stdio.h>

int insertion_sort(int a[], int size);
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

    insertion_sort(a, size);
    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

}

int insertion_sort(int a[], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}

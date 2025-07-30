#include <stdio.h>

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_array(int a[], int l, int m, int r);

int main(int arrgc, char *argv[])
{
    int array[] = {9, 4, 1, 784, 7, 3, 65, 0, 398, 5, 38, 57, 45, 62, 8, 73, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);

    merge_sort(array, length); // line 12

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]); // Added space for better output
    printf("\n");
    return 0;
}

void merge_sort(int a[], int length)
{
    merge_sort_recursion(a, 0, length - 1); // line 22
}

void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; // Fixed how m is calculated

        merge_sort_recursion(a, l, m); // line 32
        merge_sort_recursion(a, m + 1, r);

        merge_sorted_array(a, l, m, r); // line 35
    }
}

void merge_sorted_array(int a[], int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    // Copy data to temporary arrays
    for (int i = 0; i < left_length; i++)
        temp_left[i] = a[l + i];

    for (int i = 0; i < right_length; i++)
        temp_right[i] = a[m + 1 + i];

       int i = 0, j = 0, k = l; // Initialize j and k

    // Merge the temporary arrays back into a[]
    while (i < left_length && j < right_length)
    {
        if (temp_left[i] <= temp_right[j])
        {
            a[k] = temp_left[i];
            i++;
        }
        else
        {
            a[k] = temp_right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of temp_left[], if any
    while (i < left_length)
    {
        a[k] = temp_left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of temp_right[], if any
    while (j < right_length)
    {
        a[k] = temp_right[j];
        j++;
        k++;
    }
}

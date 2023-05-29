#include <stdio.h>

#define ARRAY_LENGTH 11

void bubble_sort(int unsorted_array[], int array_length);

int main(void)
{
    int unsorted_array[ARRAY_LENGTH] = {0, 4, 3, 10, 6, 2, 8, 7, 5, 9, 1};

    printf ("Unsorted: ");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf ("%i ", unsorted_array[i]);
    }
    printf ("\n");

    bubble_sort(unsorted_array, ARRAY_LENGTH);

    printf ("Sorted: ");
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf ("%i ", unsorted_array[i]);
    }
}

void bubble_sort(int unsorted_array[], int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        for (int j = 0; j < array_length-1; j++)
        {
            if (unsorted_array[j] > unsorted_array[j + 1])
            {
                int temp = unsorted_array[j];
                unsorted_array[j] = unsorted_array[j + 1];
                unsorted_array[j + 1] = temp;
            }
        }
    }
}
#include <stdio.h>

void search(int arr[], int search_element, int length)
{
    int left = 0;
    int position = -1;
    int right = length - 1;

    // Run loop from 0 to right
    for (left = 0; left <= right;)
    {
        // If searh_element is found with
        // left variable
        if (arr[left] == search_element)
        {
            position = left;
            printf("Element found in Array at %d Position with %d Attempt\n", position + 1, left + 1);

            break;
        }

        // If search_element is found with
        // right variable
        if (arr[right] == search_element)
        {
            position = right;
            printf("Element found in Array at %d Position with %d Attempt\n", position + 1, length - right);

            break;
        }
        left++;
        right--;

        // If element not found
        if (position == -1)
            printf("Not found in Array with %d Attempt\n", left);
    }
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int search_element = 5;

    search(arr, search_element, length);

    return 0;
}

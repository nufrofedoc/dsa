#include <stdio.h>

void swap(int arr[], int p1, int p2) {
    int temp = arr[p1];
    arr[p1] = arr[p2];
    arr[p2] = temp;
}

int rearrange_array(int arr[], int start, int end) {
    int pivot = arr[start];

    int large_num_pos = start + 1;

    for (int i = start+1; i <= end; i++) {
        if (arr[i] < pivot) {
            swap(arr, large_num_pos, i);
            large_num_pos++;
        }
    }

    int pivot_position = large_num_pos - 1;
    swap(arr, start, pivot_position);

    return pivot_position;
}

void quick_sort(int arr[], int start, int end) {
    if (start < end) {
        int pivot = arr[start];

        int pivot_pos = rearrange_array(arr, start, end);

        quick_sort(arr, start, pivot_pos-1);
        quick_sort(arr, pivot_pos+1, end);
    }
}

void print_array(int size, int array[]) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("[%d]", array[i]);
    }
}

int main()
{
    int input_array[] = {10,9,8,7,6,5,4,3,2,1};
    int input_array_size = sizeof(input_array) / sizeof(int);

    print_array(input_array_size, input_array);

    quick_sort(input_array, 0, input_array_size-1);

    print_array(input_array_size, input_array);

    return 0;
}

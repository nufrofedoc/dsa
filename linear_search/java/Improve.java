import java.io.*;

class Improve
{
    public static void search(int arr[], int search_element)
    {
        int left = 0;
        int length = arr.length;
        int right = length - 1;
        int position = -1;

        // Run loop from 0 to right
        for (left = 0; left <= right;) {
            // If search_element is found with left variable
            if (arr[left] == search_element) {
                position = left;
                System.out.println("Element found in Array at " +
                                   (position + 1) + " Position with " +
                                   (left + 1) + " Attempt");
                break;
            }

            // If search_element is found with left variable
            if (arr[right] == search_element) {
                position = right;
                System.out.println("Element found in Array at " +
                                   (position + 1) + " Position with " +
                                   (length - right) + " Attempt");
                break;
            }

            left++;
            right--;
        }

        // If element not found
        if (position == -1)
            System.out.println("Not found in Array with " + left + " Attempt");
    }

    // Driver code
    public static void main(String[] args)
    {
        int arr[] = {1, 2, 3, 4, 5};
        int search_element = 5;

        // Function call
        search(arr, search_element);
    }
}

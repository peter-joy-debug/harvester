#include <iostream>
using namespace std;
void quick_sort(int *arr, int start, int last);
// Driver Code
int main()
{
    int arr[] = {0, 98, 761, 100, -982, -72};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    // Calling the quick_sort function
    quick_sort(arr, 0, len-1);
    // Printing Output
    cout << "The sorted Array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}
void quick_sort(int *arr, int start, int last)
{
    if (start < last)
    {
        int i = start, temp, j = last, pivot = arr[start];
        // Placing the element from pivot to its sorted position.
        while (j >= i)
        {
            while (arr[i] <= pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = pivot;
        arr[start] = arr[j];
        arr[j] = temp;
        quick_sort(arr, j + 1, last);  // Recurssion
        quick_sort(arr, start, j - 1);  // Recurssion
    }
}
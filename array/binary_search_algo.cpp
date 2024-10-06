#include <iostream>
using namespace std;

int searchElement(int arr[], int target, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "running";
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
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

int main()
{
    int arr[] = {
        10, 20, 30, 40, 50, 60, 70};

    int target = 50;
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = searchElement(arr, target, size);
    if (searchIndex < 0)
    {
        cout << "Element Not exist into provider array";
    }
    else
    {
        cout << "Element found at index  : " << searchIndex;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int arraySize = sizeof(arr) / sizeof(int);
    for (int i = 0; i < (6 / 2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
        // if (arr[i] > arr[arraySize - 1])
        // {
        //     arr[arraySize - 1] = arr[i];
        // }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "array element is " << i << " : " << arr[i] << endl;
    }

    return 0;
}
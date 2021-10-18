#include <iostream>
#include <vector>
using namespace std;
int selectionSort(int arr[], int n)
{
    for (int pos = 0; pos < n - 2; pos++)
    {
        int current = arr[pos];
        int min_ele_index = pos;
        // searching for min element index
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_ele_index])
            {
                min_ele_index = j;
            }
        }
        // after the finding the min index swaping the elements
        swap(arr[min_ele_index], arr[pos]);
    }
}

int main()
{
    int arr[] = {5, -3, 2, -1, 6, 0, -11, -33, 889};
    int n = sizeof(arr) / sizeof(int);
    cout << "before  " << endl;
    // auto  c++ 11 warning but its works
    // for (auto x : arr)
    //     cout
    //         << x << ",";

    // normal
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';

    selectionSort(arr, n);
    cout << "after " << endl;
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';
}

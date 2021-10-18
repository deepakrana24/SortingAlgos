#include <iostream>
#include <vector>
using namespace std;

int insertionSort(int arr[], int n)
{

    for (int i = 1; i <= n - 1; i++)
    {
        int prev = i - 1;
        int current = arr[i];

        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
    return 0;
};

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
            << arr[i] << endl;

    insertionSort(arr, n);
    cout << "after " << endl;
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << endl;
}

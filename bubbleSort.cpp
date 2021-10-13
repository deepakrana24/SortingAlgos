#include <iostream>
#include <vector>
using namespace std;
int bubbleSort(int arr[], int n)
{

    for (int i = 0; i < (n)-2; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return 0;
}
int main()
{
    cout << endl;
    // vector<int> arr;
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << "before bubble sort " << endl;
    int n = sizeof(arr) / sizeof(int);
    for (int i; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    bubbleSort(arr, n);
    cout << "after the bubble sort " << endl;
    for (int i; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
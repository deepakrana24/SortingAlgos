// code - 4SortCompare
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) { return a > b; };
int main()
{
    int arr[] = {5, -3, 2, -1, 6, 0, -11, -33, 889};
    int n = sizeof(arr) / sizeof(int);
    // method 1 where the sort and reverse is used from algorithms
    cout << "before  method 1 " << endl;

    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';

    sort(arr, arr + n);
    reverse(arr, arr + n);

    cout << "after " << endl;
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';
    // method 2  comparator

    cout << "before  method 2 " << endl;

    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';

    sort(arr, arr + n, compare);

    cout << "after " << endl;
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';

    // method 3  compare `s already made function

    cout << "before  method 3 " << endl;

    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';

    sort(arr, arr + n, greater<int>());

    cout << "after " << endl;
    for (int i = 0; i < n; i++)
        cout
            << arr[i] << ',';
}
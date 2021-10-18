// code5 - countingthearraythensort
//-std=c++11
#include <iostream>
#include <vector>
using namespace std;

int countSort(int a[], int n)
{
    int largest = -1;

    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }
    vector<int> freq(largest + 1, 0);

    // update the freq of the freaq array
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    };
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return 0;
}
int main()

{ // this algo only for postive array only
    // int arr[] = {5, -3, 2, -1, 6, 0, -11, -33, 889};// this is failing point
    int arr[] = {8, 4, 2, 6, 3, 7, 5, 9, 10, 1};

    int n = sizeof(arr) / sizeof(int);
    cout << endl;
    cout << "before " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    };

    // for (int i = 0; i < n; i++)
    //     cout
    //         << arr[i] << ',';

    countSort(arr, n);
    cout << endl
         << "after " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    };
    // for (int i = 0; i < n; i++)
    //     cout
    //         << arr[i] << ',';
    cout << endl;
    return 0;
}
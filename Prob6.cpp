// Search an element in 2D sorted array :)

#include <iostream>
using namespace std;
bool searchin2d(int arr[50][50], int n, int k);
int main()
{
    int a[50][50], n, key;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Your 2D array is as follows :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Element to search :" << endl;
    cin >> key;
    bool res = searchin2d(a, n, key);
    cout << res;
    return 0;
}

bool searchin2d(int arr[50][50], int n, int k)
{

    int row = 0, col = n - 1;
    if (k < arr[0][0] || k > arr[n - 1][n - 1])
        return false;
    while (row < n && col >= 0)
    {
        if (k < arr[row][col])
            col--;
        else if (k > arr[row][col])
            row++;
        else

            return true;
    }
    return false;
}
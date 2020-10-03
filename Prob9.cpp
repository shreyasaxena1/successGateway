// Boolean 2D matrix modification ( if a[i][j] ==1 then make ith row 1 and jth col 1)
#include <iostream>
using namespace std;
void modifyArray(int arr[50][50], int row, int col);
int main()
{
    int a[50][50], r, c, key;
    cout << "Enter size of row :" << endl;
    cin >> r;
    cout << "Enter size of column :" << endl;
    cin >> c;
    cout << "Enter array elements :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Your 2D array is as follows :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Modified array :" << endl;
    modifyArray(a, r, c);
    return 0;
}

void modifyArray(int arr[50][50], int row, int col)
{
    int i, j, rflag = 0, cflag = 0;
    for (i = 0; i < col; i++)
    {
        if (arr[0][i] == 1)
            rflag = 1;
        break;
    }
    for (i = 0; i < row; i++)
    {
        if (arr[i][0] == 1)
            cflag = 1;
        break;
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                arr[0][j] = 1;
                arr[i][0] = 1;
            }
        }
    }
    for (i = 1; i < row; i++)
    {
        for (j = 1; j < col; j++)
        {

            if (arr[0][j] == 1 || arr[i][0] == 1)
            {
                arr[i][j] = 1;
            }
        }
    }

    if (rflag == 1)
    {
        for (i = 0; i < col; i++)
        {
            arr[0][i] = 1;
        }
    }
    if (cflag == 1)
    {
        for (i = 0; i < row; i++)
        {
            arr[i][0] = 1;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

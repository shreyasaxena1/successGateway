// Delete duplicate in an array

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    int a[50], j, i, n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSort(a, n);
    cout << "Sorted array :" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    i = 0;
    for (j = 1; j < n; j++)
    {
        if (a[i] != a[j])
            a[++i] = a[j];
    }
    cout << "Array with unique elements :" << endl;
    for (int k = 0; k <= i; k++)
        cout << a[k] << " ";
    return 0;
}

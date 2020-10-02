//Print all the pairs in a sorted array with difference k

#include <iostream>
using namespace std;

void kdiffpairs(int arr[], int n, int k)
{
    int i = 0, j = 1, count = 0;
    cout << "Pairs with difference " << k << " are:" << endl;
    while (i < n && j < n)
    {
        if ((arr[j] - arr[i]) < k)
            j++;
        else if ((arr[j] - arr[i]) == k)
        {
            cout << "( " << arr[i] << " , " << arr[j] << " )" << endl;
            i++, j++, count++;
        }
        else
            i++;
    }
    cout << "Total pairs are: " << count;
}

int main()
{
    int a[50], n, k;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter difference : " << endl;
    cin >> k;
    kdiffpairs(a, n, k);

    return 0;
}
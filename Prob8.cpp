// Sort 0's , 1's and 2's (R,G,B)s

#include <iostream>
using namespace std;

void sortZOT(int arr[], int n);
int main()
{
    int a[50], n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Sorted array :" << endl;
    sortZOT(a, n);
    return 0;
}
void sortZOT(int arr[], int n)
{
    int i = 0, j = 0, k = n - 1, temp;
    while (j < k)
    {
        switch (arr[j])
        {
        case 0:
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++, j++;
            break;
        case 1:
            j++;
            break;
        case 2:
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
            k--;
        }
    }
    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << " ";
    }
}

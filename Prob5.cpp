// Print all the leaders in unsorted array
// Leader is an element of array if it is greater than all he elements to its right

/* TC : o(n^2) SC: o(1)
#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        bool flag = true;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
                flag = false;
        }
        if (flag != false)
            cout << arr[i] << " ";
    }
}

int main()
{
    int a[50], n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    leaders(a, n);
    return 0;
}
 */

// TC : O(n)
#include <iostream>
using namespace std;
void leaders(int *, int);

int main()
{
    int a[50], n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    leaders(a, n);
    return 0;
}
void leaders(int arr[], int n)
{
    int i, temp = arr[n - 1];
    cout << arr[n - 1] << " ";
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
            cout << temp << " ";
        }
    }
}
// Prob 1: All the elements in an unsorted array appears even no of times except one. Find that element.

#include <iostream>
using namespace std;
int oddElement(int a[], int n);
int main()
{
    int a[50], n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "One considering the problem statement , enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Your array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "Odd element is : " << oddElement(a, n);
    return 0;
}

int oddElement(int a[], int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
        odd = odd ^ a[i];
    return odd;
}
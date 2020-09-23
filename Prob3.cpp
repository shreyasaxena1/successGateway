// Find duplicate in an array

#include <iostream>
using namespace std;

int main()
{
    int a[30] = {1,2,3,4,1,56,72,72,54,22,78,56,91,12,35,1,6,77,45,88,23,56,98,12,34,90,66,789,44,1},j;
    for (int i = 0; i <30- 1; i++)
    {
        for (j = i; j < 30- i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j+1]=a[j];
                a[j] = temp;
            }
        }
    }
    for(int k=0;k<30;k++)
        cout<<a[k]<<" ";
    cout<<endl;
    i=0; 
     for(j=1;j<30;j++){
        if(a[i]!=a[j])
           a[++i]=a[j];
    }
    for(int k=0;k<=i;k++)
        cout<<a[k]<<" ";
    return 0;
}

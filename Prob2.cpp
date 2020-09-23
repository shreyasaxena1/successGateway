//Rotate array by d elements

#include <iostream>
using namespace std;
void Rotate(int arr[],int low , int high){
  while(low<high){
    int temp = arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
      low++,high--;
  }
  
}


int main()
{
  int a[50],d ,n;
  cout<<"Enter the size of array : "<<endl;
  cin>>n;
  cout<<"Enter values of array : "<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Your array is as follows : "<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"Enter no of left rotation :"<<endl;
  cin>>d;
  Rotate(a,0,d-1);
  Rotate(a , d ,n-1);
  Rotate(a , 0 ,n-1);
  for (int i = 0; i < n; i++)
  { cout<<a[i]<<" ";
    
  }
  
  return 0;
}


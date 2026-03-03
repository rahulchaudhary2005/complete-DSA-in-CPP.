#include<iostream>
using namespace std;
int main()
{
    int arr[5]={ 1,3,5,7,9};
int k=7;

  for(int i=0 ;i<5;i++)
  {
    if(arr[i]==k)
    {
        cout<<"The element is found at index : "<<i;
    }
  }
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbr of element you want";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element : ";
        cin>>arr[i];
    }
    cout<<"The reversed order of array is ";

    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}

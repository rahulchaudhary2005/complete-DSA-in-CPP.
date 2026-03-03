#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want : ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"Enter the number key : ";
    cin>>k;


    for(int i=0; i<n ; i++)
    {
        cout<<"Enter the element : ";
        cin>>arr[i];

    }

    //cout<<arr[n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<"The element found at "<<i<<" and "<<j<<" indexes .";
            }
        }
    }
    

}
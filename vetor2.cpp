#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enteer the number of size of an arra";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element : ";
        cin>>arr[i];

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(arr[i]==arr[j] || arr[i]==-arr[j]){
                //cout<<"Nothing found";
                continue;
            }
            else{
                cout<<"Element found : "<<arr[i];
            }
        }
    }

}
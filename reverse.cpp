#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[5]={2,4,-4,90,23};
    int temp[5];
    int k;
    cout<<"Enter the number of the index you want to rotate ";
    cin>>k;
    k=k%5;

    for(int i=0; i<5 ; i++)
    {
        temp[(i+k)%5]=arr[i];
        
    }
    

    for(int i=0; i<5; i++)
    {
        arr[i]=temp[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

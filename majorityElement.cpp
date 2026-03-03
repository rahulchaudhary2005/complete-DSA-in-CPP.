#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,1,3,3,3};
    int freq=0, ans=0;
    for(int i =0; i<5; i++)
    {
        if(ans==arr[i])
        {
            ans=arr[i];
        }
        if(ans=arr[i])
        {
            freq++;
        }
        else{
            freq--;
        }
        
    }
    cout<<"The majority element is : "<<freq;
    // for(int i=0; i<1; i++)
    // {
    //     int freq=0;
    //     for(int j=0; j<5;j++){
    //         if(arr[i]==arr[j])
    //         {
    //             freq++;
    //         }
    //     }
    //     cout<<"The majority is : "<<freq;
    // }
}
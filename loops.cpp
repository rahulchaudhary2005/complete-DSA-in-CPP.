#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool isPrime=true;

    for(int i=2; i<n-1; i++)
    {
        if(n%i==0) 
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"prime number \n";

    }
    else{
        cout<<"non prime number ";

    }
    return 0;
    //While loop

    // int i=1;
    // int sum=0;
    // while(i<=5)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<"The sum of these number is : "<<sum;

    //for loop
    // int sum=0;
    // for(int i=0; i<10; i++)
    // {
    //     // int sum=0;
    //     sum=sum+i;
    //     // cout<<"The sum of first "<<i<<" numbers is "<<sum;
        
    //    cout<<endl;
    // }
    // cout<<"The sum of first 10 "<<" numbers is "<<sum;
}
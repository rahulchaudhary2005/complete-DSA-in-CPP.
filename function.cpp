#include<iostream>
using namespace std;

    int printFact(int n)
    {
        int fact=1;
        for(int i=1;i<=n; i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    int main()
    {
        int n;
        cout<<"Enter the number : ";
        cin>>n;
        cout<<"the factorial is "<<printFact(n);
        return 0;
    }
    

// int printSum(int n)
// {
//     int sum=0;
//     for(int i=1; i<=n; i++)
//     {
//         sum=sum+i;
//     }
//     return sum;

// }
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     cout<<printSum(n);
    

// }

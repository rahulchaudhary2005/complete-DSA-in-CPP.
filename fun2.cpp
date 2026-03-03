#include<iostream>
using namespace std;

int calculateSum(int n)
{
    int digSum=0;
    while(n>0)
    {
        int lastdigit;
        lastdigit = n%10;
        n=n/10;
        digSum=digSum+lastdigit;

    }
    return digSum;

}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The sum of all the digits is : "<<calculateSum(n);

}
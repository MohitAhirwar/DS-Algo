#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter no. of elements in array:";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {

        sum+=a[i];

    }
    cout<<"Sum:"<<sum;

}

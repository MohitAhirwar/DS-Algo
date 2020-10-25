#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char A[100],B[100];
    cin>>A>>B;
    int x,y;
    x=strlen(A);
    y=strlen(B);
    cout<<x<<" "<<y<<endl;
    cout<<strcat(A,B)<<endl;
    char t=A[0];
    A[0]=B[0];
    B[0]=t;
    cout<<A<<" "<<B<<endl;
    return 0;

}

#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[100],b[100];
    int l1,l2;
    cin>>a;
    cin>>b;
    for(int i=0;i<100;i++)
    {
        if(a[i]='\0')
        {
            l1=i+1;
        }
    }
    for(int i=0;i<100;i++)
    {
        if(b[i]='\0')
        {
            l2=i+1;
        }
    }
    cout<<l1<<" "<<l2;
    cout<<a[100]+b[100];
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
    print<<a<<" "<<b;


    return 0;
}

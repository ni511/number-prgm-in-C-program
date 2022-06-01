// number prgm in C++ program 
#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    while(i<=n)
    {
        int j=n;
        while(j<=n&&j>0)
        {
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}

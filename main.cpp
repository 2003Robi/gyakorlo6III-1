#include <iostream>

using namespace std;
void numerar(int n,int c,int &m)
{
    int p;
    p=1,m=0;
    while(n!=0)
    {
        if(n%10!=c)
        {
            m=(n%10)*p+m;
            p=p*10;
        }
        n=n/10;
    }
    if(m==0)
        m=-1;
}
int main()
{
    int m;
    numerar(5555,5,m);
    cout<<m;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,a,i,x,y,mi=0,ma=1000000000,l,m,n,o;
    vector<long long int>v;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a;
        v.push_back(a);
        if(a<ma)
        {ma=a;
            x=i;}
        if(a>=mi)
        {
            mi=a;
            y=i;
        }
    }
   /// cout<<x<<" "<<y<<endl;
    if(x>y)
    {
        l=num-1;
        m=0;
        n=l-y;
        o=x;
       /// cout<<n<<" "<<o<<endl;
        cout<<max(n,o);
    }
    else
    {
         l=num-1;
        m=0;
        n=l-x;
        o=y;
        cout<<max(n,o);
    }



}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int max=0;
   
   int count=0;
   for(int i=0;i<n;i++)
   {
       int a;cin>>a;
       if(a>=max)
       {
           max=a;
           count ++;
       }
    }
    cout<<count<<endl;
    return 0;  
}

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];
int main()
{
  int n,m;
  cin>>n>>m;
  while(m--)
  { 
  	int a,b,k;
  	cin>>a>>b>>k;
   
    	arr[a] = arr[a] + k;
    	arr[b+1] = arr[b+1] - k;
    
  }
  for(int i=1;i<n;i++)
  {
  	arr[i] = arr[i]+arr[i-1];
  }
  long long int max = 0;
  for(int i=1;i<=n;i++)
{
	if(arr[i]>max)
	{
		max = arr[i];
	}
}
cout<<max<<endl;
return 0;
}

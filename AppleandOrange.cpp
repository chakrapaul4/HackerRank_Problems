#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t;
	cin>>s>>t;
	int a,b;
	cin>>a>>b;
	int m,n;
	cin>>m>>n;
	int arr1[m],arr2[n];
	int apples=0,oranges=0;
	for(int i=0;i<m;i++)
	{
      cin>>arr1[i];
		arr1[i] = a + arr1[i] ;
}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
		arr2[i] =  b+arr2[i];
	}
	for(int i=0;i<m;i++)
	{
		if(arr1[i]>=s && arr1[i]<=t)
		{
			apples++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr2[i]>=s && arr2[i]<=t)
		{
			oranges++;
		}
	}
	cout<<apples<<endl<<oranges<<endl;
	return 0;

}
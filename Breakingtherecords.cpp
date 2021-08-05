#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
	int arr[n];
	
	int mincount = 0,maxcount = 0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int min=arr[0],max=arr[0];
	for(i=1;i<n;i++)
	{
	if(arr[i]<min)
		{
			min=arr[i];
			mincount++;
		}
		else if(arr[i]>max)
		{
			max=arr[i];
			maxcount++;
		}
	}
	cout<<maxcount<<" "<<mincount<<endl;
	return 0;

}
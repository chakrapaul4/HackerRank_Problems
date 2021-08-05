#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int tree=0;
		for(int i=0;i<=n;i++)
		{
			if(i%2!=0)
			{
				tree = tree*2;
			}
			else
			{
				tree = tree+1;
			}
		}
		cout<<tree<<endl;
	}
	return 0;
}

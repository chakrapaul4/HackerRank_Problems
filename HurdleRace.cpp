#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int hieght[n];
	int max = 0,magicpotion;
	for(int i=0;i<n;i++)
	{
		cin>>hieght[i];
		if(max < hieght[i])
		{
			max = hieght[i];
		}
	}
    if(k<max)
    {
    	magicpotion = max - k;
    	cout<<magicpotion<<endl;
    }
    else
    {
    cout<<0<<endl;
}
  return 0;

}
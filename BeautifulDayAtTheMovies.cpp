#include<bits/stdc++.h>
using namespace std;
int reverse(int num)
{
	int rem,rev = 0;
	while(num>0)
	{
     rem = num%10;
     rev = rev*10 + rem;
     num = num/10;
	}
	return rev;
}
int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	vector <int> v;
	int rev,count=0;
	for(int c=i;c<=j;c++)
	{
       v.push_back(c);
	}
    int size;
    size = v.size();
	for(int c=0;c<size;c++)
	{
		rev = reverse(v[c]);
	    if(abs(v[c]-rev)%k==0)
	    {
	    	count++;
	    }     
	}
	cout<<count<<endl;
	return 0;
  }
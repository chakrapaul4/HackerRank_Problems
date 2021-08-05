#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int CatA,CatB,MouseC;
		cin>>CatA>>CatB>>MouseC;
		int dista,distb;
		dista = abs(CatA - MouseC);
		distb = abs(CatB - MouseC);
		if(dista == distb)
		{
			cout<<"Mouse C"<<endl;
		}
		else if(dista > distb)
		{
			cout<<"Cat B"<<endl;
		}
		else
		{
			cout<<"Cat A"<<endl;
		}

	}
	return 0;
}
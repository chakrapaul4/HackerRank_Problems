#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    float positive = 0.0;
     float negative = 0.0 ;
    float zero = 0.0;
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else 
        {
            zero++;
        }
    }
    
    double result1,result2,result3;
    result1 = (positive/n);
    result2 = (negative/n);
    result3 = (zero/n);
     cout<<setprecision(6)<<result1<<endl<<setprecision(6)<<result2<<endl<<setprecision(6)<<result3<<endl;
     return 0; 
}

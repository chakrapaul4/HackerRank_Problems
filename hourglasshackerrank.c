#include<stdio.h>
int main()
{
     int arr[50][50],rows,columns;
     int sum=0;
     int maxsum=-50000;
     scanf("%d",&rows);
     scanf("%d",&columns);
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<columns;j++)
         {
         scanf("%d",&arr[i][j]);
     }
     }
     for(int i=0;i<rows-2;i++)
     {
         for(int j=0;j<columns-2;j++) 
         {
             
                sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        
     
     if(sum>maxsum)
     {
         maxsum=sum;
     }
     else
     continue;
         }
     }  
     printf("%d",maxsum);
      
   return 0;
}
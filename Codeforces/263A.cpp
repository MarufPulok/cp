#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int arr[7][7],row,col,d;
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          cin>>arr[i][j];
      }
  }
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          if(arr[i][j]==1)
          {
              row=i+1;
              col=j+1;
          }
      }
  }
  d=abs(row-3)+abs(col-3);
  cout<<d<<endl;
  return 0;
}


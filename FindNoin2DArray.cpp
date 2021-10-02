#include<bits/stdc++.h>  
using namespace std;

//2D Array -> Searching Matrix
int main()  
{
  int row, col;
  cout<<"Enter size of array row and column: ";
  cin>>row>>col;
  int arr[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
    cout<<"Enter row no: "<<i<<" col no: "<<j<<" "<<" array iteam: ";
    cin>>arr[i][j];
    }
  }
  
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  int x;
  cout<<"Enter search no in array: ";
  cin>>x;
  bool flag=false;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j]==x){
        cout<<i<<" "<<" "<<j<<endl;
        flag=true;
      }
    }
  }
  if(flag){
    cout<<x<<" Element is found";
  }else{
    cout<<x<<" Element is not found";
  }
  return 0;
}  

#include<bits/stdc++.h>  
using namespace std;

//2D Array
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
  
  return 0;
}  

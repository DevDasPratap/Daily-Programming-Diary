#include<bits/stdc++.h>  
using namespace std;

//Sub Array
int main()  
{
  int no;
  cout<<"Enter size of array: ";
  cin>>no;
  int arr[no];
  for(int i=0; i<no; i++){
    cout<<"Enter "<<i<<" array iteam: ";
    cin>>arr[i];
  }

 for(int i=0; i<no; i++){
   for(int j=i; j<no; j++){
     for(int k=i; k<=j; k++){
       cout<<arr[k]<<" ";
     }
     cout<<endl;
   }
 }
  
  return 0;
}  

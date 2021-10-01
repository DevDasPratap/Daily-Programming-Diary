#include<bits/stdc++.h>  
using namespace std;

//Bubble Sort
int main()  
{
  int no;
  cout<<"Enter size of array: ";
  cin>>no;
  int arr[no];
  for(int i=0; i<no; i++){
    cout<<"Enter "<<i<<" array iteam: "<<endl;
    cin>>arr[i];
  }
for(int counter=1; counter<no; counter++){
  for(int i=0; i<no-counter; i++){
    if(arr[i]>arr[i+1]){
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  }
}
 for(int i=0; i<no; i++){
   cout<<arr[i]<<" ";
 }cout<<endl;
  
  return 0;
}  

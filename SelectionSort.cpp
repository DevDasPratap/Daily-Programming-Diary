#include<bits/stdc++.h>  
using namespace std;

//Selection Sort
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
 for(int i=0; i<no-1; i++){
   for(int j=i; j<no; j++){
     if(arr[j]<arr[i]){
       int temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
     }
   }
 }
 for(int i=0; i<no; i++){
   cout<<arr[i]<<" ";
 }cout<<endl;
  
  return 0;
}  

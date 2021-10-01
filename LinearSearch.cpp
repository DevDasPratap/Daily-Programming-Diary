#include<bits/stdc++.h>  
using namespace std;

int linearSearch(int arr[], int n, int key){
  for(int i=0; i<=n; i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}
int main()  
{
  int no;
  cout<<"Enter size of array: ";
  cin>>no;
  int arr[no];
  for(int i=0; i<=no; i++){
    cout<<"Enter array iteam: "<<endl;
    cin>>arr[i];
  }
  int key;
  cout<<"Enter find key in this array: ";
  cin>>key;
  cout<<linearSearch(arr, no, key)<<endl;
  
  return 0;
}  

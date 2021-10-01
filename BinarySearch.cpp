#include<bits/stdc++.h>  
using namespace std;
//First sort list of array ex: [10,20,30, 40] Not like: [10,30, 50, 90, 40]
int binarySearch(int arr[], int num, int key){
  int startPoint=0, endPoint=num;
  while(startPoint<=endPoint){
    int middlePoint=(startPoint+endPoint)/2;
    if(arr[middlePoint]==key){
      return middlePoint;
    }else if(arr[middlePoint]>key){
      endPoint=middlePoint-1;
    }else{
      startPoint=middlePoint+1;
    }
  }
  return -1;
}
int main()  
{
  int no, sum=0;
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
  cout<<binarySearch(arr, no, key)<<endl;
  
  return 0;
}  

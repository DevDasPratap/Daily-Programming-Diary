#include<bits/stdc++.h>  
using namespace std;

//Max Sub Array Sum
int main()  
{
  int no, sum=0, maxSum=INT_MIN;
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
       sum += arr[k];
     }
     maxSum=max(maxSum, sum);
   }
 }
 cout<<maxSum<<endl;
  
  return 0;
}  

#include <bits/stdc++.h>
using namespace std;

int main(){
    int no;
    cout<<"Enter arr size: ";
    cin>>no;
    int arr[no];
    for(int i=0; i<=no; i++){
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    for(int j=0; j<=no; j++){
        cout<<"Array index "<<j<<" element is: "<<arr[j]<<endl;
    }
    return 0;
}
 
// int main(){
//     int no;
//     cout<<"Enter arr size: ";
//     cin>>no;
//     int arr[no];
//     for(int i=0; i<=no; i++){
//         cin>>arr[i];
//     }
//     int large=INT_MIN;
//     int small=INT_MAX;
//     for(int i=0; i<=no; i++){
//         large=max(large, arr[i]);
//         small=min(small, arr[i]);
//     }
//     cout<<large<<" is large"<<endl;
//     cout<<small<< " is small"<<endl;

//     return 0;
// }

//Find duplicate
// int findDup(int arr[], int size){
//     int ans=0;
//     for(int i=0; i<size; i++){
//         ans=ans^arr[i];
//     }
//     for(int i=0; i<size; i++){
//         ans=ans^i;
//     }
//     cout<<ans;
// }
// int main(){
//     int arr[8]={10,9,5,4,16,9,8, 18};
//     findDup(arr, 7);
//     return 0;
// }



//Unique number of occurences


//Find unique number
// int findNum(int arr[], int size){
//     int ans=0;
//     for(int i=0; i<=size; i++){
//         ans=ans^arr[i];
//     }cout<<ans<<" ";
// }
// int main(){
//     int arr[7]={1,5,4,8,4,8,1};
//     findNum(arr, 6);

//     return 0;
// }


//swap between two number

// int printArray(int arr[], int size){
//     for(int i=0; i<=size; i++){
//         cout<<arr[i]<<" ";
//     }return 0;
// }
// int swapNum(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if(i+1<size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }
// int main(){
//     int even[9]={4,5,7,8,10,9,16,21,19};
//     int odd[8]={30,27,8,9,7,10,16,19};
//     swapNum(even, 8);
//     printArray(even, 7);

//     swapNum(odd, 9);
//     printArray(odd, 9);
//     return 0;
// }


// int main(){
//     int m,n;
//     cout<<"Enter 2d array: ";
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0; i<=m; i++){
//         for(int j=0; j<=n; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0; i<=m; i++){
//         for(int j=0; j<=n; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int no=5;
//     for(int i=1; i<=no; i++){
        
//         for(int j=i; j<=no; j++){
//             cout<<j<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }


// int reverse(int arr[], int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int printArray(int arr[], int n){
//     for(int i=0; i<=n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr[5]={4,5,7,8,9};
//     int newArr[4]={10, 16, 19, 18};

//     reverse(arr, 5);
//     reverse(newArr, 4);
    
//     printArray(arr, 5);
//     printArray(newArr, 4);

//     return 0;
// }
// bool search(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]={5,7,-2,10,22,0,5,22,1};

//     int key;
//     cin>>key;
//     bool found=search(arr, 10, key);
//     if(found){
//         cout<<" Key is present: "<<endl;
//     }else{
//         cout<<" key is absent"<<endl;
//     }
//     return 0;
// }
// int updateArr(int arr[], int n){
//     arr[1]=16;
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<"Going to 2nd function"<<endl;
// } 
// int myFun(int ar[], int n){
//     ar[0]=36;
//     for(int i=0; i<5; i++){
//         cout<<ar[i]<<" ";
//     }cout<<endl;
//     cout<<"going to main function"<<endl;
// }
// int main(){
//     int arr[4]={4,5,10,9};
//     cout<<"Goin to updateArr function"<<endl;
//     updateArr(arr, 4);
//     int ar[5]={1,2,3,4,5};
//     myFun(ar, 5);
//     cout<<"Print in main function";
//     return 0;
// }
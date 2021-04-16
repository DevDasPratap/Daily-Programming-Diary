//Pattarn
#include<iostream>
using namespace std;

int main(){
int row, column;
cout<<"Enter a number: ";
cin>>row>>column;

for(int i=1; i<=row; i++){
    for(int j=1; j<=column; j++){
            if(i==1 or i==row){
                cout<<"*";
            }
            else if(j==1 or j==column){
                cout<<"*";
            }
         else{
            cout<<" ";
         }

    }
    cout<<endl;
}
system("pause");
return 0;
}

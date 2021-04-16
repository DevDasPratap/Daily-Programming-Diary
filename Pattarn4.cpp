
//Pattarn
#include<iostream>
using namespace std;

int main(){
int row;

cout<<"Enter a number: ";
cin>>row;

for(int i=1; i<=row; i++){
    for(int j=1; j<=i; j++){
        cout<<i;
    }
    cout<<endl;
}

system("pause");
return 0;
}

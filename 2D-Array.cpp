#include<bits/stdc++.h>  
using namespace std;

int main(){
//2D array

int row, col;
cout << "Enter numbers of row: ";
cin>>row;
cout << "Enter numbers of column: ";
cin>>col;
int numbers[row][col];
for (int i = 0; i <row; ++i) {
        for (int j = 0; j <col; ++j) {
          cout<<"Enter row number: "<<i<<" and column number "<<j<<" array item: ";
            cin >> numbers[i][j];
        }
    }
    cout << "The numbers are: " << endl;
    //  Printing array elements
    for (int i = 0; i <row; ++i) {
        for (int j = 0; j <col; ++j) {
            cout << "Element numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }
  return 0;
}

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
 #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
  
int array[11], max=0, min= array[0];
for (int i = 0; i < 10; ++i)
{
	cin>>array[i];
}
for (int i = 0; i < 10; ++i)
{
	if (array[i]>max)
	{
		max=array[i];
	}
}
for (int i = 0; i < 10; ++i)
{
	if (array[i]<min)
	{
		min=array[i];
	}
}
cout<<max<<endl;
cout<<min<<endl;


   return 0 ;
}

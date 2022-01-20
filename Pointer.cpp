#include <bits/stdc++.h>

using namespace std;

void print(int *point){
    cout<<"Pass pointer in function: "<<point<<endl;
    cout<<"Pass pointer in function: "<<*point<<endl;
    cout<<"Pass pointer in function: "<<&point<<endl;
}
void update(int *point){
    point=point+1;
    cout<<"Update point: "<<point<<endl;
}
int main(){
    int num=5;
    int a=num;
    cout<<"Before: "<<num<<endl;
    a++;
    cout<<"After: "<<num<<endl;

    int *p=&num;
    cout<<"Before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;

    int *q=p;
    cout<<p<<" -- "<<q<<endl;
    cout<<*p<<" -- "<<*q<<endl;

    int arr[10]={1,2,4,5,7,8,9,10};

    cout<<"Address of first memory block:  "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block: "<<&arr[0]<<endl;
    cout<<"4rd: "<<*arr<<endl;
    cout<<"5th: "<<*arr+1<<endl;
    cout<<"6th: "<<*(arr+1)<<endl;
    cout<<"7th: "<<*(arr)+1<<endl;
    cout<<"8th: "<<arr[2]<<endl;
    cout<<"9th: "<<*(arr+2)<<endl;

    int temp[10];
    cout<<"1st size: "<<sizeof(temp)<<endl;
    cout<<"2nd size: "<<sizeof(*temp)<<endl;
    cout<<"3rd size: "<<sizeof(&temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    int ar[10];
    int *pt=&ar[0];
    cout<<pt<<endl;
    pt=pt+1;
    cout<<pt<<endl;

    int array[5]={1,2,3,4,5};
    char ch[5]="abcd";
    cout<<array<<endl;
    cout<<ch<<endl;
    char *c=&ch[0];
    cout<<c<<endl;
    char tem='z';
    char *pp=&tem;
    cout<<pp<<endl;

    int value=5;
    int *point=&value;
    print(point);
    cout<<"Before update: "<<point<<endl;
    update(point);
    cout<<"After update: "<<point<<endl;
}

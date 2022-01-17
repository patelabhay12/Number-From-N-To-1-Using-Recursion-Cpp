// Number From n TO 1
#include<iostream>
using namespace std;
int fun1(int );
int fun1(int num){
    if(num>0){
        cout<<num<<endl;
        fun1(num-1);

    }
}

int main()
{
    int num;
    cout<<"Enter Your Number :"<<endl;
    cin>>num;
    cout<<"Numbers Are :"<<endl;
    fun1(num);
    return 0;

    
}
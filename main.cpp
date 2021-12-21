#include <iostream>
#include<stdio.h>
using namespace std;
int sub_op(int x,int y);
int main()
{

    int num1=9979684387687861483,num2=16867686876161786;
    cin>>num1;
    cin>>num2;
    printf("%i  :010",sub_op(num1,num2));
    return 0;
}

int sub_op (int x,int y){
    int i=0,zi=0,z=0,mx=0,c=0,result=0;
    z=x+y;
    if(x>y){
        mx=2*x;
        for(i=1;(z+c)<mx;i*=2){
            if((z+zi+i)>mx){
                i=1;
            }
            c+=i;
            zi+=i;
        }
        result=c;
    }
    else{
        mx=2*y;
        for(i=1;(z+c)<mx;i*=2){
            if((z+zi+i)>mx){
                i=1;
            }
            c+=i;
            zi+=i;
        }
        result=-c;
    }
    return result;
}

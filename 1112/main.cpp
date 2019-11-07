//读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。
#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    printf("%8d ",a);
    printf("%8d ",b);
    printf("%8d",c);
    return 0;
}
// 计算公式1/(1/r1 + 1/r2)
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    float r1,r2,R;
    cin>>r1>>r2;
    R=1/(1/r1+1/r2);
    printf("%.2f",R);
    return 0;
}
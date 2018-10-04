#include<bits/stdc++.h>
#pragma pack(1)
using namespace std;
struct A
{
int b;char c;
};
int main()
{
time_t start,end;
time(&start);

int a = 017;
cout<<a<<endl;
A b;
cout<<sizeof(A)<<endl;
time(&end);
cout<<(double)(end-start)<<endl;
}

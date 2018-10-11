#include<bits/stdc++.h>
using namespace std;
int main()
{
map <char,int> m;
m['c'] = 1;m['d']  =1;
int cur = 97;
int ans = 2,c;

// CODE FOR BUILDING THE MAP
while(1)
{
c = 0;
while(cur<=122 && c!=3 )
{
m[(char)cur] = ans;
++cur;++c;
}
if(cur == 123) break;
++ans;
}
for(cur = 97;cur <= 122;cur++)
{
cout<<(char)cur<<" "<<m[(char)cur]<<endl;
}

// code for converting word to number

cout<<"enter the word"<<endl;
string s;
cin>>s;
cout<<"the number conversion is "<<endl;
for(int i=0;i<s.length();i++)
{
cout<<m[s[i]]<<" ";
}


}

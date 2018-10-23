#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
	static	int x;int y;
		A(int y)
		{
		this->y = y;
		}
		static void display();
};
void A::display()
{
cout<<x<<endl;
}
int main()
{
A::display();
}

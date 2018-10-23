#include<bits/stdc++.h>
using namespace std;
class A
{
	int a;

	public:

	static int x;
	A (int y)
	{a  =y;
	}
	static void display();
};
void A::display()
{
cout<<x<<endl;
cout<<"statis"<<endl;
}
int main()
{
	A a(2);
	a.x = 3;
	a.display();
}

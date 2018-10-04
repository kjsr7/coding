class A
{
	static A a = null;
	private A()
	{
	System.out.println("private constructor");
	}
	static A fun()
	{
	if(a == null)
		return new A();
	return a;
	}
	int a1,b1;
	void fun2(int c,int d)
	{
	a1 = c;b1= d;
	}

}
class B
{
public static void main(String args[])
{
	System.out.println("jai");
	A a = A.fun();
	a.fun2(1,2);
	A b = A.fun();
	System.out.println(b.a1+" "+b.b1);

	
}
}

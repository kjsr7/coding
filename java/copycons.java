class A
{
	int a,b;
	A(int a,int b)
	{
	this.a = a; this.b = b;
	}
	void set(int a,int b)
	{
	this.a = a;this.b = b;
	}
	void display()
	{
	System.out.println(a + " "+ b);
	}
	public static void main(String args[])
	{
	A o = new A(1,2); o.set(1,2);o.display();


	}

}

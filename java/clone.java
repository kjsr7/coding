
class C implements Cloneable
{
	int a = 2;
	 C()
	{
	System.out.println("cons called");
	}
	public C clone() throws CloneNotSupportedException
	{
	return (C)super.clone();
	}
	void display()
	{
	System.out.println(a);
	}
	public static void main(String args[])
	{
//	System.out.println("jai");
	C c = new C();
	c.display();
	C c1;
	try{
	 c1 = c.clone();
	c1.display();
	}
	catch(Exception e)
	{
	e.printStackTrace();
	}
	}

}

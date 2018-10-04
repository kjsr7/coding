class A
{
int a,b;
A()
{

}
A(A c)
{
this.a = c.a;
this.b = c.b;
}
A(int a,int b)
{
this.a  = a;this.b = b;
}
void display()
{
System.out.println(a +" "+b);
}
public static void main(String args[])
{

A c = new A(1,2);
A d = new A(c);
d.display();
}

}

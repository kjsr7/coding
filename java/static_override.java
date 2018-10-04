class A
{
static void display()
{
System.out.println("A");

}


}
class B extends A
{
static void display()
{
System.out.println("B");
}
}
class C
{
public static void main(String args[])
{
A a = new B();
a.display();

}
}

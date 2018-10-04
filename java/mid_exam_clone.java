class P
{
private char[]fn;
private Boolean shared = false;
P(String fn) {
	this.fn = fn.toCharArray();
}
final void replace()
{
if(!shared)
	for(int i=0;i<fn.length;i++) fn[i] = 'x';

}
final String get()
{
if(!shared) {shared = true; return String.valueOf(fn);}
else
	throw new IllegalStateException("failed");
}
final void print()
{
System.out.println(String.valueOf(fn));
}
}
class C extends P implements Cloneable
{
protected C(String fn) {super(fn);}
public C clone()
{
C s = null;
try{ s = (C)super.clone();}
catch(Exception e) {System.out.println("ouiewbf");}
return s;
}
public static void main(String args[])
{
C ms1 = new C("myfile.txt");
C ms2 = ms1.clone();
String s = ms1.get();
System.out.println(s);
ms1.replace();ms1.print();
ms2.replace();
ms1.print();
ms2.print();
}

}


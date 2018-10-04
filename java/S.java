import java.io.*;
class S implements Serializable
{
S()
{
System.out.println("cons called");

}
void display()
{
System.out.println("jai");
}
public static void main(String args[])
{
	S s = new S();
	try{
	ObjectOutputStream o = new ObjectOutputStream(new FileOutputStream("data.obj"));
	o.writeObject(s);}
	catch (IOException e)
	{
	e.printStackTrace();
	}

	try
	{

	ObjectInputStream i = new ObjectInputStream(new FileInputStream("data.obj"));
	try{
	S s2 = (S) i.readObject();
	s2.display();
	}
	catch(ClassNotFoundException e)
	{
	e.printStackTrace();
	}

	}
	catch(IOException e)
	{
	e.printStackTrace();
	}


}

}

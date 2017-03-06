/* 
http://ideone.com/xSZOQT
1.2.3.01
Using Java, read in a double
(e.g. 1.4732, 15.324547327, etc.)
echo it, but with a minimum field width of 7 and 3 digits after the decimal point
(e.g. ss1.473 (where ‘s’ denotes a space), s15.325, etc.)
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		double d = sc.nextDouble();
		System.out.printf("%7.3f\n", d);
	}
}


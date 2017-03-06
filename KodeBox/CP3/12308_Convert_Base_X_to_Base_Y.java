/*
http://ideone.com/dHzQvU
1.2.3.9
Given a string that represents a base X number, convert it to an equivalent string in
base Y, 2 ≤ X, Y ≤ 36. For example: “FF” in base X = 16 (hexadecimal) is “255” in
base Y1 = 10 (decimal) and “11111111” in base Y2 = 2 (binary).
*/
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String str = "FF";
		System.out.println(new BigInteger(str, 16).toString(10));
		System.out.println(new BigInteger(str, 16).toString(2));
	}
}
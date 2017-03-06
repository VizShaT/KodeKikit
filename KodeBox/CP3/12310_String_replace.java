/*
http://ideone.com/mmSOR3
1.2.3.10

Let’s define a ‘special word’ as a lowercase alphabet followed by two consecutive digits.
Given a string, replace all ‘special words’ of length 3 with 3 stars “***”, e.g.
S = “line: a70 and z72 will be replaced, aa24 and a872 will not”
should be transformed into:
S = “line: *** and *** will be replaced, aa24 and a872 will not”.
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String S = "line: a70 and z72 will be replaced, aa24 and a872 will not";
		System.out.println(S.replaceAll("(^| )+[a-z][0-9][0-9]( |$)+", " *** "));
	}
}
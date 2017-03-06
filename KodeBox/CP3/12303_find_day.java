/*
http://ideone.com/DEGPJV
1.2.3.03
Given a date, determine the day of the week (Monday, . . . , Sunday) on that day.
(e.g. 9 August 2010— Monday.)
*/
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String[] names = new String[] { "", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
		int year, month, day;
		Scanner sc = new Scanner(System.in);
		year = sc.nextInt();
		month = sc.nextInt();
		day = sc.nextInt();
		
		Calendar calendar = new GregorianCalendar(year, month-1, day);
		System.out.println(names[calendar.get(Calendar.DAY_OF_WEEK)]);
	}
}
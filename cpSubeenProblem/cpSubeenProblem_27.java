/*
 * http://cpbook.subeen.com/2013/01/sort-them-all.html
 */
package solvingcpsubeen;

/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);

        int terms;
        terms = scan.nextInt();

        for (int i = 0; i < terms; i++) {

            int num1 = scan.nextInt();
            int num2 = scan.nextInt();
            int num3 = scan.nextInt();
            int temp;
            int[] arr = new int[3];

            try {
                if (num1 < num2) {
                    arr[0] = num1;
                    arr[1] = num2;
                } else {
                    arr[0] = num2;
                    arr[1] = num1;
                }

                if (arr[1] < num3) {
                    arr[2] = num3;
                } else {
                    if (arr[0] > num3) {
                        temp = arr[1];
                        arr[1] = arr[0];
                        arr[2] = temp;
                        arr[0] = num3;
                    } else {
                        temp = arr[1];
                        arr[1] = num3;
                        arr[2] = temp;
                    }
                }

                System.out.println("Case " + (i + 1) + ": " + arr[0] + " " + arr[1] + " " + arr[2]);

            } catch (Exception e) {
                System.out.println(e);
            }
        }
	}
}
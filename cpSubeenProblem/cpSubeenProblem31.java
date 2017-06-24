/*
 * http://cpbook.subeen.com/2013/01/vajok.html
 */
package solvingcpsubeen;

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone {

    public static void main(String[] args) throws java.lang.Exception {
        Scanner scan = new Scanner(System.in);

        int terms, inputNumber;

        try {
            terms = scan.nextInt();

            for (int i = 1; i <= terms; i++) {

                inputNumber = scan.nextInt();

                System.out.print("Case " + i + ":");

                for (int j = 1; j <= inputNumber; j++) {

                    if (inputNumber % j == 0) {

                        System.out.print(" " + j);
                    }
                }
                System.out.println("");

            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

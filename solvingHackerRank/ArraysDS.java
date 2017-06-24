/*
 * https://www.hackerrank.com/challenges/arrays-ds
 */
package solvinghackerrank;

import java.util.*;

/**
 *
 * @author sisir
 */
public class SolvingHackerRank {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int arrSize = scan.nextInt();
        int[] initalArray = new int[arrSize];
        int[] reverseArray = new int[arrSize];
        int temp;
        boolean space = false;

        try {

            for (int i = 0; i < arrSize; i++) {
                initalArray[i] = scan.nextInt();
                temp = initalArray[i];
                                
                reverseArray[(arrSize-1)-i] = temp;  
            }
            
            for (int i = 0; i < reverseArray.length; i++) {
                if(space){ System.out.print(" ");}
                space = true;
                System.out.print(reverseArray[i]);
            }
            
            
        } catch (Exception e) {
            System.out.println(e);
        }

    }

}

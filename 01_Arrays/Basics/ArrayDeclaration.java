package Basics;

import java.util.Scanner;
public class ArrayDeclaration {
    public static void main(String[] args){

        // Declaration of Array

        // int[] arr = new int[4];
        // arr[0] = 1;
        // arr[1] = 2;
        // arr[2] = 3;
        // arr[3] = 4;

        // int[] arr = {1,2,3,4};
        
        int[] arr = new int[7]; // Declaration of Array with size 7
        
        IO.println(arr.length); // Length of Array
        Scanner sc = new Scanner(System.in); // Scanner Object to take input from user
        for(int i=0; i<arr.length; i++){
            IO.print("Enter Element : ");
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            IO.println(ele);
        }

        sc.close();
    }
}
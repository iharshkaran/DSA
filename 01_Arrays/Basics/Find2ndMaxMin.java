package Basics;

import java.util.Scanner;

public class Find2ndMaxMin {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        IO.print("Enter the size of Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            IO.print("Enter Element at index " + i + " : ");
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            IO.print(ele + " ");
        }
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        int SecMax = max;
        for(int i=0; i<n; i++){
            SecMax = max;
            if(max<arr[i]) max = arr[i];
        }

        IO.println("\n"+SecMax);
    }
}
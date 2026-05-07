package Basics;

import java.util.Scanner;

public class SumOfArray {
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
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        IO.print("\nSum of Array will be "+sum);

    }
}

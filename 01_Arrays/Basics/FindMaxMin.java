package Basics;

import java.util.Scanner;

public class FindMaxMin {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            System.out.print("Enter Element at index " + i + " : ");
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            System.out.print(ele + " ");
        }
        System.out.println();
        // max 
        System.out.println("max element is "+ max(arr));
        // min
        System.out.println("min element is "+ min(arr));

        sc.close();
    }

    // Max
    public static int max(int[] arr){
        int max = Integer.MIN_VALUE;
        for(int i=0; i<arr.length; i++){
            if(max<arr[i]) max = arr[i];
        }
        return max;
    }

    // Min
    public static int min(int[] arr){
        int min = Integer.MAX_VALUE;
        for(int i=0; i<arr.length; i++){
            if(min>arr[i]) min = arr[i];
        }
        return min;
    }
}

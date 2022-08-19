package libraryUse;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Second {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = 5;
        int[] numbers = new int[5];
        // List をつかった場合
        // ArrayList<Integer> list = new ArrayList<>();
        for (int i=0; i<5; i++) {
            numbers[i] =  input.nextInt();
            // list.add(input.nextInt());
        }
        Arrays.sort(numbers);
        // Collections.sort(list);
        System.out.println(numbers[n-2]);
        // System.out.println(list.get(n-2));
    }
}

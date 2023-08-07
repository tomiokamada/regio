package maxRange;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

class TripleLoop {
    public static void main(String[] args) throws IOException {
        // debug 時はファイルから読み込みのが楽
        // System.setIn(new FileInputStream("maxRange/input/input1.txt"));
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] numbers = new int[n];
        for(int i=0; i<n; i++){
            numbers[i] = input.nextInt();
        }
        int maxSum = 0;
        for (int from = 0; from <= n - 1; from++) {
            for (int to = from + 1; to <= n; to++) {
                int sum = 0;
                for (int i = from; i < to; i++) {
                    sum += numbers[i];
                }
                if (sum > maxSum) maxSum = sum;
            }
        }
        System.out.println(maxSum);
    }
}
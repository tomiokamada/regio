package maxRange;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

class Dp {
    public static void main(String[] args) throws IOException {
        // debug 時はファイルから読み込みのが楽
        // System.setIn(new FileInputStream("maxRange/input/input1.txt"));
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] numbers = new int[n];
        for(int i=0; i<n; i++){
            numbers[i] = input.nextInt();
        }
        int maxS = 0;
        int Si = 0;

        for (int i = 0; i < n; i++) {
            int prevSi = Si;
            int s = prevSi + numbers[i];
            if (s > 0)
                Si = s;
            else
                Si = 0;
            if (Si > maxS) maxS = Si;
        }
        System.out.println(maxS);
    }
}
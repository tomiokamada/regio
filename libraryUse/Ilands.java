package libraryUse;

import java.awt.*;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;
import java.util.Stack;


public class Ilands {
    private final int w;
    private final int h;
    int[][] c;
    static Point[] directions =  {new Point(1, 0), new Point(-1, 0), new Point(0, 1), new Point(0, -1),
        new Point(1, 1), new Point(-1, -1), new Point(-1, 1), new Point(1, -1),
    };
    private int numLands;


    public Ilands(int w, int h, Scanner input) {
        this.w=w; this.h=h;
        c = new int[h][w];
        for(int i=0; i<h; i++) {
            for (int j = 0; j < w; j++) {
                c[i][j] = input.nextInt();
                if(c[i][j]>0) numLands++;
            }
        }
    }
    Point searchOne() {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (c[i][j] > 0) return new Point(j, i);
            }
        }
        throw new RuntimeException("should not happen!");
    }
    boolean rangeOut(Point p) {
        return p.x < 0 || p.x >= w || p.y < 0 || p.y >= h;
    }
    void delLand(Point p) {
        c[p.y][p.x] = 0;
        numLands--;
    }
    private int solve() {
        int numIlands = 0;
        Stack<Point> searching = new Stack<>();
        while(numLands>0) {
            numIlands++;
            Point first = searchOne();
            searching.push(first);
            delLand(first);
            while(!searching.empty()) {
                Point one = searching.pop();
                for(Point direct1: directions) {
                    Point next = new Point(one.x+direct1.x, one.y+direct1.y);
                    if(rangeOut(next)) continue;
                    if(c[next.y][next.x] > 0) {
                        delLand(next);
                        searching.push(next);
                    }
                }
            }
        }
        return numIlands;
    }


    public static void main(String[] args) throws IOException {
        // debug 時はファイルから読み込みのが楽
        // System.setIn(new FileInputStream("libraryUse/data4ilands/sample.in"));
        Scanner input = new Scanner(System.in);
        while(true) {
            int w = input.nextInt();
            int h = input.nextInt();
            if (w == 0 && h == 0) return;
            int result = new Ilands(w, h, input).solve();
            System.out.println(result);
        }
    }
}

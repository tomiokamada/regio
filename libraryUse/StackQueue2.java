package libraryUse;

import java.awt.*;
import java.util.ArrayDeque;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Stack;

public class StackQueue2 {
    static Point samplePoint(int i) {
        int val = 3 * i % 10;
        return new Point(val, 10 - val);
    }
    public static void main(String[] args) {
        Stack<Point> stack = new Stack<>();
        Queue<Point> queue = new ArrayDeque<>();
        // priority queue としては y の大きい順
        PriorityQueue<Point> priQ = new PriorityQueue<>((a,b)->Integer.compare(b.y, a.y));

        for (int i = 1; i < 10; i++) {
            Point val = samplePoint(i);
            stack.add(val);
            queue.add(val);
            priQ.add(val);
        }
        System.out.println("stack:");
        while(!stack.isEmpty()) {
            System.out.println(" " + stack.pop());
        }
        System.out.println();

        System.out.println("queue:");
        while(!queue.isEmpty()) {
            System.out.println(" " + queue.remove());
        }
        System.out.println();

        System.out.println("priQ:");
        while(!priQ.isEmpty()) {
            System.out.println(" " + priQ.remove());
        }
        System.out.println();
    }
}

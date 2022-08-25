package libraryUse;

import java.util.*;

public class StackQueue {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        Queue<Integer> queue = new ArrayDeque<>();
        PriorityQueue<Integer> priQ = new PriorityQueue<>();
        PriorityQueue<Integer> priQ2 = new PriorityQueue<>((a,b)->Integer.compare(b,a));
        for (int i = 1; i < 10; i++) {
            int val = 3 * i % 10;
            stack.add(val);
            queue.add(val);
            priQ.add(val);
            priQ2.add(val);
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

        System.out.println("priQ2:");
        while(!priQ2.isEmpty()) {
            System.out.println(" " + priQ2.remove());
        }
        System.out.println();
    }

}

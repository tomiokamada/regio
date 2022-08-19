package libraryUse;

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

class SortOrders {
    public static void main(String[] args) throws IOException {
        // debug 時はファイルから読み込みのが楽
        //System.setIn(new FileInputStream("libraryUse/data4sortOrders/input/input5.txt"));
        Scanner input = new Scanner(System.in);
        TreeMap<String, Integer> orders = new TreeMap<>((a, b)->{
            int result = Integer.compare(a.length(), b.length());
            if(result!=0) return result;
            return a.compareTo(b);
        });
        int n = input.nextInt();
        for(int i=0; i<n; i++){
            String name = input.next();
            int num = input.nextInt();
            int prev = orders.getOrDefault(name, 0);
            orders.put(name, prev+num);
        }
        orders.forEach((key, val)->{
            System.out.println(key + " " + val);
        });
        // あるいは
        //for(Map.Entry<String, Integer> entry: orders.entrySet()) {
        //   System.out.println(entry.getKey() + " " + entry.getValue());
        //}

    }
}
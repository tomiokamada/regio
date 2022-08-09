package samples;

public class DebugTest0 {
    public static void main(String[] args) {
        double result = 0.0;
        for (int i = 1; i < 10; i++) {
            float tmp = 1 / i;
            result = result + tmp;
        }
        System.out.println("result = " + result);
    }
}

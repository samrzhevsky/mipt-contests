import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        float a = s.nextFloat();
        float b = s.nextFloat();
        float eps = 0.1f;

        if (Math.abs(a - b) <= eps)
            System.out.print("YES");
        else
            System.out.print("NO");

        s.close();
    }
}
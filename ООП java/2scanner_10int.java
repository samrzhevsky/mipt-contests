import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = 0;
        while (s.hasNext()) {
            if (s.hasNextInt()) {
                s.nextInt();
                ++n;
            } else {
                n = 0;
                break;
            }
        }

        System.out.print(n == 10 ? "YES" : "NO");

        s.close();
    }
}
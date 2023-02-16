import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int a = s.nextInt();
        if (a >= -25 && a < 37) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }

        s.close();
    }
}
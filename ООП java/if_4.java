import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int a = s.nextInt();
        if (a < 37 || a >= 146) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }

        s.close();
    }
}
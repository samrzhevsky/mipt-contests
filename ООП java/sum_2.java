import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int k = s.nextInt();
        int n = s.nextInt();

        System.out.print(18 + ((n - k) / 33));

        s.close();
    }
}
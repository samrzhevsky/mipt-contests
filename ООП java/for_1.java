import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += s.nextInt();
        }

        System.out.print(res);

        s.close();
    }
}
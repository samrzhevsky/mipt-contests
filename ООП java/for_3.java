import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        for (int i = 0; i < n; i++) {
            int a= s.nextInt();
            if (a % 2 != 0) {
                System.out.print(a + " ");
            }
        }

        s.close();
    }
}
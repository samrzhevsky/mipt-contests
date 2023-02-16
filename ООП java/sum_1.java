import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int k = s.nextInt();
        System.out.println(k - n);

        s.close();
    }
}
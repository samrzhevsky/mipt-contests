import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int a = s.nextInt();
        int b = s.nextInt();

        if (a > b)
            System.out.print(b);
        else
            System.out.print(a);

        s.close();
    }
}
import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int k = s.nextInt();
        int h = 480 + (k * 45);
        if (k > 1)
            h += (k - 1) * 5;
        System.out.printf("%02d:%02d", h / 60, h % 60);

        s.close();
    }
}
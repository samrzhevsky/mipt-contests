import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int sum = 0;
        int k = 0;

        while (s.hasNextInt()) {
            sum += s.nextInt();
            k++;
        }

        System.out.println((double) sum / (double) k);

        s.close();
    }
}

import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = Integer.parseInt(s.nextLine());
        int[] sum = new int[53];
        int v = 0;

        for (int i = 0; i < n; i++) {
            String num50str = new StringBuilder(s.nextLine()).reverse().toString();

            for (int j = 0; j < 50; j++) {
                int k = sum[j] + Character.getNumericValue(num50str.charAt(j)) + v;
                sum[j] = k % 10;
                v = k / 10;
            }

            for (int j = 50; j < 53; j++) {
                int k = sum[j] + v;
                sum[j] = k % 10;
                v = k / 10;
            }
        }

        int k = 0;
        for (int i = 52; i >= 0; i--) {
            if (sum[i] == 0 && i > 49) continue;
            else if (k >= 10) break;

            ++k;
            System.out.print(sum[i]);
        }

        s.close();
    }
}
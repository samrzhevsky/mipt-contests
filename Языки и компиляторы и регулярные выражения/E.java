import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        String[] time1 = scn.nextLine().split("[:]");
        String[] time2 = scn.nextLine().split("[:]");

        int h1 = Integer.parseInt(time1[0]);
        int m1 = Integer.parseInt(time1[1]);

        int h2 = Integer.parseInt(time2[0]);
        int m2 = Integer.parseInt(time2[1]);

        int h3 = (h1 + h2 + (m1 + m2) / 60) % 24;
        int m3 = (m1 + m2) % 60;

        System.out.printf("%02d:%02d", h3, m3);

        scn.close();
    }
}

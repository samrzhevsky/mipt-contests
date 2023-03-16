import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        scn.nextLine();
        int[] experiments = new int[n];

        for (int i = 0; i < n; ++i) {
            String[] experiment = scn.nextLine().split("[\\s]");
            String[] timeStart = experiment[0].split("[:]");

            int tsh = Integer.parseInt(timeStart[0]);
            int tsm = Integer.parseInt(timeStart[1]);
            int time = Integer.parseInt(experiment[1]);

            int th = (tsh * 60) + tsm + time;
            int trh = (th / 60) % 24;
            int trm = th % 60;

            experiments[i] = (trh * 60) + trm;
        }

        Arrays.sort(experiments);

        for (int i = 0; i < n; ++i) {
            System.out.printf("%02d:%02d\n", (experiments[i] / 60) % 24, experiments[i] % 60);
        }

        scn.close();
    }
}
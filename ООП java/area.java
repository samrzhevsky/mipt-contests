import java.util.Scanner;

public class Main {
    private static class Point {
        public int x;
        public int y;

        public Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        double res = 0;
        int n = s.nextInt();
        Point[] pts = new Point[n];

        for (int i = 0; i < n; ++i)
            pts[i] = new Point(s.nextInt(), s.nextInt());

        for (int i = 0; i < n; ++i) {
            Point p1 = i != 0 ? pts[i - 1] : pts[n - 1];
            Point p2 = pts[i];

            res += (p1.x - p2.x) * (p1.y + p2.y);
        }

        System.out.print(Math.abs(res) / 2);

        s.close();
    }
}
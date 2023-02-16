import java.util.Scanner;

class Coord {
    public int x;
    public int y;

    public void print() {
        System.out.println("(" + x + "," + y + ")");
    }

    void read(Scanner s) {
        x = s.nextInt();
        y = s.nextInt();
    }

    double length(Coord a) {
        return Math.sqrt(Math.pow(x - a.x, 2) + Math.pow(y - a.y, 2));
    }

    static double length(Coord a, Coord b) {
        return Math.sqrt(Math.pow(a.x - b.x, 2) + Math.pow(a.y - b.y, 2));
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        Coord t1 = new Coord();
        Coord t2 = new Coord();

        t1.x = s.nextInt();
        t1.y = s.nextInt();

        t2.x = s.nextInt();
        t2.y = s.nextInt();

        double res;

        res = t1.length(t2);
        System.out.println(res);

        // res = Coord.length(t1, t2);
        // System.out.println(res);
    }
}

class Main {
    public static void main(String args[]) {
        Coord.main(args);
    }
}
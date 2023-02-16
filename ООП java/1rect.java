import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Rect.main(args);
    }
}

class Coord {
    public int x;
    public int y;
    Coord() {}
}

class Direction {
    public int dx;
    public int dy;

    Direction(Scanner s) {
        dx = s.nextInt();
        dy = s.nextInt();
    }
}

class Rect {
    public Coord lt;
    public Coord rb;

    Rect(Scanner s) {
        lt = new Coord();
        rb = new Coord();

        lt.x = s.nextInt();
        lt.y = s.nextInt();
        rb.x = s.nextInt();
        rb.y = s.nextInt();
    }

    void print() {
        System.out.printf("%d %d %d %d", lt.x, lt.y, rb.x, rb.y);
    }

    void move(Direction d) {
        lt.x += d.dx;
        rb.x += d.dx;

        lt.y += d.dy;
        rb.y += d.dy;
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        Rect r = new Rect(s);
        Direction d = new Direction(s);

        r.move(d);
        r.print();
    }
}
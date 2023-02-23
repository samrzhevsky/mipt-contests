import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String n = s.nextLine();
        for (int i = 0; i < n.length(); ++i) {
            switch (n.charAt(i)) {
                case '0':
                    System.out.print("---");
                    break;
                case '1':
                    System.out.print("--x");
                    break;
                case '2':
                    System.out.print("-w-");
                    break;
                case '3':
                    System.out.print("-wx");
                    break;
                case '4':
                    System.out.print("r--");
                    break;
                case '5':
                    System.out.print("r-x");
                    break;
                case '6':
                    System.out.print("rw-");
                    break;
                case '7':
                    System.out.print("rwx");
                    break;
            }
        }

        s.close();
    }
}
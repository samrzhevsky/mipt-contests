import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        byte a = (byte) s.nextInt();
        int b = Byte.toUnsignedInt(a);
        System.out.println(String.format("%8s", Integer.toBinaryString(b)).replaceAll(" ", "0"));

        s.close();
    }
}
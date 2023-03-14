import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] ip = sc.nextLine().split("[.]");
        String[] mask = sc.nextLine().split("[.]");

        int ip_a = Integer.parseInt(ip[0]);
        int ip_b = Integer.parseInt(ip[1]);
        int ip_c = Integer.parseInt(ip[2]);
        int ip_d = Integer.parseInt(ip[3]);

        int m_a = Integer.parseInt(mask[0]);
        int m_b = Integer.parseInt(mask[1]);
        int m_c = Integer.parseInt(mask[2]);
        int m_d = Integer.parseInt(mask[3]);

        int w_a = ~m_a & 0xff;
        int w_b = ~m_b & 0xff;
        int w_c = ~m_c & 0xff;
        int w_d = ~m_d & 0xff;

        System.out.printf("%d.%d.%d.%d", ip_a | w_a, ip_b | w_b, ip_c | w_c, ip_d | w_d);

        sc.close();
    }
}

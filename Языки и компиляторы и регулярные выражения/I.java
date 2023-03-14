import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String contig = sc.nextLine();
        String dna = sc.nextLine();
        int count = 0;

        for (int i = 0; i <= dna.length() - contig.length(); ++i) {
            if (dna.substring(i, i + contig.length()).equals(contig)) {
                ++count;
            }
        }

        System.out.println(count);

        sc.close();
    }
}

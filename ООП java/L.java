import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int m = s.nextInt();
        int k = s.nextInt();

        int[][][] A = new int[n][m][k];
        int[][][] S = new int[n][m][k];

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                for (int l = 0; l < k; ++l)
                    A[i][j][l] = s.nextInt();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int l = 0; l < k; ++l) {
                    S[i][j][l] = A[i][j][l];

                    if ((j-1) >= 0 && (j-1) < m)
                        S[i][j][l] -= A[i][j-1][l];

                    if ((l-1) >= 0 && (l-1) < k)
                        S[i][j][l] -= A[i][j][l-1];

                    if ((j-1) >= 0 && (j-1) < m && (l-1) >= 0 && (l-1) < k)
                        S[i][j][l] += A[i][j-1][l-1];

                    for (int t = 0; t <= i; ++t)
                        if ((t-1) >=0 && (t-1) < n)
                            S[i][j][l] -= S[t-1][j][l];
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int l = 0; l < k; ++l) {
                    System.out.print(S[i][j][l] + " ");
                }
                System.out.println();
            }
            System.out.println();
        }

        s.close();
    }
}
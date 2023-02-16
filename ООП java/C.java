public static class summator {
    private int A;
    private int B;
    private int Sum;

    public void set_a(int a) {
        A = a;
    }

    public void set_b(int b) {
        B = b;
    }

    public int calculate() {
        Sum = A + B;
        return Sum;
    }
}
public static class summator {
    private double A;
    private double B;
    private double Sum;

    public void set_a(int a) {
        A = a;
    }
    public void set_b(int b) {
        B = b;
    }
    public void set_a(double a) {
        A = a;
    }
    public void set_b(double b) {
        B = b;
    }

    public int calculate() {
        Sum = A + B;
        return (int)Sum;
    }

    public double getSum() {
        Sum = A + B;
        return Sum;
    }
}
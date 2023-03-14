import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        Stack<Character> stack = new Stack<>();
        String str = scn.nextLine();

        for (int i = 0; i < str.length(); ++i) {
            char c = str.charAt(i);
            if (c == '(') {
                stack.add(c);
            } else {
                if (stack.empty()) {
                    System.out.println("NO");
                    scn.close();
                    return;
                } else if (stack.peek() == '(' && c == ')') {
                    stack.pop();
                }
            }
        }

        System.out.println(stack.empty() ? "YES" : "NO");

        scn.close();
    }
}
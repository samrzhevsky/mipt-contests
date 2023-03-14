import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        String text;
        while (scn.hasNextLine()) {
            text = scn.nextLine();

            Pattern p = Pattern.compile("([A-Za-z0-9]{2}):([A-Za-z0-9]{2}):([A-Za-z0-9]{2}):([A-Za-z0-9]{2}):([A-Za-z0-9]{2}):([A-Za-z0-9]{2})");
            Matcher m = p.matcher(text);
            while (m.find()) {
                System.out.println(text.substring(m.start(), m.end()));
            }
        }

        scn.close();
    }
}

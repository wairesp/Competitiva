import java.util.Scanner;

public class Ejercicio1{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double value = scanner.nextDouble();
        String formattedValue = String.format("%7.3f", value);
        formattedValue = formattedValue.replace(' ', 's');
        System.out.println(formattedValue);
    }
}
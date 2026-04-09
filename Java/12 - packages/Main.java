import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name = myObj.nextLine();
        System.out.println("Name is " + name);

        System.out.print("Enter age: ");
        int age = myObj.nextInt();
        // if not an int it errors with InputMismatchException
        System.out.println("Age is " + age);
    }
}

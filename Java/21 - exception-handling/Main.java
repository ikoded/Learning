class Animal {
    int age = 12;

    String[] types = {"Cat","Cow","Pig"};
    public Animal() {
        System.out.println("I am an animal");
    }
}

/*
Different Exceptions:

ArithmeticError	Occurs when a numeric calculation goes wrong
ArrayIndexOutOfBoundsException	Occurs when trying to access an index number that does not exist in an array
ClassNotFoundException	Occurs when trying to access a class that does not exist
FileNotFoundException	Occurs when a file cannot be accessed
InputMismatchException	Occurs when entering wrong input (e.g. text in a numerical input)
IOException	Occurs when an input or output operation fails
NullPointerException	Occurs when trying to access an object referece that is null
NumberFormatException	Occurs when it is not possible to convert a specified string to a numeric type
StringIndexOutOfBoundsException	Occurs when trying to access a character in a String that does not exist

*/

public class Main {
    public static void main(String[] args){
        Animal anm = new Animal();
        System.out.println(anm.age);
        try {
            System.out.println(anm.types[3]);
        } catch (ArithmeticException | ArrayIndexOutOfBoundsException e){
            System.out.println("Array out of bounds exception");
            throw new ArithmeticException("Did not work"); // gets thrown last in logs, finally actually will print right before this
        } catch (Exception e){
            e.printStackTrace();
            throw(e);
        } finally {
            System.out.println("Can run code after try catch this way"); // runs last after try catch even if fail or pass
        }

        System.out.println("This will not run because throw makes fail happen, finally will run though");
    }
}
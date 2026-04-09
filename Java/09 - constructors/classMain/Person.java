package classMain;

public class Person {
    public int age;
    public String name;

    public Person(){
        this(1000, "Unknown"); // This needs to be in this order as they are defined int age then String name at top
    }

    public Person(String name){
        this(25, name);
    }

    public Person(int age, String name){
        this.name = name;
        this.age = age;
    }

    public void printNameAndAge(){
        System.out.println(name + " " + age);
    }

    public static void printHi(){
        System.out.println("Hi");
    }
}

import java.security.Permissions;

import classMain.*;

public class Second {
    public static void main(String[] args){
        Main obj = new Main(15);
        System.out.println(obj.x +"\n");

        Person person = new Person("Matt");
        System.out.println("Initialized person with just name Matt set, age defaults to 25");
        person.printNameAndAge();
        person.age = 28;
        System.out.println("Changed age to 28");
        person.printNameAndAge();
        System.out.println();

        Person personset = new Person(30,"Matt");
        personset.printNameAndAge();
        System.out.println();

        Person defaultperson = new Person();
        defaultperson.printNameAndAge();
        System.out.println();

        Person.printHi();
    }
}

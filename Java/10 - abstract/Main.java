abstract class Main {
    public String name = "Matt";
    public int age = 25;
    public abstract void study();

    public void printNameAndAge(){
        System.out.println(name + " " + age);
    }
}

class Student extends Main{
    public int gradYear = 2018;
    public void study(){
        System.out.println("Studying all day long");
    }

    public void printEverything(){
        System.out.println(name + " " + age + " " + gradYear);
    }
}
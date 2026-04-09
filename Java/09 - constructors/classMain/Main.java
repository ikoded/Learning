package classMain;

public class Main {
    public int x;

    public Main(int x){
        this.x = x;
    }

    public static void main(String[] args){
        Main obj = new Main(5);
        System.out.println(obj.x);

        Employee emp = new Employee();
        System.out.println(emp.name);
        // emp.age does not work as that variable is private to Employee class only
        // if want to access it, Employee needs getter/setter methods
    }
}

class Employee{
    public String name = "Matt";
    private int age = 25;
}

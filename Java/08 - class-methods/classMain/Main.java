package classMain;

public class Main {
    static void first() {
        System.out.println("First Method");
    }
    public void second(){
        System.out.println("Second Method");
    }

    public static void main(String[] args){
        first(); // static so you can call without creating object
        Main obj = new Main();
        obj.second();
    }
}

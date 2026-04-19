import java.util.*;

public class TreeSetExample {
    static TreeSet<String> cars = new TreeSet<>();
    TreeSet<String> trees = new TreeSet<>();

    public static void main(String[] args){
        cars.add("Mazda");
        cars.add("Alfa Romeo"); // added to first because treeset sorts

        // example of non static set called
        TreeSetExample example = new TreeSetExample();
        example.trees.add("Hello");

        for(String car: cars){
            System.out.println(car);
        }

        for(String tree: example.trees){
            System.out.println(tree);
        }
    }
}
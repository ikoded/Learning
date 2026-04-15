import java.util.*;

public class IteratorExample {
    static ArrayList<String> car1 = new ArrayList<>();
    static HashSet<String> car2 = new HashSet<>();
    static ArrayList<Integer> nums = new ArrayList<>();
    public static void main(String[] args){
        car1.add("Mazda");
        car1.add("BMW");

        car2.add("Lambroghini");
        car2.add("Ferarri");

        nums.add(5);
        nums.add(20);
        nums.add(12);

        IteratorExample example = new IteratorExample();

        Iterator<String> it1 = car1.iterator();
        example.printIterator(it1);

        Iterator<String> it2 = car2.iterator();
        example.printIterator(it2);

        Iterator<Integer> it3 = nums.iterator();
        example.printIterator(it3);
    }

    // Since no modification the <?> is perfect for printing
    // if altering the lists then should define Iterator<String> or Iterator<Integer>
    void printIterator(Iterator<?> it){
        while(it.hasNext()){
            System.out.println("- " + it.next());
        }
    }
}
class Animal {
    String type = "Animal";

    public void animalSound(){
        System.out.println("This is an animal sound");
    }

    Animal(){
        System.out.println("Animal Initial Example");
    }
}

class Pig extends Animal {
    String type = "Pig";

    @Override
    public void animalSound(){
        System.out.println("Animal type (super): " + super.type);
        super.animalSound();
        System.out.println("Animal type: " + type);
    }

    Pig() {
        super(); // Calls Animal()
        System.out.println("Pig Initial Example");
    }
}

public class Main {
    public static void main(String[] args){
        Animal anm = new Animal(); // Runs line 9
        anm.animalSound(); // Runs line 5

        Pig pig = new Pig(); // Runs line 9 with super() then line 25
        pig.animalSound(); // Runs line 18 to 20
    }
}
class Animal {
    public void animalSound(){
        System.out.println("Animal makes sound");
    }
}

class Pig extends Animal {
    // Can add @Override or not just easier to read

    @Override
    public void animalSound(){
        System.out.println("Oink");
    }
}

class Dog extends Animal {
    @Override
    public void animalSound(){
        System.out.println("Woof");
    }
}

public class Main {
    public static void main(String[] args){
        Animal anm = new Animal();
        Pig pig = new Pig();
        Dog dog = new Dog();

        anm.animalSound();
        pig.animalSound();
        dog.animalSound();
    }
}
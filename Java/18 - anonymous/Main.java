class Animal {
    public void animalSound(){
        System.out.println("This is an animal sound");
    }
}

interface Greeting {
    public void sayHello();
}

public class Main {
    public static void main(String[] args){
        Animal anm = new Animal();
        anm.animalSound();

        Animal pig = new Animal() { // anonymous class overriding animal sound method
            @Override
            public void animalSound(){
                System.out.println("Oink");
            }
        };
        pig.animalSound();

        Greeting greet = new Greeting() { // anonymous interface, both of these are good for one time use
            public void sayHello(){
                System.out.println("Hello");
            }
        };
        greet.sayHello();
    }
}
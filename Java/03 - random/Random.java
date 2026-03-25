public class Random {
    public static void main(String [] args){
        double randombase = Math.random(); // base 0 inclusive to 1 exclusive in decimal
        int randomchoice = (int)(Math.random()*101); // choice of 0 to 100 (typecasted to int because 0 -100 non decimal)

        System.out.printf("%f %d", randombase, randomchoice);
    }
}
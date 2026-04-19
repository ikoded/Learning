public class WrapperExample {
    public static void main(String[] args){
        Integer myint = 5;
        Double mydouble = 5.5;
        Character mychar = 'C';

        System.out.printf("%d %f %c\n",myint,mydouble,mychar);
        System.out.printf("%s",myint.toString().getClass().getName());
    }
}
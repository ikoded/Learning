public class Loops {
    public static void main(String [] args){
        int i = 0;
        while(i < 5){
            System.out.print(i + " ");
            i++;
        }
        System.out.println("");

        do{
            System.out.print(i + " ");
            i --;
        }while(i>5);
        System.out.println("");

        for(int y = 0; y < 5; ++y){
            System.out.printf("%d ",y);
        }
        System.out.println("");
    }
}
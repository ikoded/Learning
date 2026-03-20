public class Main {
    public static void main(String[] args){
        String content = "Hello";
        final int FINALNUM = 42;
        int num, othernum;
        num = othernum = 20;
        num = 4 + 2;

        System.out.printf("%s %d %d %d\n", content, FINALNUM, num, othernum);

        boolean torf = num == othernum;

        if(!torf){
            System.out.printf("Num(%d) does not equal Othernum(%d).\n",num,othernum);
        }
    }
}
public class Tc{
    public static void main(String [] args){
        int num = 5;
        //Widening typecast
        double dnum = num;
        System.out.println(dnum);

        // Narrowing typecast
        double test = 5.6d;
        int itest = (int)test;
        System.out.println(itest);

        int maxScore = 500;
        int userScore = 400;
        double percentage = (double) userScore / maxScore * 100.0d; // maxscore auto widens while userscore needs double cast to match the maxscore
        System.out.println(percentage);

        double a = 10.0d;
        int b = 3;
        System.out.println(a/b); // want both to be same in division but this still works, chooses biggest type so double to print in

        double y = b;
        System.out.println(a/y);
    }
}
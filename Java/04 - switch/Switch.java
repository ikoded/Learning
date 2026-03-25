public class Switch {
    public static void main(String [] args){
        int time = 20;
        System.out.println((time > 10) ? "Yes" : "No");

        // Nested short hand
        String result = (time > 10) ? "Greater than 10" : (time <= 10) ? "Less than equal to 10" : "Default"; // Not recommended because harder to read
        System.out.println(result);

        switchprint(10);
        switchprint(0);
        switchprint(1);
    }

    public static void switchprint(int num){
        String resultingcase;
        switch(num){
            case 0:
                resultingcase = "It is zero";
                break;
            case 10:
                resultingcase = "It is 10";
                break;
            default:
                resultingcase = "It is neither zero nor ten";
        }
        System.out.println(resultingcase);
    }

}
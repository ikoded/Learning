public class Recursion{
    public static void main(String[] args){
        System.out.println(summation(5));

        System.out.println(replaceletters("Hello", 'H', 'f', 0));
    }

    public static int summation(int k){
        if(k == 0){
            return 0;
        }else{
            return k + summation(k-1);
        }
    }

    public static String replaceletters(String word, char targetletter, char replaceletter, int index){
        if(index == word.length()){
            return "";
        }else if(word.charAt(index) == targetletter){
            return replaceletter + replaceletters(word,targetletter,replaceletter,index + 1);
        }else{
            return word.charAt(index) + replaceletters(word,targetletter,replaceletter,index + 1);
        }
    }

}
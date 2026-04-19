import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Regex {
    static void matchTORF(boolean match){
        if(match){
            System.out.println("Match found");
        }else{
            System.out.println("Match not found");
        }
    }

    public static void main(String[] args){
        Pattern pattern = Pattern.compile("matt", Pattern.CASE_INSENSITIVE);
        Matcher matcher = pattern.matcher("Hello matt");

        matchTORF(matcher.find()); // found

        pattern = Pattern.compile("[abc]");
        matcher = pattern.matcher("matt");
        matchTORF(matcher.find()); // found
        matcher = pattern.matcher("mtt"); // not found
        matchTORF(matcher.find());

        pattern = Pattern.compile("[^abc]");
        matcher = pattern.matcher("abc"); // not found
        matchTORF(matcher.find());

        matcher = pattern.matcher("efg"); // found
        matchTORF(matcher.find());

        System.out.println();

        // quantifier

        pattern = Pattern.compile("m+");
        matcher = pattern.matcher("matt"); // found
        matchTORF(matcher.find());
        
        matcher = pattern.matcher("att"); // not found
        matchTORF(matcher.find());
    }
}
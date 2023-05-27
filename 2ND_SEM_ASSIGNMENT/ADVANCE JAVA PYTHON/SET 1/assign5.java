import java.util.Scanner;
import java.lang.String;
public class assign5{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first string:\n");
        String str1 = sc.nextLine();
        String str2 = str1;
        System.out.println("Enter second string:\n");
        String str3 = sc.nextLine();
        System.out.println("Comparing str1 and str2 with == operator:"+ (str1 == str2));
        System.out.println();
        System.out.println("Comparing str1 and str3 with == operator:" + (str1 == str3));
        System.out.println();
        System.out.println("Comparing str1 and str2 with equal() method:" +(str1.equals(str2)));
        System.out.println();
        System.out.println("Comapring str1 and str3 with equal operator"+ (str1.equals(str3)));
    }
    
}

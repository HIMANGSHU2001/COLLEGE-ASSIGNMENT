import java.util.Scanner;
public class assign1{
    public static void main(String args[]){
        short num1, num2;
        int sum;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number:");
        num1 = sc.nextShort();
        System.out.println("Enter Second number:");
        num2 = sc.nextShort();
        sc.close();
        sum = num1 + num2;
        System.out.println("Sum of these numbers:" +sum);



    }
}
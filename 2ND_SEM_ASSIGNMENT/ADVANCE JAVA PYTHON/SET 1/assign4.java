import java.util.*;
public class assign4{
    public static void main(String[] args){
        final double PI = 3.14;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius ");
        double radius = sc.nextFloat();
        double area = PI * radius * radius;
        System.out.println("The area of the circle:" + area);

    }
    
}

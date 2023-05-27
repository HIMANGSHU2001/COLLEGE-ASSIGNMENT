import java.util.*;
public class assign_7 {
    public static void main(String args[]){
        static class student{
            int roll;
            String name;
            double score;
            public void set(int r, String n, double s){
                roll = r;
                name = n;
                score = s;

            }
            public void display(){
                System.out.println("Student details:\n");
                System.out.println("Roll: "+roll);
                System.out.println("Name: "+name);
                System.out.println("Score: "+ score);

            }
                
            }
            public static void main(String args[]){
                student s1 = new student();
                student s2 = new student();
                s1.set(21, "Himangshu Bauri", 80);
                s1.display();
                s1.copy(s2);
                s2.display();
        
    }
    
}

public class CommandLine{
    public static void main(String[] args){
        int count = args.length;
        System.out.println("Number of command-line parameters:" +count);
        System.out.println("Command line parameters:");
        for(int i = 0; i<count; i++){
            System.out.println((i+1) +" : " + args[i]);
        }

    }
}
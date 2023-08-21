import java.util.*;
class dectoBin{
    public static void main(String [] args){
        // Scanner scanner = new Scanner(System.in);
        // int a = scanner.nextInt();
        Console co= System.console();
        int a= Integer.parseInt(co.readLine());
        System.out.println("Enter number in Binary: ");
        int b= Integer.parseInt(co.readLine());
        // int b = scanner.nextInt();
        binCon(a);
        decCon(b);
    }
    public static void binCon(int a){
        int arr=0;
        int mul=1;
        while(a > 0){
            arr = arr + (a%2 * mul);
            mul *=10;
            a /= 2;
        }
        System.out.println(arr);
    }
    public static void decCon(int a){
        int arr=0;
        int mul=1;
        while(a>0){
            if(a%10==1){
            arr= arr + (mul * (a % 10));
            }
            a/=10;
            mul *=2;
        }
        System.out.println(arr);
    }
}
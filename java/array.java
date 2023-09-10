import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        int n;
        System.out.println("Enter size of array ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int arr[] = new int[n];
        for(int i =0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i = 0; i<n; i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();

    }
}

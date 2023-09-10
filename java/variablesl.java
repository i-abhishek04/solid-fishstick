public class variablesl {
    int a=10; //Instance variable
    static int b=15;  //Static variable
    
    void fun(){
        int b=10;
        System.out.println(a+" "+b);
        ++a;    ++b;
    }
    public static void main(String[] args) {
        int c=34; //local variable
        final int D=40;     //final variable
        // D++;
        variablesl v=new variablesl();

        System.out.println(v.a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(D);
        v.fun();
        v.fun();
        v.fun();
        
    }
}

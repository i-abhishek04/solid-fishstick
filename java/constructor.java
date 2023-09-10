class A{
    int a;
    String name;
    A(){
        a=10;
        name="anu";
    }
    void show(){
        System.out.println(a+" "+name);
    }
}




public class constructor {
    public static void main(String[] args) {
        A obj = new A();
        obj.show();
    }
}

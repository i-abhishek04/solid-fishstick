class thread1 implements Runnable{
    public void run(){
        for(int i =0;i<5;i++)
            System.out.println("Thread 1: "+i);
    }
}

class thread2 implements Runnable{
    public void run(){
        for(int i =0;i<5;i++)
            System.out.println("Thread 2: "+i);
    }
}

public class multithread{
    public static void main(String[] args) {
    thread1 t1 = new thread1();
    thread2 t2 = new thread2();
    Thread to1 = new Thread(t1);
    Thread to2 = new Thread(t2);
    to1.start();
    to2.start();}
}
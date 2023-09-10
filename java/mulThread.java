class thread1 extends Thread{
     public void run(){
        for(int i =0;i<5;i++){
            try{
                if(i==0) sleep(1000);
            }
            catch(Exception e){
                System.out.println(e);
            }
            System.out.println("Thread 1: "+i);
        }
    }
}

class thread2 extends Thread{
    public void run(){
        for(int i =0;i<5;i++)
            System.out.println("Thread 2: "+i);
    }
}



public class mulThread {
    public static void main(String[] args) {
        thread1 t1 = new thread1();
        thread2 t2 = new thread2();
        t1.start();
        t2.start(); 
    }
}

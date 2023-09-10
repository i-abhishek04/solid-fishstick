import javax.swing.*;
// import java.awt.*;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

public class WindowEventExample extends JFrame implements WindowListener {

    public WindowEventExample() {
        // Create the JFrame
        setTitle("Window Event Example");
        setSize(300, 200);

        // Add window listener to the JFrame
        addWindowListener(this);

        // Make the JFrame visible
        setVisible(true);
    }

    @Override
    public void windowOpened(WindowEvent e) {
        // This method is called when the window is opened and made visible
        System.out.println("Window opened.");
    }

    @Override
    public void windowClosing(WindowEvent e) {
        // This method is called when the user attempts to close the window
        System.out.println("Window closing.");
    }

    @Override
    public void windowClosed(WindowEvent e) {
        // This method is called after the window has been closed
        System.out.println("Window closed.");
    }

    @Override
    public void windowIconified(WindowEvent e) {
        // This method is called when the window is minimized/iconified
        System.out.println("Window iconified.");
    }

    @Override
    public void windowDeiconified(WindowEvent e) {
        // This method is called when the window is restored from its minimized/iconified state
        System.out.println("Window deiconified.");
    }

    @Override
    public void windowActivated(WindowEvent e) {
        // This method is called when the window is activated or gains focus
        System.out.println("Window activated.");
    }

    @Override
    public void windowDeactivated(WindowEvent e) {
        // This method is called when the window loses focus
        System.out.println("Window deactivated.");
    }

    public static void main(String[] args) {
        // Create the WindowEventExample object
        new WindowEventExample();
    }
}

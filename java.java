import java.util.ArrayList;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        // Создание списка
        ArrayList<String> list = new ArrayList<>();
        list.add("элемент1");
        list.add("элемент2");
        System.out.println("Список: " + list);
        
        // Организация стека
        Stack<String> stack = new Stack<>();
        stack.push("элемент1");
        stack.push("элемент2");
        System.out.println("Вершина стека: " + stack.peek());
        System.out.println("Извлечено: " + stack.pop());
    }
}
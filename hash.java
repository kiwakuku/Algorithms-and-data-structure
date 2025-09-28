import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        Map<String, Integer> ht = new HashMap<>();
        ht.put("apple", 10);
        ht.put("banana", 20);
        ht.put("cherry", 30);

        for (var entry : ht.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
}


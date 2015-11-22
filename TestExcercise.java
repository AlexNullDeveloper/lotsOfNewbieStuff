import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Map;
import java.util.HashMap;
import java.io.IOException;


public class TestExcercise {
    public static void main(String[] args){
        TestExcercise teObj = new TestExcercise();
        teObj.go();
    }

    public void go(){
        //hashmap для хранения значений
        Map<Integer, Integer> hm = new HashMap<Integer, Integer>();
        try {
            BufferedReader reader = new BufferedReader(new FileReader("C:/Java/textfile.txt"));
            //строка для парсинга
            String lineToParse;

            while ((lineToParse = reader.readLine()) != null) {
                //создаю массив для временного хранения там пар значений разделенных пробелом
                String[] result = lineToParse.split(" ");
                //бегу по hashmap в поиске циклических зависимостей
                for (Map.Entry<Integer, Integer> pair : hm.entrySet()){
                    //int first = pair.getKey();
                    //int second = pair.getValue();
                    //второе значение в hashmap должно совпадать с первым в новой строке
                    if ( pair.getValue() == Integer.parseInt(result[0])){
                        //если второе значение совпадает и первое в хэшмап со вторым во временном массиве, то выводим строку.
                        if (pair.getKey() == Integer.parseInt(result[1])){
                            System.out.println(pair.getKey() + " " + pair.getValue() + " " + result[1] );
                        }
                    }
                }
                //кладем в хэшмэм элементы временного массива
                hm.put(Integer.parseInt(result[0]), Integer.parseInt(result[1]));
            }

            reader.close();
        } catch (IOException e){
            e.printStackTrace();
        }
    }
}
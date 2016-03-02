using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ArrayRealization
{
    class ArrayQueue : ArrayStructures
    {
        // private long[] arrayForQueue; перенесено в родительский класс
        // private int maxSize;    перенесено в родительский класс
        

       /* public ArrayQueue() //конструктор по умолчанию
        { }*/
        public ArrayQueue(int sizeOfQueue)
        {
            maxSize = sizeOfQueue;
            ArrayForStructure = new long[maxSize];
            front = 0;
            back = -1;
            nItems = 0;
        
        }

        public void insertBack(long j)
        {
            if (back == maxSize - 1)
            {
                back = -1;
            }
            ArrayForStructure[++back] = j;
            nItems++;
            
        }

        public long removeFront()// извлечение элемента в начале очереди
        {
            long temp = 0;
            if (isEmpty())
                Console.WriteLine("очередь пуста ");
            else
            {
                temp = ArrayForStructure[front++];
                if (front == maxSize)
                    front = 0;
                nItems--;
            }
            return temp;
        }

        public long peekFront()//чтение элемента в начале очереди
        {
            return ArrayForStructure[front];
        }

        public long peekBack()//чтение элемента в конце очереди
        {
            if (back < 0)
            {
                Console.WriteLine("очередь пуста ");
                return -1;
            }
            else
            {
                return ArrayForStructure[back];
            }
        }

        public bool isEmpty()//тру, если очередь пуста
        {
            return (nItems == 0);
        }

        public bool isFull()//true, если очередь заполнена
        {
            return (nItems == maxSize);
        }

        public int size()//kol-vo elementov v ocheredi
        {
            return nItems;
        }
    }
}

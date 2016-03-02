using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ListRealization
{
    class ListQueue<T> : ListStructures<T>
    {
        public ListQueue(int sizeOfQueue)
        {
            maxSize = sizeOfQueue;
            listForStructure = new List<T>(maxSize);
            front = 0;
            back = -1;
            nItems = 0;

        }

        public void insertBack(T j)
        {
            if (back == maxSize - 1)
            {
                back = -1;
            }
            listForStructure.Add(j);
            back++;
            nItems++;

        }

        public T removeFront()// извлечение элемента в начале очереди
        {
            T temp = default(T);
            if (isEmpty())
                Console.WriteLine("очередь пуста ");
            else
            {
                temp = listForStructure[front++];
                if (front == maxSize)
                    front = 0;
                nItems--;
            }
            return temp;
        }

        public T peekFront()//чтение элемента в начале очереди
        {
            return listForStructure[front];
        }

        public T peekBack()//чтение элемента в конце очереди
        {
            if (back < 0)
            {
                Console.WriteLine("очередь пуста ");
                return default(T);
            }
            else
            {
                return listForStructure[back];
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

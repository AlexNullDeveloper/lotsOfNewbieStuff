using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ListRealization
{
    class ListDeque<T> : ListQueue<T>
    {
        public ListDeque(int sizeOfQueue) : base(sizeOfQueue)
        {
            /*вызов конструктора базового класса, в данном случае Queue*/
        }

        public void insertFront(T value)
        {

            nItems++;
            back++;
            /*
            при вставке первого элемента условие не выполнится и он просто запишется в начало массива
            */
            for (int i = nItems - 2; i > -1; i--)
            {
                T elementWhichWeMove = listForStructure[i];
                listForStructure.Insert(i+1, elementWhichWeMove);
            }
            listForStructure.Insert(0, value);

        }

        public T removeBack()//извлечение элемента из конца очереди
        {
            T temp = default(T);
            if (isEmpty())
                Console.WriteLine("очередь пуста ");
            else
            {
                temp = listForStructure[back--];
                if (back == -1)//указатель на конец массива стал меньше нулевого элемента, тогда
                    back = maxSize - 1;
                nItems--;
            }
            return temp;
        }
    }
}

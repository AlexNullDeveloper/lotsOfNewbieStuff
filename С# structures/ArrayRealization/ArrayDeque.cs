using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ArrayRealization
{
    class ArrayDeque : ArrayQueue
    {
        public ArrayDeque(int sizeOfQueue) : base(sizeOfQueue)
        {
            /*вызов конструктора базового класса, в данном случае Queue*/
        }

        public void insertFront(long value)
        {
            
            nItems++;
            back++;
            /*
            при вставке первого элемента условие не выполнится и он просто запишется в начало массива
            */
            for (int i = nItems-2; i  > -1; i--)
            {
                ArrayForStructure[i + 1] = ArrayForStructure[i];
            }
            ArrayForStructure[0] = value;
            
        }

        public long removeBack()//извлечение элемента из конца очереди
        {
            long temp = 0;
            if (isEmpty())
                Console.WriteLine("очередь пуста ");
            else
            {
                temp = ArrayForStructure[back--];
                if (back == -1)//указатель на конец массива стал меньше нулевого элемента, тогда
                    back = maxSize - 1;
                nItems--;
            }
            return temp;
        }
    }
}

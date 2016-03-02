using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ListRealization
{
    class ListStack<T> : ListStructures<T>
    {
        public ListStack(int sizeOfStack)
        {
            this.maxSize = sizeOfStack;
            this.top = -1;
            this.listForStructure = new List<T>(maxSize);
        }
        //извлечение элемента из вершины стека
        public T pop()
        {
            return listForStructure[top--];
        }
        //добавление элемента на вершину стека
        public void push(T valueInserting)
        {
            listForStructure.Add(valueInserting);
            top++;
        }
        //отобразить текущий элемент стека
        public T peek()
        {
            return listForStructure[top];
        }

        public bool isEmpty()
        {
            return (top == -1);
        }

        public bool isFull()
        {
            return (top == maxSize - 1);
        }

    }
}

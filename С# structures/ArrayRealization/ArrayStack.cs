using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataStructuresHomeWork.ArrayRealization
{
    class ArrayStack : ArrayStructures
    {
        //private long[] arrayForStack; перенесено в родительский класс
        //private int top;
        //private int maxSize; перенесено в родительский класс

        public ArrayStack(int sizeOfStack)
        {
            this.maxSize = sizeOfStack;
            this.top = -1;
            this.ArrayForStructure = new long[maxSize];
        }
        //извлечение элемента из вершины стека
        public long pop()
        {
            return ArrayForStructure[top--];
        }
        //добавление элемента на вершину стека
        public void push(long valueInserting)
        {
            ArrayForStructure[++top] = valueInserting;
        }
        //отобразить текущий элемент стека
        public long peek()
        {
            return ArrayForStructure[top];
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

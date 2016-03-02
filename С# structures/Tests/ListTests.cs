using System;
using DataStructuresHomeWork.ListRealization;

namespace DataStructuresHomeWork.Tests
{
    class ListTests
    {
        public static void testListStack()
        {
            ListStack<int> listStack = new ListStack<int>(10);
            listStack.push(10);
            listStack.push(20);
            listStack.push(30);
            Console.WriteLine("текущий элемент стека " + listStack.peek());

            while (!listStack.isEmpty())
            {
                long value = listStack.pop();
                Console.WriteLine("извлечение элемента " + value);
            }

        }

        public static void testListQueue()
        {
            ListQueue<double> queue = new ListQueue<double>(5);

            queue.insertBack(10);
            queue.insertBack(20);
            queue.insertBack(30);
            queue.insertBack(40);

            Console.WriteLine("начало очереди " + queue.peekFront());

            Console.WriteLine("конец очереди " + queue.peekBack());

            queue.removeFront();
            queue.removeFront();
            queue.removeFront();

            queue.insertBack(50);
            queue.insertBack(60);
            queue.insertBack(70);
            queue.insertBack(80);

            Console.WriteLine("начало очереди2 " + queue.peekFront());

            Console.WriteLine("конец очереди2 " + queue.peekBack());

            while (!queue.isEmpty())
            {
                double value = queue.removeFront();
                Console.WriteLine(value);

            }

        }

        public static void testListDeque()
        {
            Console.WriteLine("test Deque");
            Console.WriteLine("");
            ListDeque<short> deque = new ListDeque<short>(5);
            deque.insertFront(10);
            Console.WriteLine("front сейчас = " + deque.peekFront());
            Console.WriteLine("back сейчас = " + deque.peekBack());
            deque.insertFront(20);
            Console.WriteLine("front сейчас = " + deque.peekFront());
            Console.WriteLine("back сейчас = " + deque.peekBack());
            deque.insertFront(30);
            Console.WriteLine("front сейчас = " + deque.peekFront());
            Console.WriteLine("back сейчас = " + deque.peekBack());
            deque.insertBack(0);
            Console.WriteLine("front сейчас = " + deque.peekFront());
            Console.WriteLine("back сейчас = " + deque.peekBack());

            Console.WriteLine("last element of deque " + deque.peekBack());

            Console.WriteLine("first element of deque " + deque.peekFront());

            Console.WriteLine("удаляем с начала очереди элемент " + deque.removeFront());

            //Console.ReadKey();

            while (!deque.isEmpty())
            {
                Console.WriteLine("удалем с конца очереди " + deque.removeBack());
            }

            //удаление из пустой очереди
            deque.removeBack();
            deque.removeFront();
        }
    }
}

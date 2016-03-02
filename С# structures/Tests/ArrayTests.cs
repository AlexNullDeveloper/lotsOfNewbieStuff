using System;
using DataStructuresHomeWork.ArrayRealization;

namespace DataStructuresHomeWork.Tests
{
    class ArrayTests
    {
        public static void testArrayStack()
        {
            ArrayStack stack = new ArrayStack(10);
            stack.push(10);
            stack.push(20);
            stack.push(30);
            Console.WriteLine("текущий элемент стека " + stack.peek());

            while (!stack.isEmpty())
            {
                long value = stack.pop();
                Console.WriteLine("извлечение элемента " + value);
            }
        }

        public static void testQueue()
        {
            ArrayQueue queue = new ArrayQueue(5);

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
                long value = queue.removeFront();
                Console.WriteLine(value);

            }
        }

        public static void testArrayDeque()
        {
            Console.WriteLine("test Deque");
            Console.WriteLine("");
            ArrayDeque arrayDeque = new ArrayDeque(5);
            arrayDeque.insertFront(10);
            Console.WriteLine("front сейчас = " + arrayDeque.peekFront());
            Console.WriteLine("back сейчас = " + arrayDeque.peekBack());
            arrayDeque.insertFront(20);
            Console.WriteLine("front сейчас = " + arrayDeque.peekFront());
            Console.WriteLine("back сейчас = " + arrayDeque.peekBack());
            arrayDeque.insertFront(30);
            Console.WriteLine("front сейчас = " + arrayDeque.peekFront());
            Console.WriteLine("back сейчас = " + arrayDeque.peekBack());
            arrayDeque.insertBack(0);
            Console.WriteLine("front сейчас = " + arrayDeque.peekFront());
            Console.WriteLine("back сейчас = " + arrayDeque.peekBack());

            Console.WriteLine("last element of deque " + arrayDeque.peekBack());
            Console.WriteLine("first element of deque " + arrayDeque.peekFront());

            Console.WriteLine("удаляем с начала очереди элемент " + arrayDeque.removeFront());

            //Console.ReadKey();

            while (!arrayDeque.isEmpty())
            {
                Console.WriteLine("удалем с конца очереди " + arrayDeque.removeBack());
            }

            //удаление из пустой очереди
            arrayDeque.removeBack();
            arrayDeque.removeFront();
        }
    }
}

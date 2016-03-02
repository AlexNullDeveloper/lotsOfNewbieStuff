using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DataStructuresHomeWork.Tests;

namespace DataStructuresHomeWork
{
    class MainHomeWorkClass
    {

        public static void testingAllArrayRealizations()
        {
            Console.WriteLine("**************************************");
            Console.WriteLine("******Testing ArrayRealizations*******");
            Console.WriteLine("**************************************");

            ArrayTests.testArrayStack();

            ArrayTests.testQueue();

            ArrayTests.testArrayDeque();

            Console.WriteLine("**************************************");
            Console.WriteLine("***END Testing ArrayRealizations******");
            Console.WriteLine("**************************************");
            Console.WriteLine();

        }

        public static void testingAllListRealizations()
        {
            Console.WriteLine("**************************************");
            Console.WriteLine("*******Testing ListRealizations*******");
            Console.WriteLine("**************************************");
            ListTests.testListStack();

            ListTests.testListQueue();

            ListTests.testListDeque();

            Console.WriteLine("**************************************");
            Console.WriteLine("***END Testing ListRealizations*******");
            Console.WriteLine("**************************************");
            Console.WriteLine();
        }

        public static void Main(string[] args)
        {
            testingAllArrayRealizations();

            testingAllListRealizations();

            Console.ReadKey();
        }
    }
}

using System;

namespace task3
{
    internal class Program
    {
        static void Main()
        {
            Int32 a, b, c;
            Console.Write("Программа <");
            cwr_magenta("Число");
            Console.WriteLine(">. C.2023. Бурлаченко Егор");
            try
            {
                a = IntValue('a');
                if (a % 2 == 0)
                {
                    cwr_blue(Convert.ToString(a));
                    Console.Write(" / ");
                    cwr_blue("2");
                    Console.Write(" = ");
                    b = a / 2;
                    cwr_red(Convert.ToString(b));
                    Console.Write("Число "); cwr_red(Convert.ToString(a)); Console.Write(" является парным");
                    Console.ReadKey();
                }
                else
                {
                    if (a%10==3)
                    {
                        Console.Write("Число "); cwr_red(Convert.ToString(a)); Console.Write(" является не непарным и заканчивается на ");
                        cwr_blue(Convert.ToString(3));
                        Console.Write(".");
                        Console.ReadKey();
                    }
                    else
                    {
                        Console.Write("Число "); cwr_red(Convert.ToString(a)); Console.Write(" является не непарным");
                        Console.ReadKey();
                    }
                }
                
            }
            catch
            {
                Console.Write("Возникла "); cwr_red("ошибка!\n");
                Console.WriteLine("Вы ввели неправильные данные.");
                Console.ReadKey();
            }
           
        }
        static void cwr_magenta(String str)
        {
            Console.ForegroundColor = ConsoleColor.Magenta;
            Console.Write(str);
            Console.ResetColor();
        }
        static void cwr_blue(String str)
        {
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write(str);
            Console.ResetColor();
        }
        static void cwr_red(String str)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.Write(str);
            Console.ResetColor();
        }

        static int IntValue(Char s)
        {
            Int32 a;
            String str;

            Console.Write("Введите любое целое число: ");
            str = Console.ReadLine();
            a = int.Parse(str);

            return a;
        }
    }
}

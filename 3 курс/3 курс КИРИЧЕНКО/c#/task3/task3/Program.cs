using System;

namespace task3
{
    internal class Program
    {
        static void Main()
        {
            Int32 a;
            Console.Write("Программа <");
            cwr_magenta("Парное или нет?");
            Console.WriteLine(">. C.2023. Бурлаченко Егор\n");
            Console.WriteLine("Узнайте, является ли ваше число парным или нет, а так же заканчивается оно на 3 или же нет\n");
            try
            {
                a = IntValue('a');
                if (a < 0)
                {
                    a = a * -1;
                    isnumbereven(a);
                }
                else
                {
                    isnumbereven(a);
                }
            }
            catch
            {
                Console.Write("Возникла "); cwr_red("ошибка!\n");
                Console.WriteLine("Вы ввели неправильные данные.");
                Console.ReadKey();
            }
           
        }
        static void isnumbereven(Int32 z)
        {
            int c = z / 2;
            if (c % 2 == 0)
            {
                int b;
                cwr_blue(Convert.ToString(c));
                Console.Write(" / ");
                cwr_blue("2");
                Console.Write(" = ");
                b = c / 2;
                cwr_red(Convert.ToString(b)); Console.Write("\n");
                Console.Write("Число "); cwr_red(Convert.ToString(c)); Console.Write(" является парным");
                Console.ReadKey();
            }
            else
            {
                int b = z / 2;
                if (b % 10 == 3)
                {
                    cwr_blue(Convert.ToString(z));
                    Console.Write(" / ");
                    cwr_blue("2");
                    Console.Write(" = ");
                    cwr_red(Convert.ToString(b)); Console.Write("\n");

                    Console.Write("Число "); cwr_red(Convert.ToString(b)); Console.Write(" является не непарным и заканчивается на ");
                    cwr_blue(Convert.ToString(3));
                    Console.Write(".");
                    Console.ReadKey();
                }
                else
                {
                    cwr_blue(Convert.ToString(z));
                    Console.Write(" / ");
                    cwr_blue("2");
                    Console.Write(" = ");
                    cwr_red(Convert.ToString(b)); Console.Write("\n");
                    Console.Write("Число "); cwr_red(Convert.ToString(b)); Console.Write(" является не непарным");
                    Console.ReadKey();
                }
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

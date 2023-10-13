using System;
using System.Text;

namespace Квадратное_уравнение
{
    class Program
    {
        static void Main()
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Решение квадратного уравнения");
            //ввод данных
            Console.Write("a = ");
            var a = double.Parse(Console.ReadLine());
            Console.Write("b = ");
            var b = double.Parse(Console.ReadLine());
            Console.Write("c = ");
            var c = double.Parse(Console.ReadLine());

            double x1, x2;
            //дискриминант
            var discriminant = Math.Pow(b, 2) - 4 * a * c;
            if (a != 0)
                if (discriminant < 0)
                {
                    Console.WriteLine($"\na={a}, b={b}, c={c}\n\ndisc={discriminant}\n");
                    Console.WriteLine("Квадратное уравнение не имеет корней\n");
                }
                else
                {
                    if (discriminant == 0) //квадратное уравнение имеет два одинаковых корня
                    {
                        x1 = -b / (2 * a);
                        x2 = x1;
                    }
                    else //уравнение имеет два разных корня
                    {
                        x1 = (-b + Math.Sqrt(discriminant)) / (2 * a);
                        x2 = (-b - Math.Sqrt(discriminant)) / (2 * a);
                    }
                    //вывод корней уравнения
                    Console.WriteLine($"\na={a}, b={b}, c={c}\n\ndisc={discriminant}\n");
                    Console.WriteLine($"x1 = {x1}; x2 = {x2}\n");
                }
            else if (a == 0 && b != 0 && c != 0)
            {
                Console.WriteLine("Данное уравнение не является квадратным, но я все же решу его для вас.");
                var step1 = c * -1;
                var step2 = step1 / a;
                Console.WriteLine($"\na={a}, b={b}, c={c}\n\ndisc={discriminant}\n");
                Console.WriteLine($"x = {step2}\n");
            }
            else if (a==0 && b==0 && c!=0)
            {
                Console.WriteLine("Один вопросик у меня, ты приколист?\n\nНет решения.\n");
            }
            else
            {
                Console.WriteLine($"\na={a}, b={b}, c={c}\n\ndisc={discriminant}\n");
                Console.WriteLine("x=0");
            }
            Console.WriteLine("Для выхода нажмите любую клавишу...");
            Console.ReadKey(true);
            
        }
    }
}

using System;
namespace Example1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            {
                //ініціалізація полів класу виконується в конструкторі з параметрами
                Student newStudent = new Student("Іванов", 20, "студент", "Крок", "ІПЗ-2", 3);



                Console.WriteLine("Хто ви?");
                Console.WriteLine("Прізвище = " + newStudent.name);
                Console.WriteLine("Вік= " + newStudent.age);
                Console.WriteLine("Роль= " + newStudent.role);
                Console.WriteLine("Факультет = " + newStudent.facultet);
                Console.WriteLine("група= " + newStudent.group);
                Console.WriteLine("курс= " + newStudent.course);



                Console.WriteLine("Ваш рейтинг?");
                string rate = Console.ReadLine();

                               

                try
                {
                    newStudent.rate = int.Parse(rate);
                    newStudent.PrintRate(newStudent.rate);
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Format error:\n{ex.Message}");
                }
                Console.ReadLine();
            }
        }
    }
}
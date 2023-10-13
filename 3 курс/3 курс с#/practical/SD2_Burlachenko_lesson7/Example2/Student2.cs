using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



namespace Example1
{
    public class Student
    {
        public string name; //Ім'я
        public int age; // вік
        public string role; // роль
        public string facultet;
        public string group;
        public int course;
        public int rate;



        //конструктор з параметрами
        public Student(string name, int age, string role, string facultet, string group, int course)
        {
            this.name = name;
            this.age = age;
            this.role = role;
            this.facultet = facultet;
            this.group = group;
            this.course = course;
        }
        public Student()
        {
            this.age = 18;
            this.role = "Студент";
            this.course = 3;
        }
        public void PrintRate(int rate)
        {
            this.rate = rate;



            if (this.rate >= 90)
                Console.WriteLine("Привіт відмінникам");
            else
            {
                if (this.rate < 50)
                    Console.WriteLine("Треба вчитися краще!");
                else
                    Console.WriteLine("Можна вчитися ще краще!");
            }
        }
    }
}





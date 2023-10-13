using System;
namespace Cathedra
{
    //class Teacher
    public class Teacher
    {
        private int age;
        //private int weight;

        // Конструктори
        public Teacher() 
        {
            age = 2;
            Weight = 5;
        }

        public Teacher(int age, int weight)
        {
            this.age = age;
            Weight = weight;
        }

        // Методи доступу до даних
        public int Age
        {
            get
            {
                return  age;

            }               
            set
            {
                age=value;
            }
        }
        public int Weight
        {
            get;
            set;
        }

        // Інші методи
        public void Speak() 
        { 
            Console.WriteLine("Teacher sound!\n"); 
        }
        public void Sleep() 
        { 
            Console.WriteLine("Shhh. I'm sleeping.\n"); 
        }

        ~Teacher()
        {
            Console.WriteLine("Teacher object is destroyed.\n");
        }

    }
}

 //public int GetAge()
        //{
        //    return age;
        //}
        //public void SetAge(int value)
        //{
        //    age = value;
        //}
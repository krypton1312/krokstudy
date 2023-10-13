using System;
namespace Animals
{
    //class Mammal
    public class Mammal
    {
        private int age;
        //private int weight;

        // Конструктори
        public Mammal() 
        {
            age = 2;
            Weight = 5;
        }

        public Mammal(int age, int weight)
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
            Console.WriteLine("Mammal sound!\n"); 
        }
        public void Sleep() 
        { 
            Console.WriteLine("Shhh. I'm sleeping.\n"); 
        }

        ~Mammal()
        {
            Console.WriteLine("Mammal object is destroyed.\n");
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
using System;

namespace Cathedra
{
    public class Dog : Teacher
    {
        protected BREED breed;
        // Конструктори
        
        public Dog() 
        { 
 
        }       
        public Dog(int age, int weight, BREED breed):base(age, weight)
        {         
            Breed = breed;
        }
        // Методи доступу до даних
        public BREED Breed
        {
            get => breed;
            set => breed = value;
        }

        // Інші методи
        // Інші методи
        public void WagTail() 
        { 
            Console.WriteLine("Tail wagging...\n"); 
        }
        public void BegForFood() 
        {
            Console.WriteLine("Begging for food...\n"); 
        }

        ~Dog()
        {
            Console.WriteLine("Dog object is destroyed.\n");
        }

    }
}


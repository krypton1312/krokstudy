using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cathedra
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Teacher mammal = new Teacher();

            mammal.Age = 10;
            mammal.Weight = 30;

            mammal.Speak();
            mammal.Sleep();
            Console.WriteLine(string.Format($"Fido is {mammal.Age} years old, weight is {mammal.Weight} kg\n"));

            Dog fido1 = new Dog();
            fido1.Breed = BREED.DOBERMAN;

            fido1.Speak();
            fido1.WagTail();

            Console.WriteLine(string.Format("Fido is {0} years old, weight is {1} kg, Breed is {2}\n", 
                fido1.Age, fido1.Weight, fido1.Breed));

            Dog fido2 = new Dog(10,25,BREED.LAB);
            fido2.Speak();
            fido2.WagTail();

            Console.WriteLine(string.Format("Fido is {0} years old, weight is {1} kg, Breed is {2}\n",
                fido2.Age, fido2.Weight, fido2.Breed));

            Console.ReadKey();

        }
    }
}

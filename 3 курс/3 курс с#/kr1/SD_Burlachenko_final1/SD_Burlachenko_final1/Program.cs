using System;
using System.IO;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        string file = File.ReadAllText("1.txt");
        var nums = file
            .Split(new char[] { ' ', ',' }, StringSplitOptions.RemoveEmptyEntries)
            .Select(n => int.Parse(n));
        foreach (int i in nums)
        {
            Console.WriteLine(i);
        }

        var max1 = int.MinValue;
        var max2 = int.MinValue;
        foreach (var item in nums)
            if (item > max1 && item < 0)
            {
                max2 = max1;
                max1 = item;
            }
            else if (item > max2 && item < 0)
            {
                max2 = item;
            }
        var sum_min = 0;
        sum_min = max1 * max2;
        Console.WriteLine("\nДобуток найменших від'ємних елементів\n" + sum_min);
        max1 = int.MaxValue;
        max2 = int.MaxValue;

        foreach (var item in nums)
            if (item < max1 && item < 0)
            {
                max2 = max1;
                max1 = item;
            }
            else if (item < max2 && item < 0)
            {
                max2 = item;
            }
        var sum = 0;
        sum = max1 + max2;

        Console.WriteLine("\nСума найбільших від'ємних елементів\n" + sum);
    }
}
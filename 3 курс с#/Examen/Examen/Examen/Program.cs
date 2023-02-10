using System;
using System.IO;

namespace FileHandlingArticleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            if (File.Exists("TextFile1.txt"))
            {
                string content = File.ReadAllText("TextFile1.txt");
                Console.WriteLine("Current content of file:");
                Console.WriteLine(content);
            }
            Console.WriteLine("Please enter new content for the file:");
            string newContent = Console.ReadLine();
            File.AppendAllText("TextFile1.txt", newContent + "\n");
        }
    }
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace projectOop
{
    class Animal
    {

        public double Weight;
        public double Height;

        public void Info()
        {

         

            Console.WriteLine(" Height: " + Height + " Weight: " + Weight);

        }
    }
    class Program
    {
        static void Main(string[] args)
        {
        Animal Dog = new Animal();
        Dog.Weight = 2; 
        Dog.Height = 50;


        Animal Cat = new Animal();
        Cat.Weight = 1;
        Cat.Height = 30;


        Dog.Info(); 
        Cat.Info();
        Console.ReadKey();
        }      
    }
}













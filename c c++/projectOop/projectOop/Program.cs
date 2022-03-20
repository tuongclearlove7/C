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

            /*
                Các phương thức bên trong lớp có thể gọi đến các thành phần khác (bao gồm thuộc tính và phương thức) trong lớp đó.
                Giá trị của các thuộc tính này có thể được khởi tạo đâu đó trong lớp hoặc từ bên ngoài truyền vào.
             */

            Console.WriteLine(" Height: " + Height + " Weight: " + Weight);

        }
    }
    class Program
    {
        static void Main(string[] args)
        {
        Animal Dog = new Animal();
        Dog.Weight = 2; // gán giá trị cho các thuộc tính của đối tượng
        Dog.Height = 50;


        Animal Cat = new Animal();
        Cat.Weight = 1;
        Cat.Height = 30;


        Dog.Info(); // gọi phương thức của đối tượng
        Cat.Info();
        Console.ReadKey();
        }      
    }
}













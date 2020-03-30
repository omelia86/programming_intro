using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Animals
{
    class Program
    {
        static void Main(string[] args)
        {
            Dog sharik = new Dog();
            sharik.LegsAmount = 4;
            sharik.Bark();
        }
    }
}

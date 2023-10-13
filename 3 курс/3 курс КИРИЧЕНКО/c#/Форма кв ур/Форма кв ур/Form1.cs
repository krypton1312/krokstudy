using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Форма_кв_ур
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string TextBoxA = textBoxA.Text;
            string TextBoxB = textBoxB.Text;
            string TextBoxC = textBoxC.Text;
            double a = 0; double b = 0; double c = 0;double x1 = 0; double x2 = 0;
            try
            {
                a = Convert.ToDouble(TextBoxA);
                b = Convert.ToDouble(TextBoxB);
                c = Convert.ToDouble(TextBoxC);
                double discriminant = b*b - 4 * a * c;

                if (a != 0)
                    if (discriminant < 0)
                    {
                        textBoxEq.Text = ($"{a}x2+{b}x+{c}=0");
                        textBoxD.Text = ("0");
                        textBoxX1.Text = ("-");
                        textBoxX2.Text = ("-");
                        TextBoxError.Text = ("Квадратное уравнение не имеет корней");
                    }
                    else
                    {
                        if (discriminant == 0) //квадратное уравнение имеет два одинаковых корня
                        {
                            x1 = -b / (2 * a);
                            x2 = x1;
                        }
                        else //уравнение имеет два разных корня
                        {
                            x1 = (-b + Math.Sqrt(discriminant)) / (2 * a);
                            x2 = (-b - Math.Sqrt(discriminant)) / (2 * a);
                        }
                        //вывод корней уравнения
                        textBoxEq.Text = ($"{a}x2+{b}x+{c}=0");
                        textBoxD.Text = ($"{discriminant}");
                        textBoxX1.Text = ($"{x1}");
                        textBoxX2.Text = ($"{x2}");
                        TextBoxError.Text = ("");
                    }
                else if (a == 0 && b != 0 && c != 0)
                {
                    TextBoxError.Text = ("Данное уравнение не является квадратным, но я все же решу его для вас.");
                    double step1 = c * -1;
                    double step2 = step1 / a;
                    textBoxEq.Text = ($"{a}x2+{b}x+{c}=0");
                    textBoxD.Text = ($"-");
                    textBoxX1.Text = ($"{step2}");
                    textBoxX2.Text = ($"{step2}");
                    TextBoxError.Text = ("");
                }
                else if (a == 0 && b == 0 && c != 0)
                {
                    textBoxEq.Text = ($"{a}x2+{b}x+{c}=0");
                    textBoxD.Text = ("0");
                    textBoxX1.Text = ("-");
                    textBoxX2.Text = ("-");
                    TextBoxError.Text = ("Квадратное уравнение не имеет корней");
                }
                else
                {
                    textBoxEq.Text = ($"{a}x2+{b}x+{c}=0");
                    textBoxD.Text = ("-");
                    textBoxX1.Text = ("0");
                    textBoxX2.Text = ("0");
                    TextBoxError.Text = ("Квадратное уравнение не имеет корней");
                }

            }
            catch (Exception err)
            {
                TextBoxError.Text = "Вы ввели не верные данные.Вводите исключительно целые числа.";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBoxA.Text = "";
            textBoxB.Text = "";
            textBoxC.Text = "";
            textBoxD.Text = "";
            textBoxEq.Text = "";
            textBoxX1.Text = "";
            textBoxX2.Text = "";
            TextBoxError.Text = "Очистка совершена.";
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }
    }
}

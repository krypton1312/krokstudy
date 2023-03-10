using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GrapTask
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Graphics g;
        Pen redPen = new Pen(Color.Red, 3);
        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            g = CreateGraphics();
            g.FillRectangle(Brushes.Silver, 100, 200, 200, 200);
            g.DrawRectangle(redPen, 100, 200, 200, 200);
            g.DrawLine(redPen, 100, 200, 200, 50);
            g.DrawLine(redPen, 200, 50, 300, 200);
            g.FillRectangle(Brushes.Blue, 140, 240, 50, 50);
            g.DrawRectangle(redPen, 140, 240, 50, 50);

            g.FillRectangle(Brushes.LightSalmon, 240, 310, 40, 90);
            g.DrawRectangle(redPen, 240, 310, 40, 90);

            g.FillRectangle(Brushes.Blue, 250, 320, 20, 30);
            g.DrawRectangle(redPen, 250, 320, 20, 30);

            g.FillEllipse(Brushes.Blue, 170, 130, 60,60);
            g.DrawEllipse(redPen, 170, 130, 60, 60);

        }

        private void Exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Abot_Click(object sender, EventArgs e)
        {
            DialogResult dres = MessageBox.Show("C.Бурлаченко Егор, ІПЗ-20к-2\n12 варіант", "About", MessageBoxButtons.OK);
        }
    }
}

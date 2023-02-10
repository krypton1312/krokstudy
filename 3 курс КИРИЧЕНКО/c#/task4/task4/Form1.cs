using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace task4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            bool radiobuy = radioBuy.Checked;
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string TextBuy = textBuy.Text;
            string TextSell = textSell.Text;
            string TextTotal = textTotal.Text;
            double buy = 0; double total = 0; double sell = 0;
            try
            {
                buy = Convert.ToDouble(TextBuy);
                sell = Convert.ToDouble(TextSell);
                textSell.ForeColor = Color.Black;
                textBuy.ForeColor = Color.Black;
            }
            catch
            {
                textBuy.ForeColor = Color.Red;
                textBuy.Text = "0";
                textSell.ForeColor = Color.Red;
                textSell.Text = "0";
            }
            try
            {
                total = Convert.ToDouble(TextTotal);
                textTotal.ForeColor = Color.Black;
            }
            catch 
            {
                textTotal.ForeColor = Color.Red;
                textTotal.Text = "100";
            }
            if (radioBuy.Checked)
            {
                double Result = total * buy;
                textResult.Text = Convert.ToString(Result);
            }
            else if (radioSell.Checked)
            {
                double Result = total * sell;
                textResult.Text = Convert.ToString(Result);
            }

        }

        private void About_Click(object sender, EventArgs e)
        {
            DialogResult dres = MessageBox.Show("Написать программу расчета при конвертации валют\n C.Бурлаченко Егор, 2023", "About", MessageBoxButtons.OK);
        }

        private void Exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        public void radioBuy_CheckedChanged(object sender, EventArgs e)
        {
            if (radioBuy.Checked)
            {
                labelResult.Text = "";
                labelResult.Text = ("Необходимо (грн):");
            }

        }

        private void radioSell_CheckedChanged(object sender, EventArgs e)
        {
            if (radioSell.Checked)
            {
                labelResult.Text = "";
                labelResult.Text = ("Вы получите (грн):");
            }
        }
    }
}

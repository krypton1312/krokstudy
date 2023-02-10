
namespace task4
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.textBuy = new System.Windows.Forms.TextBox();
            this.textSell = new System.Windows.Forms.TextBox();
            this.labelEq = new System.Windows.Forms.Label();
            this.textTotal = new System.Windows.Forms.TextBox();
            this.labelResult = new System.Windows.Forms.Label();
            this.textResult = new System.Windows.Forms.TextBox();
            this.Run = new System.Windows.Forms.Button();
            this.About = new System.Windows.Forms.Button();
            this.Exit = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.radioBuy = new System.Windows.Forms.RadioButton();
            this.radioSell = new System.Windows.Forms.RadioButton();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ForeColor = System.Drawing.Color.Blue;
            this.label1.Location = new System.Drawing.Point(680, 24);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(81, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Текущий курс:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.Color.DarkBlue;
            this.label2.Location = new System.Drawing.Point(680, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Покупка:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ForeColor = System.Drawing.Color.DarkBlue;
            this.label3.Location = new System.Drawing.Point(814, 48);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(56, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Продажа:";
            // 
            // textBuy
            // 
            this.textBuy.ForeColor = System.Drawing.SystemColors.WindowText;
            this.textBuy.Location = new System.Drawing.Point(683, 72);
            this.textBuy.Name = "textBuy";
            this.textBuy.Size = new System.Drawing.Size(67, 20);
            this.textBuy.TabIndex = 3;
            // 
            // textSell
            // 
            this.textSell.Location = new System.Drawing.Point(817, 72);
            this.textSell.Name = "textSell";
            this.textSell.Size = new System.Drawing.Size(67, 20);
            this.textSell.TabIndex = 4;
            // 
            // labelEq
            // 
            this.labelEq.AutoSize = true;
            this.labelEq.ForeColor = System.Drawing.Color.DarkBlue;
            this.labelEq.Location = new System.Drawing.Point(758, 114);
            this.labelEq.Name = "labelEq";
            this.labelEq.Size = new System.Drawing.Size(53, 13);
            this.labelEq.TabIndex = 5;
            this.labelEq.Text = "Сумма $:";
            // 
            // textTotal
            // 
            this.textTotal.Location = new System.Drawing.Point(817, 111);
            this.textTotal.Name = "textTotal";
            this.textTotal.Size = new System.Drawing.Size(84, 20);
            this.textTotal.TabIndex = 6;
            // 
            // labelResult
            // 
            this.labelResult.AutoSize = true;
            this.labelResult.ForeColor = System.Drawing.Color.DarkBlue;
            this.labelResult.Location = new System.Drawing.Point(709, 198);
            this.labelResult.Name = "labelResult";
            this.labelResult.Size = new System.Drawing.Size(0, 13);
            this.labelResult.TabIndex = 9;
            // 
            // textResult
            // 
            this.textResult.Enabled = false;
            this.textResult.Location = new System.Drawing.Point(817, 195);
            this.textResult.Name = "textResult";
            this.textResult.Size = new System.Drawing.Size(96, 20);
            this.textResult.TabIndex = 10;
            // 
            // Run
            // 
            this.Run.Location = new System.Drawing.Point(790, 273);
            this.Run.Name = "Run";
            this.Run.Size = new System.Drawing.Size(126, 36);
            this.Run.TabIndex = 11;
            this.Run.Text = "Run";
            this.Run.UseVisualStyleBackColor = true;
            this.Run.Click += new System.EventHandler(this.button1_Click);
            // 
            // About
            // 
            this.About.Location = new System.Drawing.Point(397, 273);
            this.About.Name = "About";
            this.About.Size = new System.Drawing.Size(126, 36);
            this.About.TabIndex = 12;
            this.About.Text = "About";
            this.About.UseVisualStyleBackColor = true;
            this.About.Click += new System.EventHandler(this.About_Click);
            // 
            // Exit
            // 
            this.Exit.Location = new System.Drawing.Point(12, 273);
            this.Exit.Name = "Exit";
            this.Exit.Size = new System.Drawing.Size(126, 36);
            this.Exit.TabIndex = 13;
            this.Exit.Text = "Exit";
            this.Exit.UseVisualStyleBackColor = true;
            this.Exit.Click += new System.EventHandler(this.Exit_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.ErrorImage = null;
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.InitialImage = null;
            this.pictureBox1.Location = new System.Drawing.Point(12, 12);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(650, 235);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.CenterImage;
            this.pictureBox1.TabIndex = 14;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // radioBuy
            // 
            this.radioBuy.AutoSize = true;
            this.radioBuy.Location = new System.Drawing.Point(751, 155);
            this.radioBuy.Name = "radioBuy";
            this.radioBuy.Size = new System.Drawing.Size(60, 17);
            this.radioBuy.TabIndex = 15;
            this.radioBuy.TabStop = true;
            this.radioBuy.Text = "Купить";
            this.radioBuy.UseVisualStyleBackColor = true;
            this.radioBuy.CheckedChanged += new System.EventHandler(this.radioBuy_CheckedChanged);
            // 
            // radioSell
            // 
            this.radioSell.AutoSize = true;
            this.radioSell.Location = new System.Drawing.Point(824, 155);
            this.radioSell.Name = "radioSell";
            this.radioSell.Size = new System.Drawing.Size(68, 17);
            this.radioSell.TabIndex = 16;
            this.radioSell.TabStop = true;
            this.radioSell.Text = "Продать";
            this.radioSell.UseVisualStyleBackColor = true;
            this.radioSell.CheckedChanged += new System.EventHandler(this.radioSell_CheckedChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(928, 321);
            this.Controls.Add(this.radioSell);
            this.Controls.Add(this.radioBuy);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.Exit);
            this.Controls.Add(this.About);
            this.Controls.Add(this.Run);
            this.Controls.Add(this.textResult);
            this.Controls.Add(this.labelResult);
            this.Controls.Add(this.textTotal);
            this.Controls.Add(this.labelEq);
            this.Controls.Add(this.textSell);
            this.Controls.Add(this.textBuy);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Конвертация валют";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBuy;
        private System.Windows.Forms.TextBox textSell;
        private System.Windows.Forms.Label labelEq;
        private System.Windows.Forms.TextBox textTotal;
        private System.Windows.Forms.Label labelResult;
        private System.Windows.Forms.TextBox textResult;
        private System.Windows.Forms.Button Run;
        private System.Windows.Forms.Button About;
        private System.Windows.Forms.Button Exit;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.RadioButton radioBuy;
        private System.Windows.Forms.RadioButton radioSell;
    }
}


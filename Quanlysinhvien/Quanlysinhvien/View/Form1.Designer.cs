namespace Quanlysinhvien
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControlSinhvien = new System.Windows.Forms.TabControl();
            this.tabPageSV = new System.Windows.Forms.TabPage();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btnConnectDatabase = new System.Windows.Forms.Button();
            this.dataGridViewSinhVien = new System.Windows.Forms.DataGridView();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnXoa = new System.Windows.Forms.Button();
            this.btnSua = new System.Windows.Forms.Button();
            this.btnThem = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtTenSinhVien = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.txtnamnhaphoc = new System.Windows.Forms.TextBox();
            this.comboBoxGT = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.dateTimePickerNgaySinh = new System.Windows.Forms.DateTimePicker();
            this.tabPageLop = new System.Windows.Forms.TabPage();
            this.txtNoiSinh = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.tabControlSinhvien.SuspendLayout();
            this.tabPageSV.SuspendLayout();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewSinhVien)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControlSinhvien
            // 
            this.tabControlSinhvien.Controls.Add(this.tabPageSV);
            this.tabControlSinhvien.Controls.Add(this.tabPageLop);
            this.tabControlSinhvien.Location = new System.Drawing.Point(12, 12);
            this.tabControlSinhvien.Name = "tabControlSinhvien";
            this.tabControlSinhvien.SelectedIndex = 0;
            this.tabControlSinhvien.Size = new System.Drawing.Size(872, 476);
            this.tabControlSinhvien.TabIndex = 0;
            // 
            // tabPageSV
            // 
            this.tabPageSV.Controls.Add(this.groupBox2);
            this.tabPageSV.Controls.Add(this.groupBox1);
            this.tabPageSV.Location = new System.Drawing.Point(4, 22);
            this.tabPageSV.Name = "tabPageSV";
            this.tabPageSV.Padding = new System.Windows.Forms.Padding(3);
            this.tabPageSV.Size = new System.Drawing.Size(864, 450);
            this.tabPageSV.TabIndex = 0;
            this.tabPageSV.Text = "Thông tin sinh viên";
            this.tabPageSV.UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btnConnectDatabase);
            this.groupBox2.Controls.Add(this.dataGridViewSinhVien);
            this.groupBox2.Location = new System.Drawing.Point(3, 210);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(827, 234);
            this.groupBox2.TabIndex = 12;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "groupBox2";
            // 
            // btnConnectDatabase
            // 
            this.btnConnectDatabase.Location = new System.Drawing.Point(66, 11);
            this.btnConnectDatabase.Name = "btnConnectDatabase";
            this.btnConnectDatabase.Size = new System.Drawing.Size(109, 41);
            this.btnConnectDatabase.TabIndex = 12;
            this.btnConnectDatabase.Text = "Kết nối Database";
            this.btnConnectDatabase.UseVisualStyleBackColor = true;
            this.btnConnectDatabase.Click += new System.EventHandler(this.btnConnectDatabase_Click);
            // 
            // dataGridViewSinhVien
            // 
            this.dataGridViewSinhVien.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridViewSinhVien.Location = new System.Drawing.Point(6, 58);
            this.dataGridViewSinhVien.Name = "dataGridViewSinhVien";
            this.dataGridViewSinhVien.Size = new System.Drawing.Size(815, 170);
            this.dataGridViewSinhVien.TabIndex = 11;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btnXoa);
            this.groupBox1.Controls.Add(this.btnSua);
            this.groupBox1.Controls.Add(this.btnThem);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.txtNoiSinh);
            this.groupBox1.Controls.Add(this.txtTenSinhVien);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.txtnamnhaphoc);
            this.groupBox1.Controls.Add(this.comboBoxGT);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.dateTimePickerNgaySinh);
            this.groupBox1.Location = new System.Drawing.Point(6, 6);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(846, 198);
            this.groupBox1.TabIndex = 10;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Thông tin Sinh Viên";
            // 
            // btnXoa
            // 
            this.btnXoa.Location = new System.Drawing.Point(558, 135);
            this.btnXoa.Name = "btnXoa";
            this.btnXoa.Size = new System.Drawing.Size(109, 41);
            this.btnXoa.TabIndex = 12;
            this.btnXoa.Text = "Xóa";
            this.btnXoa.UseVisualStyleBackColor = true;
            // 
            // btnSua
            // 
            this.btnSua.Location = new System.Drawing.Point(315, 135);
            this.btnSua.Name = "btnSua";
            this.btnSua.Size = new System.Drawing.Size(109, 41);
            this.btnSua.TabIndex = 11;
            this.btnSua.Text = "Sửa";
            this.btnSua.UseVisualStyleBackColor = true;
            // 
            // btnThem
            // 
            this.btnThem.Location = new System.Drawing.Point(80, 135);
            this.btnThem.Name = "btnThem";
            this.btnThem.Size = new System.Drawing.Size(109, 41);
            this.btnThem.TabIndex = 10;
            this.btnThem.Text = "Thêm";
            this.btnThem.UseVisualStyleBackColor = true;
            this.btnThem.Click += new System.EventHandler(this.btnThem_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 16);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(102, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nhập tên Sinh Viên:";
            // 
            // txtTenSinhVien
            // 
            this.txtTenSinhVien.Location = new System.Drawing.Point(137, 16);
            this.txtTenSinhVien.Name = "txtTenSinhVien";
            this.txtTenSinhVien.Size = new System.Drawing.Size(235, 20);
            this.txtTenSinhVien.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 52);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(84, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "Năm Nhập Học:";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(488, 16);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(83, 13);
            this.label4.TabIndex = 7;
            this.label4.Text = "Nhập Giới Tính:";
            // 
            // txtnamnhaphoc
            // 
            this.txtnamnhaphoc.Location = new System.Drawing.Point(137, 52);
            this.txtnamnhaphoc.Name = "txtnamnhaphoc";
            this.txtnamnhaphoc.Size = new System.Drawing.Size(235, 20);
            this.txtnamnhaphoc.TabIndex = 3;
            this.txtnamnhaphoc.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // comboBoxGT
            // 
            this.comboBoxGT.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBoxGT.FormattingEnabled = true;
            this.comboBoxGT.Items.AddRange(new object[] {
            "Nam",
            "Nữ"});
            this.comboBoxGT.Location = new System.Drawing.Point(619, 16);
            this.comboBoxGT.Name = "comboBoxGT";
            this.comboBoxGT.Size = new System.Drawing.Size(112, 21);
            this.comboBoxGT.TabIndex = 6;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 93);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(88, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "Nhập Ngày Sinh:";
            // 
            // dateTimePickerNgaySinh
            // 
            this.dateTimePickerNgaySinh.Location = new System.Drawing.Point(137, 93);
            this.dateTimePickerNgaySinh.Name = "dateTimePickerNgaySinh";
            this.dateTimePickerNgaySinh.Size = new System.Drawing.Size(235, 20);
            this.dateTimePickerNgaySinh.TabIndex = 5;
            // 
            // tabPageLop
            // 
            this.tabPageLop.Location = new System.Drawing.Point(4, 22);
            this.tabPageLop.Name = "tabPageLop";
            this.tabPageLop.Padding = new System.Windows.Forms.Padding(3);
            this.tabPageLop.Size = new System.Drawing.Size(864, 450);
            this.tabPageLop.TabIndex = 1;
            this.tabPageLop.Text = "Thông tin lớp học";
            this.tabPageLop.UseVisualStyleBackColor = true;
            // 
            // txtNoiSinh
            // 
            this.txtNoiSinh.Location = new System.Drawing.Point(619, 52);
            this.txtNoiSinh.Name = "txtNoiSinh";
            this.txtNoiSinh.Size = new System.Drawing.Size(223, 20);
            this.txtNoiSinh.TabIndex = 9;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(488, 52);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(79, 13);
            this.label5.TabIndex = 8;
            this.label5.Text = "Nhập Nơi Sinh:";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(884, 492);
            this.Controls.Add(this.tabControlSinhvien);
            this.MaximumSize = new System.Drawing.Size(900, 530);
            this.MinimumSize = new System.Drawing.Size(900, 530);
            this.Name = "Form1";
            this.Text = "Quản Lý Sinh Viên";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControlSinhvien.ResumeLayout(false);
            this.tabPageSV.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewSinhVien)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControlSinhvien;
        private System.Windows.Forms.TabPage tabPageSV;
        private System.Windows.Forms.TabPage tabPageLop;
        private System.Windows.Forms.TextBox txtnamnhaphoc;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtTenSinhVien;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ComboBox comboBoxGT;
        private System.Windows.Forms.DateTimePicker dateTimePickerNgaySinh;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.DataGridView dataGridViewSinhVien;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnXoa;
        private System.Windows.Forms.Button btnSua;
        private System.Windows.Forms.Button btnThem;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btnConnectDatabase;
        private System.Windows.Forms.TextBox txtNoiSinh;
        private System.Windows.Forms.Label label5;
    }
}


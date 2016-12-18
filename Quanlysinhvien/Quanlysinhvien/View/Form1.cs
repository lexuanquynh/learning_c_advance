using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Quanlysinhvien.Controller;

namespace Quanlysinhvien
{
    public partial class Form1 : Form
    {
        ConectDBController connectController = new ConectDBController();
        DataTable table = new DataTable();
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
           
        }
        
        private void btnConnectDatabase_Click(object sender, EventArgs e)
        {

            connectController.taoKetNoi();
            Boolean isConnected = connectController.moketnoi();
            if(isConnected)
            {
                connectController.requestTable(connectController.selectSinhvien);
              table.Locale = System.Globalization.CultureInfo.InvariantCulture;
              connectController.mAdapter.Fill(table);
              dataGridViewSinhVien.DataSource = table;

        // Resize the DataGridView columns to fit the newly loaded content.
        //dataGridViewSinhVien.AutoResizeColumns( 
        //    DataGridViewAutoSizeColumnsMode.AllCellsExceptHeader);
            }
            else
            {
                MessageBox.Show("Kết Nối Thất bại");
            }

            connectController.dongketnoi();
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            string tenSinhvien = txtTenSinhVien.Text;
            string namNhaphoc = txtnamnhaphoc.Text;
            string noiSinh = txtNoiSinh.Text;
            string ngaysinh = dateTimePickerNgaySinh.Value.ToShortDateString();
            String gioitinh = comboBoxGT.Text;

            if (tenSinhvien == "")
            {
                MessageBox.Show("Bạn hãy nhập họ tên");
                this.ActiveControl = txtTenSinhVien;
                return;
            }
            if (namNhaphoc == "")
            {
                MessageBox.Show("Bạn hãy nhập năm nhập học");
                this.ActiveControl = txtnamnhaphoc;
                return;
            }
            if (noiSinh == "")
            {
                MessageBox.Show("Bạn hãy nhập nơi sinh");
                this.ActiveControl = txtNoiSinh;
                return;
            }

            string gioitinhbit = gioitinh == "Nam" ? "1" : "0";
            string insertSinhvienCommand = connectController.insertPreSinhvien + "'" + tenSinhvien + "','" + ngaysinh + "','" + gioitinhbit + "','" + namNhaphoc + "','" + noiSinh + "')";
            connectController.taoKetNoi();
            connectController.moketnoi();
            connectController.requestTable(insertSinhvienCommand);
            table.Locale = System.Globalization.CultureInfo.InvariantCulture;
            connectController.mAdapter.Fill(table);
            dataGridViewSinhVien.DataSource = table;      
            connectController.dongketnoi();
        }
    }
}

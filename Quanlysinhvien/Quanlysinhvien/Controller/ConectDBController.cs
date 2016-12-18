using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data.SqlClient;
using System.Threading.Tasks;

namespace Quanlysinhvien.Controller
{
class ConectDBController
{
    string SQL_Connect_String = "Data Source=ACER-PC;Initial Catalog=qlsv;Integrated Security=TRUE";
    public string selectSinhvien = "Select * from sinhvien";
    public string insertPreSinhvien = "insert into sinhvien values (";
    SqlConnection mConnection;
    public SqlDataAdapter mAdapter;
    SqlCommandBuilder mCommandBuilder;

    //ham ket noi
    public void taoKetNoi()
    {
        mConnection = new SqlConnection(SQL_Connect_String);
      
        
    }
    public void requestTable(string sqlCommand)
    {
        mAdapter = new SqlDataAdapter(sqlCommand, mConnection);
        mCommandBuilder = new SqlCommandBuilder(mAdapter);
    }

    //public async Task<int> ExampleMethodAsync()
    //{
    //    var httpClient = new HttpClient();
    //    int exampleInt = (await httpClient.GetStringAsync("http://msdn.microsoft.com")).Length;
    //    ResultsTextBox.Text += "Preparing to finish ExampleMethodAsync.\n";
    //    After the following return statement, any method that's awaiting
    //    ExampleMethodAsync (in this case, StartButton_Click) can get the 
    //    integer result.
    //    return exampleInt;
    //}

    public Boolean moketnoi()
    { 
        try
        {
            mConnection.Open();
        }
        catch (Exception ex)
        {
            return false;
        }
        return true;
    }

    public void dongketnoi()
    {
        mConnection.Close();
        mConnection.Dispose();
    }

        
    }
    }

// database of students.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace databaseofstudents;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

System::Void Form1::aCCESSToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			Login^ dupa = gcnew Login();
			dupa -> Show();
		 }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
System::Void Form1::eDITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Edit^ Edit_Form = gcnew Edit();
			 Edit_Form->Show();
		 }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//All
System::Void Form1::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
		dataGridView1 -> Visible = true;
		this -> progressBar1 -> Visible = true;
		try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlDataAdapter^ command = gcnew MySqlDataAdapter("select * from baza_studentow", connect );
				connect -> Open();
				DataTable^ Tab = gcnew DataTable();
				command -> Fill( Tab );
				bindingSource1 -> DataSource = Tab;
				dataGridView1 -> DataSource = bindingSource1;
				connect -> Close();
				this -> progressBar1 -> Value = 100;
			}
		catch(Exception^ ex)
		    {
				MessageBox::Show( ex -> Message );
			}
}
//==============================================================================
//Search
System::Void Form1::button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	dataGridView1 -> Visible = true;
		try
			{
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlDataAdapter^ command = gcnew MySqlDataAdapter("select * from baza_studentow WHERE NbofIndex="+NbofIndex1+" ", connect );
				connect -> Open();
				DataTable^ Tab = gcnew DataTable();
				command -> Fill( Tab );
				bindingSource1 -> DataSource = Tab;
				dataGridView1 -> DataSource = bindingSource1;
				connect -> Close();
			}
		catch(Exception^ ex)
		    {
				MessageBox::Show( ex -> Message );
			}
	}

//==============================================================================
//Remove

System::Void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				MySqlCommand^ command = gcnew MySqlCommand( "delete from baza_studentow WHERE NbofIndex="+NbofIndex1+" ", connect );
				
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				connect -> Close();
				MessageBox::Show( "REMOVE COMPLETED!!!" );
			}
			catch( Exception^ ex )
			{
				MessageBox::Show(ex -> Message);
			}
	}


//==============================================================================
//Add

System::Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				String^ sName = Name1 -> Text;
				String^ sSurname = Surname1 -> Text; 

				int YearofBirth = Int32::Parse( Year1 -> Text );
				int MonthofBirth = Int32::Parse( Month1 -> Text );
				int DayofBirth = Int32::Parse( Day1 -> Text );
				Birth1 -> Text = Year1 -> Text + "-" + Month1 -> Text + "-" + Day1 -> Text;

				MySqlCommand^ command = gcnew MySqlCommand( "insert into baza_studentow values(" +NbofIndex1+ ", '"+sName+"', '"+sSurname+"',"+YearofBirth+","+MonthofBirth+","+DayofBirth+") ", connect );
				//Connect -> Open();
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				MessageBox::Show( "ADD COMPLETED!!!" );
			 }
			 catch( Exception^ ex )
			 {
				MessageBox::Show( ex -> Message );
			 }
		 }

//==============================================================================
//Change

System::Void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
			try
			{
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
			 
				int NbofIndex1 = Int32::Parse( Index1 -> Text );
			 
				String^ sName = Name1 -> Text;
				String^ sSurname = Surname1 -> Text; 

				int YearofBirth = Int32::Parse( Year1 -> Text );
				int MonthofBirth = Int32::Parse( Month1 -> Text );
				int DayofBirth = Int32::Parse( Day1 -> Text );
				Birth1 -> Text = Year1 -> Text + "-" + Month1 -> Text + "-" + Day1 -> Text;

				MySqlCommand^ command = gcnew MySqlCommand( "update baza_studentow set Name='"+sName+"', Surname='"+sSurname+"', YearofB="+YearofBirth+" , MonthofB="+MonthofBirth+",DayofB="+DayofBirth+" WHERE NbofIndex="+NbofIndex1+" ", connect );
				//Connect -> Open();
				MySqlDataReader^ DataR;
				connect -> Open();
				DataR = command -> ExecuteReader();
				connect -> Close();
				MessageBox::Show( "UPDATE COMPLETED!!!" );
			}
			catch( Exception^ ex )
			{
				MessageBox::Show(ex -> Message);
			}
	}
//==============================================================================
System::Void Form1::qUITToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			Application::Exit();
		 }

//==============================================================================
System::Void Form1::aboutAuthorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			About^ info = gcnew About();
			info->Show();
		 }

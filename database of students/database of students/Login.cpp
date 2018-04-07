#include "StdAfx.h"
#include "Login.h"

using namespace databaseofstudents;

System::Void Login::button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try{
				String^ sLogin;
				String^ sPasswd;
				sLogin = this -> textBox1 -> Text;
				sPasswd = this -> textBox2 -> Text;
				MySqlConnection^ connect = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=;Database=studenci");
				MySqlCommand^ command = gcnew MySqlCommand( "select * from admin_data WHERE Login='"+sLogin+"' AND Password='"+sPasswd+"'", connect );
				MySqlDataReader^ der;
				connect -> Open();
				der = command -> ExecuteReader();
				int i=0;
				while(der->Read())
					i++;
				if(i==1)
				{
					MessageBox::Show("Correct login & password");
					this -> Hide();
					Secret^ secretdupa = gcnew Secret();
					secretdupa -> ShowDialog();
				}
				else
				{
					++i;
					if(i >= 3)
						Application::Exit();
					MessageBox::Show("Nieprawidlowe has³o");
				}
			 }
			 catch( Exception^ ex )
			 {
				 MessageBox::Show( ex -> Message);
			 }
		}

System::Void Login::Login_Load(System::Object^  sender, System::EventArgs^  e)
{
	i = 0;
}
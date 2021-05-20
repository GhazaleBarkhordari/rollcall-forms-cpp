#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;



ref class DataBase
{
   public :
		DataBase();


		SqlConnection^ Connect;
		SqlConnectionStringBuilder^ connstringBuilder;

		void ConectToDB()
		{
			//Data Source=.;Initial Catalog=RollCall;Persist Security Info=True;User ID=sa;Password=***********
			connstringBuilder = gcnew SqlConnectionStringBuilder;
			connstringBuilder->DataSource = ".";
			connstringBuilder->InitialCatalog = "RollCall";
			connstringBuilder->PersistSecurityInfo = "True";
			connstringBuilder->UserID = "sa";
			connstringBuilder->Password = "979797";

			Connect = gcnew SqlConnection(Convert::ToString(connstringBuilder));
		}

public: void insert(String^ FirstName,String^ LastName,String^ MeliCode)
{
	try
	{
		ConectToDB();

		String^ TxtFirstName = "Insert into db.EmployeeData(FirstName) value(@FirstName)";
		SqlCommand^ TxtFN = gcnew SqlCommand(TxtFirstName, Connect);
		String^ TxtLastName = "Insert into db.EmployeeData(LastName) value(@TxtLastName)";
		SqlCommand^ TxtLN = gcnew SqlCommand(TxtLastName, Connect);
		String^ TxtMeliCode = "Insert into db.EmployeeData(MeliCode) value(@TxtMeliCode)";
		SqlCommand^ TxtMC = gcnew SqlCommand(TxtMeliCode, Connect);

		TxtFN->Parameters->AddWithValue("@TxtFirstName", FirstName);
		TxtLN->Parameters->AddWithValue("@TxtLastName", LastName);
		TxtMC->Parameters->AddWithValue("@TxtMeliCode", MeliCode);
		Connect->Open();
		TxtFN->ExecuteNonQuery();
		TxtLN->ExecuteNonQuery();
		TxtMC->ExecuteNonQuery();

	}
	finally
	{
		if (Connect != nullptr)
		{
			Connect->Close();
		}
	}
}


};
 

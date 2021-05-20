#pragma once
#include "DataBase.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Employee : public System::Windows::Forms::Form
	{
	public:
		Employee(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TxtFirstName;
	private: System::Windows::Forms::TextBox^ TxtLastName;
	private: System::Windows::Forms::TextBox^ TxtMelicode;
	protected:



	private: System::Windows::Forms::Label^ LFirstName;
	private: System::Windows::Forms::Label^ LLastName;
	private: System::Windows::Forms::Label^ LMeliCode;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ Return;

	protected:

	protected:






	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TxtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->TxtLastName = (gcnew System::Windows::Forms::TextBox());
			this->TxtMelicode = (gcnew System::Windows::Forms::TextBox());
			this->LFirstName = (gcnew System::Windows::Forms::Label());
			this->LLastName = (gcnew System::Windows::Forms::Label());
			this->LMeliCode = (gcnew System::Windows::Forms::Label());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TxtFirstName
			// 
			this->TxtFirstName->Location = System::Drawing::Point(35, 25);
			this->TxtFirstName->Name = L"TxtFirstName";
			this->TxtFirstName->Size = System::Drawing::Size(141, 20);
			this->TxtFirstName->TabIndex = 0;
			this->TxtFirstName->TextChanged += gcnew System::EventHandler(this, &Employee::textBox1_TextChanged);
			// 
			// TxtLastName
			// 
			this->TxtLastName->Location = System::Drawing::Point(35, 64);
			this->TxtLastName->Name = L"TxtLastName";
			this->TxtLastName->Size = System::Drawing::Size(141, 20);
			this->TxtLastName->TabIndex = 1;
			this->TxtLastName->TextChanged += gcnew System::EventHandler(this, &Employee::LastName_TextChanged);
			// 
			// TxtMelicode
			// 
			this->TxtMelicode->Location = System::Drawing::Point(35, 100);
			this->TxtMelicode->Name = L"TxtMelicode";
			this->TxtMelicode->Size = System::Drawing::Size(141, 20);
			this->TxtMelicode->TabIndex = 2;
			// 
			// LFirstName
			// 
			this->LFirstName->AutoSize = true;
			this->LFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LFirstName->Location = System::Drawing::Point(231, 25);
			this->LFirstName->Name = L"LFirstName";
			this->LFirstName->Size = System::Drawing::Size(59, 16);
			this->LFirstName->TabIndex = 5;
			this->LFirstName->Text = L"نام کارمند";
			this->LFirstName->Click += gcnew System::EventHandler(this, &Employee::label1_Click);
			// 
			// LLastName
			// 
			this->LLastName->AutoSize = true;
			this->LLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLastName->Location = System::Drawing::Point(182, 64);
			this->LLastName->Name = L"LLastName";
			this->LLastName->Size = System::Drawing::Size(111, 16);
			this->LLastName->TabIndex = 6;
			this->LLastName->Text = L"نام خانوادگی کارمند";
			this->LLastName->Click += gcnew System::EventHandler(this, &Employee::label2_Click);
			// 
			// LMeliCode
			// 
			this->LMeliCode->AutoSize = true;
			this->LMeliCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LMeliCode->Location = System::Drawing::Point(211, 103);
			this->LMeliCode->Name = L"LMeliCode";
			this->LMeliCode->Size = System::Drawing::Size(80, 16);
			this->LMeliCode->TabIndex = 7;
			this->LMeliCode->Text = L"کد ملی کارمند";
			this->LMeliCode->Click += gcnew System::EventHandler(this, &Employee::label3_Click);
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::Color::Silver;
			this->Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save->ForeColor = System::Drawing::Color::DarkGreen;
			this->Save->Location = System::Drawing::Point(35, 147);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(101, 31);
			this->Save->TabIndex = 8;
			this->Save->Text = L"ذخیره اطلاعات";
			this->Save->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->Save->UseVisualStyleBackColor = false;
			this->Save->Click += gcnew System::EventHandler(this, &Employee::Save_Click);
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::Silver;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Return->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Return->Location = System::Drawing::Point(172, 147);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(96, 31);
			this->Return->TabIndex = 9;
			this->Return->Text = L"بازگشت";
			this->Return->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(320, 218);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->LMeliCode);
			this->Controls->Add(this->LLastName);
			this->Controls->Add(this->LFirstName);
			this->Controls->Add(this->TxtMelicode);
			this->Controls->Add(this->TxtLastName);
			this->Controls->Add(this->TxtFirstName);
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"فرم ثبت اطلاعات کارمندان";
			this->Load += gcnew System::EventHandler(this, &Employee::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LastName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DataBase Data;

	Data.insert(TxtFirstName->Text , TxtLastName->Text, TxtMelicode->Text);
}
};
}

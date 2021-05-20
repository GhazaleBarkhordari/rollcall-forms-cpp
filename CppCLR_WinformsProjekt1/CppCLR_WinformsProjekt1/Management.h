#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Management
	/// </summary>
	public ref class Management : public System::Windows::Forms::Form
	{
	public:
		Management(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Management()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EmployeeData;
	protected:

	private: System::Windows::Forms::Button^ RollCallData;
	private: System::Windows::Forms::Button^ Report;
	private: System::Windows::Forms::Button^ button1;
	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->EmployeeData = (gcnew System::Windows::Forms::Button());
			this->RollCallData = (gcnew System::Windows::Forms::Button());
			this->Report = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// EmployeeData
			// 
			this->EmployeeData->BackColor = System::Drawing::Color::Gainsboro;
			this->EmployeeData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmployeeData->ForeColor = System::Drawing::Color::Navy;
			this->EmployeeData->Location = System::Drawing::Point(51, 12);
			this->EmployeeData->Name = L"EmployeeData";
			this->EmployeeData->Size = System::Drawing::Size(174, 32);
			this->EmployeeData->TabIndex = 0;
			this->EmployeeData->Text = L"ثبت اطلاعات کارمند";
			this->EmployeeData->UseVisualStyleBackColor = false;
			this->EmployeeData->Click += gcnew System::EventHandler(this, &Management::EmployeeData_Click);
			// 
			// RollCallData
			// 
			this->RollCallData->BackColor = System::Drawing::Color::Gainsboro;
			this->RollCallData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RollCallData->ForeColor = System::Drawing::Color::Navy;
			this->RollCallData->Location = System::Drawing::Point(108, 61);
			this->RollCallData->Name = L"RollCallData";
			this->RollCallData->Size = System::Drawing::Size(174, 34);
			this->RollCallData->TabIndex = 1;
			this->RollCallData->Text = L"ثبت اطلاعات ورود -خروج";
			this->RollCallData->UseVisualStyleBackColor = false;
			// 
			// Report
			// 
			this->Report->BackColor = System::Drawing::Color::Gainsboro;
			this->Report->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Report->ForeColor = System::Drawing::Color::Navy;
			this->Report->Location = System::Drawing::Point(249, 161);
			this->Report->Name = L"Report";
			this->Report->Size = System::Drawing::Size(174, 31);
			this->Report->TabIndex = 2;
			this->Report->Text = L"گزارش";
			this->Report->UseVisualStyleBackColor = false;
			this->Report->Click += gcnew System::EventHandler(this, &Management::Report_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(173, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ثبت اطلاعات مرخصی";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Management
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(497, 230);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Report);
			this->Controls->Add(this->RollCallData);
			this->Controls->Add(this->EmployeeData);
			this->Name = L"Management";
			this->Text = L"پنل مدیریتی ";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Report_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EmployeeData_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Leave
	/// </summary>
	public ref class Leave : public System::Windows::Forms::Form
	{
	public:
		Leave(void)
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
		~Leave()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ LeaveEs;
	private: System::Windows::Forms::TextBox^ LeaveNEs;
	private: System::Windows::Forms::TextBox^ Takhir;
	private: System::Windows::Forms::Label^ LLeaveEs;
	private: System::Windows::Forms::Label^ LLeaveNEs;
	private: System::Windows::Forms::Label^ LTakhir;
	protected:

	protected:







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Button^ Save;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LeaveEs = (gcnew System::Windows::Forms::TextBox());
			this->LeaveNEs = (gcnew System::Windows::Forms::TextBox());
			this->Takhir = (gcnew System::Windows::Forms::TextBox());
			this->LLeaveEs = (gcnew System::Windows::Forms::Label());
			this->LLeaveNEs = (gcnew System::Windows::Forms::Label());
			this->LTakhir = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LeaveEs
			// 
			this->LeaveEs->Location = System::Drawing::Point(81, 13);
			this->LeaveEs->Name = L"LeaveEs";
			this->LeaveEs->Size = System::Drawing::Size(100, 20);
			this->LeaveEs->TabIndex = 0;
			// 
			// LeaveNEs
			// 
			this->LeaveNEs->Location = System::Drawing::Point(81, 56);
			this->LeaveNEs->Name = L"LeaveNEs";
			this->LeaveNEs->Size = System::Drawing::Size(100, 20);
			this->LeaveNEs->TabIndex = 1;
			// 
			// Takhir
			// 
			this->Takhir->Location = System::Drawing::Point(81, 104);
			this->Takhir->Name = L"Takhir";
			this->Takhir->Size = System::Drawing::Size(100, 20);
			this->Takhir->TabIndex = 2;
			// 
			// LLeaveEs
			// 
			this->LLeaveEs->AutoSize = true;
			this->LLeaveEs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLeaveEs->Location = System::Drawing::Point(212, 12);
			this->LLeaveEs->Name = L"LLeaveEs";
			this->LLeaveEs->Size = System::Drawing::Size(97, 18);
			this->LLeaveEs->TabIndex = 3;
			this->LLeaveEs->Text = L"مرخصی اسحقاقی";
			// 
			// LLeaveNEs
			// 
			this->LLeaveNEs->AutoSize = true;
			this->LLeaveNEs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLeaveNEs->Location = System::Drawing::Point(189, 55);
			this->LLeaveNEs->Name = L"LLeaveNEs";
			this->LLeaveNEs->Size = System::Drawing::Size(120, 18);
			this->LLeaveNEs->TabIndex = 4;
			this->LLeaveNEs->Text = L"مرخصی غیر اسحقاقی";
			// 
			// LTakhir
			// 
			this->LTakhir->AutoSize = true;
			this->LTakhir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LTakhir->Location = System::Drawing::Point(274, 103);
			this->LTakhir->Name = L"LTakhir";
			this->LTakhir->Size = System::Drawing::Size(35, 18);
			this->LTakhir->TabIndex = 5;
			this->LTakhir->Text = L"تاخیر";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 18);
			this->label1->TabIndex = 8;
			this->label1->Text = L"روز";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"روز";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ساعت";
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::Silver;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Return->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Return->Location = System::Drawing::Point(172, 162);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(96, 31);
			this->Return->TabIndex = 11;
			this->Return->Text = L"بازگشت";
			this->Return->UseVisualStyleBackColor = false;
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::Color::Silver;
			this->Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Save->ForeColor = System::Drawing::Color::DarkGreen;
			this->Save->Location = System::Drawing::Point(49, 162);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(101, 31);
			this->Save->TabIndex = 12;
			this->Save->Text = L"ذخیره اطلاعات";
			this->Save->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->Save->UseVisualStyleBackColor = false;
			// 
			// Leave
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(322, 205);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LTakhir);
			this->Controls->Add(this->LLeaveNEs);
			this->Controls->Add(this->LLeaveEs);
			this->Controls->Add(this->Takhir);
			this->Controls->Add(this->LeaveNEs);
			this->Controls->Add(this->LeaveEs);
			this->Name = L"Leave";
			this->Text = L"ثبت اطلاعات مرخصی و تاخیر";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

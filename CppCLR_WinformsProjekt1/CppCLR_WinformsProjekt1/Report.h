#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ MeliCode;
	protected:

	private: System::Windows::Forms::Label^ LMeliCode;
	private: System::Windows::Forms::Button^ GetReport;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RMelicode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RollTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CallTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Takhir;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LeaveEs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LeaveNEs;
	private: System::Windows::Forms::BindingNavigator^ bindingNavigator1;
	private: System::Windows::Forms::ToolStripLabel^ bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^ bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^ bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^ bindingNavigatorSeparator2;












	private: System::ComponentModel::IContainer^ components;





	protected:


	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MeliCode = (gcnew System::Windows::Forms::TextBox());
			this->LMeliCode = (gcnew System::Windows::Forms::Label());
			this->GetReport = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->RMelicode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RollTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CallTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Takhir = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LeaveEs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LeaveNEs = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			this->SuspendLayout();
			// 
			// MeliCode
			// 
			this->MeliCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeliCode->Location = System::Drawing::Point(278, 53);
			this->MeliCode->Name = L"MeliCode";
			this->MeliCode->Size = System::Drawing::Size(142, 22);
			this->MeliCode->TabIndex = 0;
			// 
			// LMeliCode
			// 
			this->LMeliCode->AutoSize = true;
			this->LMeliCode->BackColor = System::Drawing::Color::Beige;
			this->LMeliCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LMeliCode->Location = System::Drawing::Point(448, 53);
			this->LMeliCode->Name = L"LMeliCode";
			this->LMeliCode->Size = System::Drawing::Size(77, 18);
			this->LMeliCode->TabIndex = 1;
			this->LMeliCode->Text = L"کد ملی کارمند";
			// 
			// GetReport
			// 
			this->GetReport->BackColor = System::Drawing::Color::PowderBlue;
			this->GetReport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GetReport->Location = System::Drawing::Point(155, 53);
			this->GetReport->Name = L"GetReport";
			this->GetReport->Size = System::Drawing::Size(89, 32);
			this->GetReport->TabIndex = 2;
			this->GetReport->Text = L"گزارش گیری";
			this->GetReport->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::PaleGoldenrod;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Ivory;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->RMelicode,
					this->FirstName, this->LastName, this->RollTime, this->CallTime, this->Takhir, this->LeaveEs, this->LeaveNEs
			});
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::AliceBlue;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::DarkSeaGreen;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView1->Location = System::Drawing::Point(0, 91);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView1->Size = System::Drawing::Size(840, 248);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = nullptr;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = nullptr;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->bindingNavigatorMoveFirstItem,
					this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(840, 25);
			this->bindingNavigator1->TabIndex = 4;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			this->bindingNavigator1->RefreshItems += gcnew System::EventHandler(this, &MyForm::bindingNavigator1_RefreshItems);
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveFirstItem->Text = L"Move first";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMovePreviousItem->Text = L"Move previous";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Position";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Current position";
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(35, 22);
			this->bindingNavigatorCountItem->Text = L"of {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Total number of items";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveNextItem->Text = L"Move next";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveLastItem->Text = L"Move last";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// RMelicode
			// 
			this->RMelicode->Frozen = true;
			this->RMelicode->HeaderText = L"کد ملی";
			this->RMelicode->Name = L"RMelicode";
			this->RMelicode->ReadOnly = true;
			// 
			// FirstName
			// 
			this->FirstName->Frozen = true;
			this->FirstName->HeaderText = L"نام";
			this->FirstName->Name = L"FirstName";
			this->FirstName->ReadOnly = true;
			// 
			// LastName
			// 
			this->LastName->Frozen = true;
			this->LastName->HeaderText = L"نام خانوادگی";
			this->LastName->Name = L"LastName";
			this->LastName->ReadOnly = true;
			// 
			// RollTime
			// 
			this->RollTime->Frozen = true;
			this->RollTime->HeaderText = L"ساعت ورود";
			this->RollTime->Name = L"RollTime";
			this->RollTime->ReadOnly = true;
			// 
			// CallTime
			// 
			this->CallTime->Frozen = true;
			this->CallTime->HeaderText = L"ساعت خروج";
			this->CallTime->Name = L"CallTime";
			this->CallTime->ReadOnly = true;
			// 
			// Takhir
			// 
			this->Takhir->Frozen = true;
			this->Takhir->HeaderText = L"تاخیر";
			this->Takhir->Name = L"Takhir";
			this->Takhir->ReadOnly = true;
			// 
			// LeaveEs
			// 
			this->LeaveEs->Frozen = true;
			this->LeaveEs->HeaderText = L"مرخصی اسحقاقی";
			this->LeaveEs->Name = L"LeaveEs";
			this->LeaveEs->ReadOnly = true;
			// 
			// LeaveNEs
			// 
			this->LeaveNEs->Frozen = true;
			this->LeaveNEs->HeaderText = L"مرخصی غیر اسحقاقی";
			this->LeaveNEs->Name = L"LeaveNEs";
			this->LeaveNEs->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(840, 351);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->GetReport);
			this->Controls->Add(this->LMeliCode);
			this->Controls->Add(this->MeliCode);
			this->Name = L"MyForm";
			this->Text = L"فرم گزارش";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void bindingNavigator1_RefreshItems(System::Object^ sender, System::EventArgs^ e) {
}
};
}

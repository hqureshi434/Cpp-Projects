#pragma once
//Week 4 Listboxes
//Hammad Qureshi
//Created 2/27/2018
//Completed basic app 2/27/2018

//Updates:

namespace WindowsApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lstItems;
	protected:
	private: System::Windows::Forms::Label^  lblItems;
	private: System::Windows::Forms::TextBox^  txtNew;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Label^  lblIndex;
	private: System::Windows::Forms::Label^  lblProduct;

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
			this->lstItems = (gcnew System::Windows::Forms::ListBox());
			this->lblItems = (gcnew System::Windows::Forms::Label());
			this->txtNew = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblIndex = (gcnew System::Windows::Forms::Label());
			this->lblProduct = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lstItems
			// 
			this->lstItems->FormattingEnabled = true;
			this->lstItems->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Batteries", L"Flame Thrower", L"Apple" });
			this->lstItems->Location = System::Drawing::Point(58, 37);
			this->lstItems->Name = L"lstItems";
			this->lstItems->Size = System::Drawing::Size(120, 121);
			this->lstItems->TabIndex = 0;
			this->lstItems->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::lstItems_SelectedIndexChanged);
			// 
			// lblItems
			// 
			this->lblItems->AutoSize = true;
			this->lblItems->Location = System::Drawing::Point(201, 37);
			this->lblItems->Name = L"lblItems";
			this->lblItems->Size = System::Drawing::Size(52, 13);
			this->lblItems->TabIndex = 1;
			this->lblItems->Text = L"New Item";
			// 
			// txtNew
			// 
			this->txtNew->Location = System::Drawing::Point(259, 37);
			this->txtNew->Name = L"txtNew";
			this->txtNew->Size = System::Drawing::Size(100, 20);
			this->txtNew->TabIndex = 2;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(405, 37);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmMain::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(405, 87);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 4;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &frmMain::btnDelete_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(405, 135);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			// 
			// lblIndex
			// 
			this->lblIndex->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblIndex->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblIndex->Location = System::Drawing::Point(58, 188);
			this->lblIndex->Name = L"lblIndex";
			this->lblIndex->Size = System::Drawing::Size(244, 23);
			this->lblIndex->TabIndex = 6;
			// 
			// lblProduct
			// 
			this->lblProduct->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblProduct->Location = System::Drawing::Point(58, 229);
			this->lblProduct->Name = L"lblProduct";
			this->lblProduct->Size = System::Drawing::Size(244, 23);
			this->lblProduct->TabIndex = 7;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(515, 277);
			this->Controls->Add(this->lblProduct);
			this->Controls->Add(this->lblIndex);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtNew);
			this->Controls->Add(this->lblItems);
			this->Controls->Add(this->lstItems);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Using List Boxes";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//START OF MY CODE
	String^ const MessageTitle = "Hammad's Store";

#pragma region Load Listbox Items
	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		//Another way to add items
		lstItems->Items->Add("Soap");
		lstItems->Items->Add("Pear");
		lstItems->Items->Add("Bread");
		lstItems->Items->Add("Lysol");
		lstItems->Items->Add("Shampoo");
		lstItems->Items->Add("Cereal");

		//Sort the above items
		lstItems->Sorted = true;
	}

	private: System::Void lstItems_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//This will give the you the index of the item that you selected
		lblIndex->Text = "You selected item with index # " + lstItems->SelectedIndex;

		//This will return the text of the item chosen
		lblProduct->Text = "You selected " + lstItems->SelectedItem;
	}
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Add new items to list box if they typed in something		
		if (txtNew->Text->Trim() != "" && !(lstItems->Items->Contains(txtNew->Text)))
		{
			lstItems->Items->Add(txtNew->Text);
			txtNew->Text = "";
		}
	}
	private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MessageBox::Show("Are you sure?", MessageTitle, MessageBoxButtons::YesNo,
			MessageBoxIcon::Question, MessageBoxDefaultButton::Button2) == 
			Windows::Forms::DialogResult::Yes) //DiaglogsResult is like saying if the person hits the yes button then do this and vice versa
		{
			lstItems->Items->Remove(lstItems->SelectedItem);
		}
	}
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//This is how you close a program
		this->Close();
	}
};
}

#pragma once

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
		frmMain(void)//This is the constructor for this class
		{
			InitializeComponent();//this creates all of our controls
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()//this is the destructor for this class
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtCity;
	private: System::Windows::Forms::ComboBox^  cboStates;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnQuit;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->cboStates = (gcnew System::Windows::Forms::ComboBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(39, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"City";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"State";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(132, 48);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 3;
			// 
			// txtCity
			// 
			this->txtCity->Location = System::Drawing::Point(132, 84);
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(100, 20);
			this->txtCity->TabIndex = 4;
			// 
			// cboStates
			// 
			this->cboStates->FormattingEnabled = true;
			this->cboStates->Location = System::Drawing::Point(132, 121);
			this->cboStates->Name = L"cboStates";
			this->cboStates->Size = System::Drawing::Size(121, 21);
			this->cboStates->TabIndex = 5;
			this->cboStates->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::cboStates_SelectedIndexChanged);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(278, 45);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &frmMain::btnOK_Click);
			// 
			// btnQuit
			// 
			this->btnQuit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnQuit->Location = System::Drawing::Point(278, 84);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(75, 23);
			this->btnQuit->TabIndex = 7;
			this->btnQuit->Text = L"Quit";
			this->btnQuit->UseVisualStyleBackColor = true;
			this->btnQuit->Click += gcnew System::EventHandler(this, &frmMain::btnQuit_Click);
			// 
			// frmMain
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnQuit;
			this->ClientSize = System::Drawing::Size(396, 220);
			this->Controls->Add(this->btnQuit);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->cboStates);
			this->Controls->Add(this->txtCity);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Using Switch Statements";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    /********************Start of my code*************************/
	double salesTaxRate{};

	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		//everything inside this event will run just before the form is visible
		//Fill the combobox
		cboStates->Items->Add("CA");
		cboStates->Items->Add("AZ");
		cboStates->Items->Add("WA");
		cboStates->Items->Add("OR");
		cboStates->Items->Add("OR");
		cboStates->Items->Add("NV");
		cboStates->Sorted = true;
		//things done in code override any property
	}

	private: System::Void cboStates_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//grab the item they chose
		switch (cboStates->SelectedIndex)//selected index will return the index number of the item chosen
		{
			case 0:
				salesTaxRate = .05;
				break;
			case 1:
				salesTaxRate = .08;
				break;
			case 2:
				salesTaxRate = .01;
				break;
			case 3:
			case 4:
				salesTaxRate = .02;
				break;
			default:
				salesTaxRate = 0;
				break;
		}
	}

	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MessageBox::Show("The sales tax for " + cboStates->SelectedItem->ToString() + " is "
			+ salesTaxRate + ".", "Using Switch", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}

	private: System::Void btnQuit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
	}
};
}

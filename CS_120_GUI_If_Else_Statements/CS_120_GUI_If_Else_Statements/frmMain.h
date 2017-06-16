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
	private: System::Windows::Forms::Label^  lblItemSelected;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtItem;
	private: System::Windows::Forms::TextBox^  txtQuantity;
	private: System::Windows::Forms::ListBox^  lbProducts;

	private: System::Windows::Forms::Button^  btnCheckOut;
	private: System::Windows::Forms::Button^  btnExit;

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
			this->lblItemSelected = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtItem = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->lbProducts = (gcnew System::Windows::Forms::ListBox());
			this->btnCheckOut = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblItemSelected
			// 
			this->lblItemSelected->Location = System::Drawing::Point(29, 46);
			this->lblItemSelected->Name = L"lblItemSelected";
			this->lblItemSelected->Size = System::Drawing::Size(79, 19);
			this->lblItemSelected->TabIndex = 0;
			this->lblItemSelected->Text = L"Item Selected:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Quantity:";
			// 
			// txtItem
			// 
			this->txtItem->Location = System::Drawing::Point(151, 44);
			this->txtItem->Name = L"txtItem";
			this->txtItem->Size = System::Drawing::Size(100, 20);
			this->txtItem->TabIndex = 2;
			// 
			// txtQuantity
			// 
			this->txtQuantity->Location = System::Drawing::Point(151, 103);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(100, 20);
			this->txtQuantity->TabIndex = 3;
			this->txtQuantity->Text = L"1";
			// 
			// lbProducts
			// 
			this->lbProducts->FormattingEnabled = true;
			this->lbProducts->Location = System::Drawing::Point(307, 44);
			this->lbProducts->Name = L"lbProducts";
			this->lbProducts->Size = System::Drawing::Size(120, 95);
			this->lbProducts->TabIndex = 4;
			this->lbProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::lstProducts_SelectedIndexChanged);
			// 
			// btnCheckOut
			// 
			this->btnCheckOut->Location = System::Drawing::Point(469, 41);
			this->btnCheckOut->Name = L"btnCheckOut";
			this->btnCheckOut->Size = System::Drawing::Size(75, 23);
			this->btnCheckOut->TabIndex = 5;
			this->btnCheckOut->Text = L"Check Out";
			this->btnCheckOut->UseVisualStyleBackColor = true;
			this->btnCheckOut->Click += gcnew System::EventHandler(this, &frmMain::btnCheckOut_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(469, 116);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"&Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 197);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCheckOut);
			this->Controls->Add(this->lbProducts);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtItem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblItemSelected);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Learning to Work With If Statements";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//
#pragma endregion
	//**********Start of my Code**************
		
	//---Class Level/Module Level/Form Level Declares
	String^ msgBoxTitle = "Hammad's Shop"; //This is a reference variable

	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		lbProducts->Items->Add("Shoes");
		//(name of control)->(property)->(method of that property)

		//A collection is a grouping of similar objects
		lbProducts->Items->Add("Hat");
		lbProducts->Items->Add("Pant");
		lbProducts->Items->Add("Shirt");
		lbProducts->Items->Add("Socks");
		//Inside this event will load right before the form loads

		lbProducts->Sorted = true;

		//---disable checkout
		btnCheckOut->Enabled = false;
		
	}

	private: System::Void lstProducts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		//the default event handler for the listbox is called SelectedIndexChanged
		if (lbProducts->SelectedIndex != -1)//If it is -1 they chose something
		//---"!=" is "not equal to"
		//---"!" is "not"
		{
			btnCheckOut->Enabled = true;
			txtItem->Text = lbProducts->SelectedItem->ToString();
			//(Control)->(property) = (control)->(property)->(method)
			//Convert the data we get from the selected item in the listbox and store it in the text property of the text box
		}
		else
		{
			btnCheckOut->Enabled = false;
		}
	}
    
	//Check out button
	private: System::Void btnCheckOut_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//default event handler for all buttons is the Click Event
		String^ myItem = txtItem->Text->Trim();//Trim() removes spaces from the front and back of the string

		if (txtQuantity->Text->Trim() != String::Empty)
		{
			int myQuantity = Convert::ToInt32(txtQuantity->Text->Trim());
			/*
			  -get the text form txtQuantity remove the extra spaces convert it to an int(32 bit integer) 
			   assign the converted value to an int variable named myQuantity
			*/

			//MessageBox::Show(message, title, buttons, icon); <-must be in this order
			                  //there are 4 arguments that are being passed to the method
			MessageBox::Show("You purchased " + myItem, msgBoxTitle, 
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Please enter a quantity of 1 or more.", msgBoxTitle,
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtItem->Clear();
			txtQuantity->Focus();
		}
	}

	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MessageBox::Show("Are you sure?", msgBoxTitle,
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
};
}

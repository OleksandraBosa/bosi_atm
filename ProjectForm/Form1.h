#pragma once

using namespace System::Diagnostics;

namespace ProjectForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

	 Mobile *phone1;
	 Mobile *phone2;
	 Card *carddebit;
	 Card *cardcredit;
	 CashDispenser *cashDispenser;
	 ProcessingCenter *processingCenter;
	 size_t password;
	 static public size_t count = 0;
	 __int64 a, c,d,b;
	 String ^s;
	 static public bool flag = true ; 
	 static public bool disable = true;
	 size_t receipt;
	 static public size_t x = 0;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	public: 
		MobileOperator * mobileOperator;
	
 
		Form1(void)
		{
			InitializeComponent();
			
			phone1 = new Mobile(380983388022, 30);
	        phone2 = new Mobile(380636281803, 50);
			mobileOperator = new MobileOperator();
			mobileOperator->addMobile(*phone1);
			mobileOperator->addMobile(*phone2);
	        carddebit= new Card(5566,5555,200,debit,*phone1);
	        cardcredit= new Card(2244,2222,-1000,credit,*phone2);
	        processingCenter = new ProcessingCenter();
	 	    cashDispenser = new CashDispenser();
	       processingCenter->addCard(*carddebit);
	       processingCenter->addCard(*cardcredit);
		 

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button16;

	private: System::Windows::Forms::Button^  button14;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button15;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"DS Crystal", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->ForeColor = System::Drawing::Color::Lime;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"У Вас є картка\?", L" Так", L" Нi"});
			this->listBox1->Location = System::Drawing::Point(173, 158);
			this->listBox1->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(240, 166);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(26, 24);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(38, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 24);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(70, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 24);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(6, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 24);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(38, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(26, 24);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(70, 32);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(26, 24);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(6, 55);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(26, 24);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(102, 9);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 24);
			this->button8->TabIndex = 8;
			this->button8->Text = L"x";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(38, 55);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(26, 24);
			this->button9->TabIndex = 9;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(70, 55);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(26, 24);
			this->button10->TabIndex = 10;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(102, 32);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 24);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Ok";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(102, 55);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 24);
			this->button12->TabIndex = 12;
			this->button12->Text = L"<";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(184, 315);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 111);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(102, 81);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 24);
			this->button16->TabIndex = 16;
			this->button16->Text = L"R";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(38, 81);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 24);
			this->button15->TabIndex = 15;
			this->button15->Text = L"Info";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(6, 81);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(26, 24);
			this->button14->TabIndex = 14;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(95, 432);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 168);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(303, 449);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(163, 133);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(331, 400);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(123, 113);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(348, 416);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(232, 166);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(20, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(576, 577);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->MaximumSize = System::Drawing::Size(592, 616);
			this->MinimumSize = System::Drawing::Size(592, 616);
			this->Name = L"Form1";
			this->Text = L"Bo.Si.ATM";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				  
			 }
	

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		 }





public: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	 
		switch(x)
		{
		case 0:
			if(this->listBox1->SelectedIndex==1) 
			{
				enterCard();
				pictureBox4->Visible = true;
				disable = true;
				click=0;
				x=1;
			}
			if(this->listBox1->SelectedIndex==2) 
			{
				 choose();
			};
		    
		case 3:
		 if(this->listBox1->SelectedIndex==2)
		 {
			 this->listBox1-> Items->Clear(); 
			 disable = true;
			 enter2transfer();
			 click=0;
			 x=4;
		 }
		 if(this->listBox1->SelectedIndex==3)
		 {
			 disable = true;
			 entersum2trans();
			 click=0;
			 x=5;
		 }
		 if(this->listBox1->SelectedIndex==4)
		 {
			 disable = true;
			 this->listBox1-> Items->Clear(); 
			 enterAmount();
			 click=0;
			 x=6;
		 }
		 if(this->listBox1->SelectedIndex==5)
		 {
			 disable = true;
			 enterNum();
			 click=0;
			 x=7;
		 }
		 if(this->listBox1->SelectedIndex==6)
		 {
			 this->listBox1-> Items->Clear(); 
			 this->listBox1->Items->Add("Ваш баланс :  ");
			 listBox1->Items[0]+=System::Convert::ToString(processingCenter->showBalance(a));
			 listBox1->Items[0]+=" грн.";
			 success2();
			 receipt=6;
		 } 
		 if(this->listBox1->SelectedIndex==7)
		 {
			 disable = true;
			 this->listBox1-> Items->Clear(); 
			 enterAmount();
			 x=8;
			 click=0;
		 }
		 break;
		case 12:
			if(this->listBox1->SelectedIndex==2)
			{
				Deposit depozit (a, cashDispenser->getCash());
				if( depozit.deposit(*processingCenter))
				{
					success();
					receipt=4;
				}
				else
				{
					error();
				}
			}
			if(this->listBox1->SelectedIndex==3)
			{
				takeCash();
			}
			break;
		case 13:
			if(this->listBox1->SelectedIndex==0)
			{
				Deposit depozit(a, cashDispenser->getCash());
				if(depozit.deposit(*processingCenter))
				{
					success();
					receipt=4;
				}
				else
				{
					error();
				}
			}
			if(this->listBox1->SelectedIndex==1)
			{
				this->listBox1-> Items->Clear(); 
				this->listBox1->Items->Add("Заберіть решту ");
				listBox1->Items[0]+=System::Convert::ToString(cashDispenser->change(c));
				listBox1->Items[0]+=" грн.";
				Deposit depozit(a, c);
				if(depozit.deposit(*processingCenter))
				{
					success2();
					pictureBox1->Visible = true;
					receipt=7;
				}
				else
				{
					error();
				}
			}
			if(this->listBox1->SelectedIndex==2)
			{
				flag=true;
				enterNum2dep();
				disable = true;
				click=0;
				x=28;
			}
			break;
         case 15:
			  if(this->listBox1->SelectedIndex==2)
			  {
				  disable = true;
			      enterCard2trans();
				  click=0;
				  x=16;
			  }
			  if(this->listBox1->SelectedIndex==3)
			  {
				  disable = true;
				  enterMobnum();
				  click=0;
				  flag=true;
		          x=19;
			  }
			  break;
		 case 22:
			 if(this->listBox1->SelectedIndex==2)
			 {
				 mobileOperator->addBalanceMobile(a,cashDispenser->getCash());
				 Phone^ phone = gcnew Phone( mobileOperator->showsms(a,cashDispenser->getCash()));
				 phone->Show();
			     success();
				 flag=false;
			     receipt=8;
			 }
             if(this->listBox1->SelectedIndex==3)
			 {
				 takeCash();
				 flag=false;
			 }
			 break;
		 case 23:
			 if(this->listBox1->SelectedIndex==0)
			 {
				 mobileOperator->addBalanceMobile(a,cashDispenser->getCash());
				 Phone^ phone = gcnew Phone( mobileOperator->showsms(a,cashDispenser->getCash()));
				 phone->Show();
				 success();
				 flag=false;
				 receipt=8;
			 }
			 if(this->listBox1->SelectedIndex==1)
			 {
				 this->listBox1-> Items->Clear(); 
				 this->listBox1->Items->Add("Заберіть решту ");
				 listBox1->Items[0]+=System::Convert::ToString(cashDispenser->change(c));
				 listBox1->Items[0]+=" грн.";
				 mobileOperator->addBalanceMobile(a,c);
				 Phone^ phone = gcnew Phone( mobileOperator->showsms(a,c));
				 phone->Show();
				 success2();
				 flag=false;
				 pictureBox1->Visible = true;
				 receipt=9;	 
			 }
			 break;
		 case 24: 
			 if(this->listBox1->SelectedIndex==1)
			 {
				 enterSms();
				 disable = true;
				 password = processingCenter->generator();
				 Phone^ phone = gcnew Phone(processingCenter->smsGenerator(a,password,*mobileOperator));
				 phone->Show();
			     click=0;
				 x = 25;
				 click=0;
			 }
			 if(this->listBox1->SelectedIndex==2)
			 {
				 takeCard();
			 }
			 break;
		 case 26 : 
			 if(this->listBox1->SelectedIndex==8)
			 {
				 pictureBox3->Visible = false;
				 menu();
			 }
			 break;
		 case 27 :
			 pictureBox1->Visible = false;
			 if(this->listBox1->SelectedIndex==4)
			 {
				 if (!flag)
				 {
					 choose();
					 flag=true;
				 }
				 else
				 {  
					 chooseCard();
				 }
			 }
			 if(this->listBox1->SelectedIndex==5)
			 {
				 if (!flag)
				 {
					 click=0;
			         menu();
					 flag=true;
				 }
				 else
				 {
					 count=0;
					 takeCard();
				 }
			 }
			 break;
}		
}

//кнопки клавіатури з обмеженнями на введення цифр
		static public size_t click = 0;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button1->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button1->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button1->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button1->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button1->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button2->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button2->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button2->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button2->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button2->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button3->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button3->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button3->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button3->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button3->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button4->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button4->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button4->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button4->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button4->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button5->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button5->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button5->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button5->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button5->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button6->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button6->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button6->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button6->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button6->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button7->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button7->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button7->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button7->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button7->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button9->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button9->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button9->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button9->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button9->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button10->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button10->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button10->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button10->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button10->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			if((x==1&&click<16)||(x==5&&click<5)||(x==6&&click<5)||(x==7&&click<12&&flag)||(x==8&&click<4)||(x==25&&click<4)||(x==28&&click<12)) listBox1->Items[1]+=button14->Text;
			if((x==2&&click<4)||(x==11&&click<6)||(x==14&&click<5))listBox1->Items[3]+=button14->Text;
			if((x==4&&click<16&&flag)||(x==16&&click<16&&flag)||(x==19&&click<12&&flag)) listBox1->Items[2]+=button14->Text;
			if((x==9&&click<5)||(x==17&&click<5)||(x==20&&click<5)) listBox1->Items[4]+=button14->Text;
			if((x==18&&click<6)||(x==21&&click<6)) listBox1->Items[6]+=button14->Text;

			if(click<4&&(x==8||x==2||x==25)) ++click;
			if(click<5&&(x==5||x==17||x==20||x==6||x==14||x==9)) ++click;
			if(click<6&&(x==11||x==18||x==21)) ++click;
			if(click<16&&(x==1||x==4||x==16)) ++click;
			if(click<12&&(x==7||x==19||x==28)) ++click;
		 }

//Книпка "ОК"
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 click=0;
			 //залежно від того яка зараз операція, доступна кнопка чи ні
			 if(x==1||x==5||x==6||x==8||x==7||x==25||x==28&&disable)
			 {
				 String ^s=listBox1->Items[1]->ToString(); 
				 if (s!="") 
				 disable = false;
			 }
		
			 if((x==4&&flag)||(x==16&&flag)||x==19&&disable)
			 {
				 String ^s=listBox1->Items[2]->ToString(); 
				 if (s!="") 
				 disable = false;
			 }
			 
			 if(!disable)
			 {
				 //якщо є картка, то ввести номер
				if(x==0)
				{ 
					x=1;
					enterCard();
					click=0;
					flag=false;
					disable = true;   
				}

				if (x==1)
				{
					String ^s=listBox1->Items[1]->ToString(); 
					if (s!="") {flag = true;} 
				}
				
				if(x==1&&flag)
				{ 
					disable = false;
					pictureBox4->Visible = false;
					a = System::Convert::ToInt64(listBox1->Items[1]);
					
					if(processingCenter->checkCard(a)==-1)
					{
						incorrectCard();
						x = 0;
					}
					else
						if(processingCenter->isAccessible(a))
						{
							click=0;
							x=2;
							this->listBox1->Items->Add("Ведіть пароль: ");
							this->listBox1-> Items->Add("");
						}
					else
					{
						lockedCard();
					}
				}

             //перевірка пароля
			 if(x==2)
			 {
				 String ^s=listBox1->Items[3]->ToString(); 
				 if (s!="")
				 { 
				 b = System::Convert::ToInt32(listBox1->Items[3]);
				 ++count; 

				 if(processingCenter->checkCard(a,b)==1)
				 {
			     chooseCard();
				 }
				 else 
					 if (processingCenter->checkCard(a,b)==0)
					 {
						 if (count<3)// якщо тричі неправильно, то заблокувати
						 {
							 incorrectpswd();
							 x = 0;
						 }
						 else{
							 processingCenter->makeInAccessible(a);
							 x=24;
							 count=0;
							 lockedCard2();
						 }
					 }
				 }	
			 }
			 
			 
			 // операція переказати кошти
			 if(x==4)
			 {
				 if(!flag)//якщо не правильно введена картка
				 {
					 click=0;
					 this->listBox1-> Items->Clear(); 
					 disable = true;
					 enter2transfer();
					 flag=true;
				 }
				 
				 String ^s=listBox1->Items[2]->ToString(); 
				 if (s!="")
				 {
					 c = System::Convert::ToInt64(listBox1->Items[2]);

					 if(c==a) //якщо переказуємо на ту ж картку
					 {
						 impossibleOp();
						 flag=false;
					 }
					 else 
						 if(processingCenter->checkCard(c)==-1)
						 {
							 incorrectCard();
							 flag=false;
						 }
						 else  
							 if(processingCenter->checkCard(c)==0)
							 {
								 this->listBox1->Items->Add("Ведіть суму: ");
								 this->listBox1-> Items->Add("");
								 click=0;
								 x = 9;
							 }
				 }
			 }
			 //введення суми для переказу
			 if(x==9)
			 {
				 s=listBox1->Items[4]->ToString();
				 if (s!="" )  
				 {
					 x=10;
					 d = System::Convert::ToInt64(listBox1->Items[4]);
				 }
			 }

			 if(x==10 )
			 {
				 //створення переказу 
				 Transfer t (c, d, a);
				 if(t.deposit(*processingCenter)==1)
				 {
					 success();
					 disable = true;
					 receipt=0;
				 }
				 else 
					 if(t.deposit(*processingCenter)==2)
					 {
						 noFunes();
					 }
					 else 
						 if(t.deposit(*processingCenter)==3)
						 {
							 noLimit();
						 }
						 else
						 {
							 lock2();
						 }
			 }

			 //поповнення свого рахунку
			 if (x==5)
			 {
				 c = System::Convert::ToInt64(listBox1->Items[1]);
				 this->listBox1->Items->Add("Ведіть гроші: ");
				 this->listBox1-> Items->Add("");
				 click=0;
				 x=11;
			 }

			 if(x==11)
			 {
				 s=listBox1->Items[3]->ToString(); 
				 pictureBox2->Visible = true;
				 if (s!="") 
				 {
					 pictureBox2->Visible = false;
					 d = System::Convert::ToInt64(listBox1->Items[3]);
					 cashDispenser->setCash()= d;
					 //перевірка введеної суми і грошей
					 if( cashDispenser->processing(c)==0)
					 {
						 noFunes2();
						 x=12;
					 }
					 
					 if( cashDispenser->processing(c)==1)
					 {
						 transMore();
						 x=13;
					 }
					 if( cashDispenser->processing(c)==2)
					 {
						 Deposit depozit(a, cashDispenser->getCash());
						 
						 if (depozit.deposit(*processingCenter))
						 {
							 success();
							 receipt=4;
						 }
						 else 
						 {
							 error();
						 }
					 }
				 }
			 }
			 
			 //поповнення свого мобільного
			 if(x==6)
			 {
			 
				 c = System::Convert::ToInt64(listBox1->Items[1]);
				 if(processingCenter->refillMobile(a,c,*mobileOperator)==1)
				 {
					 Phone^ phone = gcnew Phone( mobileOperator->showsms(processingCenter->getCardMobile(a),c));
					 phone->Show();
					 success();
					 receipt=1;
				 }
				 else 
					 if(processingCenter->refillMobile(a,c,*mobileOperator)==2)
					 {
						 noFunes();
					 }
					 else 
						 if(processingCenter->refillMobile(a,c,*mobileOperator)==3)
						 {
							 noLimit();
						 } 
			 }
			 //поповнення іншого мобільного
			 if(x==7)
			 {
				 if (!flag)
				 {
					 click=0;
					 enterNum();
					 flag=true;	   
				 }
				 s=listBox1->Items[1]->ToString(); 
				 
				 if (s!="")
				 {
					 c = System::Convert::ToInt64(listBox1->Items[1]);
					 if( !mobileOperator->checkMobile(c))
					 {
						 click=0;
						 x=14;
						 enterAmount();
					 }
					 else 
					 {
						 incorrectMob();
						 flag=false;
					 }
				 }
			 }

			 if(x==14)
			 {
				 s=listBox1->Items[3]->ToString();
				 if (s!="")  
				 {
					 d = System::Convert::ToInt64(listBox1->Items[3]);
					 if(processingCenter->changeBalanceMinus(a,d)==1)
					 {
						 mobileOperator->addBalanceMobile(c,d);
						 Phone^ phone = gcnew Phone( mobileOperator->showsms(c,d));
						 phone->Show();
						 success();
						 receipt=2;
					}
					 else 
						 if(processingCenter->changeBalanceMinus(a,d)==2)
						 {
							 noFunes();
						 }
						 else 
							 if(processingCenter->changeBalanceMinus(a,d)==3)
							 {
								 noLimit();			
							 }
							 else
							 {
								 error();
							 }
				 }
			 }
			 
			 //зняття коштів
			 if (x==8)
			 {
				
				 if (!flag)
				 {
					 disable = true;
				     flag = true; 
				     click=0;
				     this->listBox1-> Items->Clear(); 
		             enterAmount();
				 }
				 
				 s=listBox1->Items[1]->ToString(); 
				 if (s!="")  
				 {
					 d = System::Convert::ToInt64(listBox1->Items[1]);

					 if(d<20||d>1500)
					 {
						 invalidValue();
						 flag = false;
					 }
					 else
					 {
						 size_t answer = processingCenter->changeBalanceMinus(a,d);
						
						 if(answer==1)
						 {
							 this->listBox1->Items->Add("Заберіть гроші ");
							 pictureBox1->Visible = true;
							 success();
							 receipt=3;
						 }
						 else 
							 if(answer==2)
							 {
								noFunes();
							 }
							 else 
								 if(answer==3)
								 {
									 noLimit();
								 }
								 else
								 {
									 error();
								 }
					 }
				 }
			 }
			 //попвнення картки
			 if(x==16)
			 {
				 
				 if (!flag)
				 {
					 click=0;
					 flag=true;
					 enterCard2trans();	   
				 }
				 
				 s=listBox1->Items[2]->ToString(); 
				 
				 if (s!="")
				 {
					 a = System::Convert::ToInt64(listBox1->Items[2]);
					 if(processingCenter->checkCard(a)==-1)
					 {
						 flag=false;
						 click=0;
						 incorrectCard();
					 }
					 else  
						 if(processingCenter->checkCard(a)==0)
						 {
							 if(processingCenter->isAccessible(a))
							 {
								 enterAmount();
								 click=0;
								 x=17;
							 }
							 else 
							 {
								 flag=false;
								 lock();
								 
							 }
						 }
				 }
			 }
			 
			 if(x==17)
			 {
				 s=listBox1->Items[4]->ToString();
				 if (s!="")  
				 {
					 c = System::Convert::ToInt64(listBox1->Items[4]);
					 this->listBox1->Items->Add("Введіть гроші: ");
					 this->listBox1-> Items->Add("");
					 click=0;
					 x=18;

				}
			 }
			 
			 if(x==18)
			 {
				  pictureBox2->Visible = true;
			      s=listBox1->Items[6]->ToString();
				  if (s!="")  {
				  pictureBox2->Visible = false;
				  d = System::Convert::ToInt64(listBox1->Items[6]);	
			      cashDispenser->setCash()= d;
				  
				  if( cashDispenser->processing(c)==0)
				  {
					  noFunes2();
					  x=12;
					  flag=false;
				  }
				  
				  if( cashDispenser->processing(c)==1)
				  {
					  transMore();
					  x=13;
					  flag=false;
				  }
				  
				  if( cashDispenser->processing(c)==2)
				  {
					  //створення переказу
					  Deposit depozit(a, cashDispenser->getCash());
					  
					  if(depozit.deposit(*processingCenter))
					  {
						  this->listBox1-> Items->Clear();
						  success();
						  flag=false;
						  receipt=4;
					  }
					  else 
					  {
						  error();
					  }
				  }
				  }
			 }
			 //поповнення мобільного
			 if(x==19)
			 {
				 if (!flag)
				 {
					 click=0;
					 flag=true;
					 enterMobnum();	   
				 }
				 
				 s=listBox1->Items[2]->ToString(); 

				if (s!="") 
				{
					a = System::Convert::ToInt64(listBox1->Items[2]);
					if( !mobileOperator->checkMobile(a))
					{
						click=0;
						x=20;
						enterAmount();
					}
					else 
					{
						incorrectMob();
						flag=false;
					}
				}
			 }
			 
			 if (x==20)
			 {
				 s=listBox1->Items[4]->ToString();
				 if (s!="") 
				 {
					 c = System::Convert::ToInt64(listBox1->Items[4]);
					 this->listBox1->Items->Add("Введіть гроші: ");
					 this->listBox1-> Items->Add("");
					 click=0;
					 x=21;
				 } 
			 }
			 
			 if(x==21)
			 {
				 pictureBox2->Visible = true;
				 s=listBox1->Items[6]->ToString();
				 if (s!="") 
				 {
					pictureBox2->Visible = false;
					d = System::Convert::ToInt64(listBox1->Items[6]);
			        cashDispenser->setCash()= d;
					
					if( cashDispenser->processing(c)==0)
					{
						noFunes2();
						x=22;
					}
					if( cashDispenser->processing(c)==1)
					{
						transMore2();
						x=23;
					}
					
					if( cashDispenser->processing(c)==2)
					{
						this->listBox1-> Items->Clear(); 
						mobileOperator->addBalanceMobile(a,d);
						Phone^ phone = gcnew Phone( mobileOperator->showsms(a,d));
						phone->Show();
						success();
						flag=false;
						receipt=5;
					}
				 }
			 }
			 //розблокування картки
			 if(x==25)
			 {
				 c = System::Convert::ToInt64(listBox1->Items[1]);
				 if(c==password)
				 {
					 processingCenter->makeAccessible(a);
					 unlockedCard();
					 x=27;
				}
				else 
				{
					incorrectpswrd2();
				}	
			 }
			 //перекинути решту на мобільний
			 if (x==28)
			 {
				 if (!flag)
				 {
					 click=0;
					 flag=true;
					 enterNum2dep();
				 }
				 s=listBox1->Items[1]->ToString();
				 
				 if (s!="") 
				 {
					 b = System::Convert::ToInt64(listBox1->Items[1]);
					 
					 if( !mobileOperator->checkMobile(b))
					 {
						 Deposit depozit(a, c);
						 if(depozit.deposit(*processingCenter))
						 {
							 flag=false;
							 success();
							 receipt=7;
						 }
						 else
						 {
							 error();
						 }
						 click=0;
						 mobileOperator->addBalanceMobile(b,cashDispenser->change(c));
						 Phone^ phone = gcnew Phone( mobileOperator->showsms(b,cashDispenser->change(c)));
						 phone->Show();
					 }
					 else 
					 {
						 incorrectMob();
						 flag=false;
					 }
				 }
			 }
}
 }



 //Книпка "Стерти"
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			if(click) --click;
			 if(x==1||x==5||x==6||(x==7&&flag)||x==8||x==25||x==28)listBox1->Items[1]= listBox1->Items[1]==""? "" : (System::Convert::ToInt64(listBox1->Items[1])/10)?System::Convert::ToString(System::Convert::ToInt64(listBox1->Items[1])/10):"";
			 if(x==2||x==11||x==14) listBox1->Items[3]=listBox1->Items[3]==""? "" : (System::Convert::ToInt64(listBox1->Items[3])/10)?System::Convert::ToString(System::Convert::ToInt64(listBox1->Items[3])/10):"";
			 if((x==4&&flag)||(x==16&&flag)||(x==19&&flag)) listBox1->Items[2]=listBox1->Items[2]==""? "" : (System::Convert::ToInt64(listBox1->Items[2])/10)?System::Convert::ToString(System::Convert::ToInt64(listBox1->Items[2])/10):"";
			 if(x==9||x==20||x==17) listBox1->Items[4]=listBox1->Items[4]==""? "" : (System::Convert::ToInt64(listBox1->Items[4])/10)?System::Convert::ToString(System::Convert::ToInt64(listBox1->Items[4])/10):"";
			 if(x==18||x==21) listBox1->Items[6]=listBox1->Items[6]==""? "" : (System::Convert::ToInt64(listBox1->Items[6])/10)?System::Convert::ToString(System::Convert::ToInt64(listBox1->Items[6])/10):"";
				 }
//Книпка "назад"
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  click=0;
			  pictureBox3->Visible = false;
			  pictureBox1->Visible = false;
			  pictureBox2->Visible = false;
			  pictureBox4->Visible = false;
			  count=0;

			 if(x==1||x==2||x==3||x==15||x==0)
			 {
				 menu();
			 }
			if(x==16||x==17||x==18||x==19||x==20||x==21||(x==27&&!flag))
			{    
				flag=true;
				choose();
			}

			if(x==4||x==5||x==6||x==7||x==8||x==9||x==10||x==14||(x==27&&flag))
			{
			if(x==8&&!flag) 
				flag=true; 
			 chooseCard();    
			}
			 
		 }
//Кнопка "Роздрукувати чек"
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	Receipt ^receipt1;
	 if(x==27){
			 switch(receipt)
			 {
			 case 0 : 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(d).receiptTransfer(a,c));
				 receipt1->Show();	
				 
				 break;
            case 1 : 
				 
				  receipt1 = gcnew Receipt(ReceiptPrint(c).receiptMobilefromCard(a,processingCenter->getCardMobile(a)));
				 receipt1->Show();
				 
				 break;
		  case 2: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(d).receiptMobilefromCard(a,c));
				 receipt1->Show();
				 
				 break;
		case 3: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(d).receiptWithdraw(a));
				 receipt1->Show();
				 break;
		case 4: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(cashDispenser->getCash()).receiptAdd(a));
				 receipt1->Show();
				
				 break;
	    case 5: 
				 
				  receipt1 = gcnew Receipt(ReceiptPrint(d).receiptMobile(a));
				 receipt1->Show();
				 
				 break;
	    case 6: 
				  
				 receipt1 = gcnew Receipt(ReceiptPrint(processingCenter->showBalance(a)).receiptBalance(a));
				 receipt1->Show();
				  
				 break;
	    case 7: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(c).receiptAdd(a));
				 receipt1->Show();
				 
				 break;
		 case 8: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(cashDispenser->getCash()).receiptMobile(a));
				 receipt1->Show();
				 
				 break;
	   case 9: 
				 
				 receipt1 = gcnew Receipt(ReceiptPrint(c).receiptMobile(a));
				 receipt1->Show();
				 break;
	
			
			 }
	 }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			  Process::Start( "Info.docx" );
		 }


public : void error()
{
	this->listBox1-> Items->Clear();
	this->listBox1->Items->Add("ERROR!!!");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("На головну");
	x=26;
		 
}

public : void success()
{
	this->listBox1-> Items->Clear();
	this->listBox1->Items->Add("Операцію виконано успішно!");
	this->listBox1->Items->Add("Щоб отримати чек");
	this->listBox1->Items->Add("натисніть R");
	this->listBox1->Items->Add("");
	this->listBox1->Items->Add("Виконати ще операцію");
	this->listBox1->Items->Add("Завершити сесію");
	x=27;

}

public : void choose()
		 {
		  x=15;
		  this->listBox1-> Items->Clear(); 
		  this->listBox1->Items->Add("Виберіть операцію: ");
		  this->listBox1->Items->Add(" ");
		  this->listBox1->Items->Add("Поповнити банківський рахунок ");
		  this->listBox1->Items->Add("Поповнити мобільний рахунок ");
		 }
public :void chooseCard()
		 {
		         x=3;
		         this->listBox1-> Items->Clear(); 
				 this->listBox1->Items->Add("Виберіть операцію на виконання: ");
				 this->listBox1->Items->Add(" ");
				 this->listBox1->Items->Add("Переказати кошти");
				 this->listBox1->Items->Add("Поповнити свій рахунок ");
				 this->listBox1->Items->Add("Поповнити свій мобільний рахунок ");
				 this->listBox1->Items->Add("Поповнити інший мобільний рахунок ");
				 this->listBox1->Items->Add("Переглянути баланс");
				 this->listBox1->Items->Add("Зняти кошти");
		 }



public: void success2()
		{
			this->listBox1->Items->Add("Щоб отримати чек");
			this->listBox1->Items->Add("натисніть R");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Виконати ще операцію");
			this->listBox1->Items->Add("Завершити сесію");
			x=27;
		
		}
public: void takeCard()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Заберіть картку");
			pictureBox3->Visible = true;
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("На головну");
			x=26;
		}
public: void noFunes()
				{
					this->listBox1-> Items->Clear();
					this->listBox1->Items->Add("Недостатньо коштів");
					this->listBox1->Items->Add("для виконання операції!");
					this->listBox1->Items->Add("");
					this->listBox1->Items->Add("");
					this->listBox1->Items->Add("Виконати ще операцію");
					this->listBox1->Items->Add("Завершити сесію");
					x=27;
				}

public: void noLimit()
		{
			this->listBox1-> Items->Clear();
			this->listBox1->Items->Add("Ви перевищили ліміт!");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Виконати ще операцію");
			this->listBox1->Items->Add("Завершити сесію");
			x=27;	
		
		}


public: void menu()
		{
		this->listBox1-> Items->Clear(); 
		this->listBox1->Items->Add("У Вас є картка?");
		this->listBox1->Items->Add("Так");
		this->listBox1->Items->Add("Ні");
		x=0;
		}
public: void incorrectMob()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Не прaвильний номер мобільного!!!");
			this->listBox1->Items->Add("Спробуйте ще раз (Натистіть ОК)");
		
		}
public: void noFunes2()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Недостатньо коштів для переказу!");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Переказати меншу суму");
			this->listBox1->Items->Add("Забрати гроші");
		}

public: void lock()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Цю картку заблоковано!!!");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Виконати ще операцію");
			this->listBox1->Items->Add("Завершити сесію");
			
			x=27;
		}
public: void lock2()
		{
			this->listBox1-> Items->Clear();
			this->listBox1->Items->Add("Картку, яку ви хочете");
			this->listBox1->Items->Add("поповнити, заблоковано!!!");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Виконати ще операцію");
			this->listBox1->Items->Add("Завершити сесію");
			x=27;
		
		}
public: void enter2transfer()
		{
			this->listBox1->Items->Add("Введіть номер рахунку для ");
			this->listBox1-> Items->Add("переказу коштів : ");
			this->listBox1->Items->Add("");
		}
public: void impossibleOp()
		{
			 this->listBox1-> Items->Clear(); 
			 this->listBox1->Items->Add("Неможлива операція");
			 this->listBox1->Items->Add("Спробуйте ще раз (Натисніть ОК)");
		}
public: void incorrectCard()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Неправильний номер картки!!!");
			this->listBox1->Items->Add("Спробуйте ще раз (Натисніть ОК)");
		}
public: void enterCard()
		{
			this->listBox1-> Items->Clear();
			this->listBox1-> Items->Add("Введіть номер картки: ");
			this->listBox1-> Items->Add("");
		}
public: void entersum2trans()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Введіть суму для переказу: ");
			this->listBox1->Items->Add("");
		}
public: void enterAmount()
		{
			this->listBox1->Items->Add("Введіть суму: ");
			this->listBox1->Items->Add("");
		}
public: void enterNum()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Введіть номер: ");
			this->listBox1->Items->Add("");
		}
public: void takeCash()
		{
			pictureBox1->Visible = true;
			this->listBox1-> Items->Clear();
			this->listBox1->Items->Add("Заберіть гроші");
			this->listBox1->Items->Add(System::Convert::ToString(cashDispenser->getCash()));
			listBox1->Items[1]+=" грн.";
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("Виконати ще операцію");
			this->listBox1->Items->Add("Завершити сесію");
			x=27;
		
		}
public: void enterNum2dep()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Введіть номер на поповнення:");
			this->listBox1->Items->Add("");
		}
public: void enterCard2trans()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Введіть номер картки для ");
			this->listBox1-> Items->Add("переказу коштів : ");
			this->listBox1->Items->Add("");
		}
public: void enterMobnum()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1-> Items->Add("Введіть номер мобільного ");
			this->listBox1-> Items->Add("телефону : ");
			this->listBox1->Items->Add("");
		}
public:void enterSms()
	   {
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Введіть код з смс: ");
			this->listBox1->Items->Add("");
	   }
public: void lockedCard()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Ваша картка заблокована!!!");
			this->listBox1->Items->Add("Заберіть картку");
			pictureBox3->Visible = true;
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("На головну");
			x=26;
		}
public: void incorrectpswd()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Неправильний пароль!!!");
			this->listBox1->Items->Add("Спробуйте ще раз (Натисніть ОК)");
		}
public: void lockedCard2()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Вашу картку заблоковано!!!");
			this->listBox1->Items->Add("Розблокувати картку");
			this->listBox1->Items->Add("Завершити сесію");
		}
public: void transMore()
		{
			 this->listBox1-> Items->Clear(); 
			 this->listBox1->Items->Add("Переказати більшу суму");
			 this->listBox1->Items->Add("Забрати решту");
			 this->listBox1->Items->Add("Переказати решту на мобільний");
		}
public: void transMore2()
		{
			this->listBox1-> Items->Clear(); 
			this->listBox1->Items->Add("Переказати більшу суму");
			this->listBox1->Items->Add("Забрати решту");
		}
public: void invalidValue()
		{
			this->listBox1-> Items->Clear();
			this->listBox1->Items->Add("Недопустиме значення!");
			this->listBox1->Items->Add("Допустима сума > 20 та < 1500");
			this->listBox1->Items->Add("Ввести іншу суму (Ok)");
			this->listBox1->Items->Add("Виконати іншу операцію (Х)");
		}
public: void unlockedCard()
		{
		     this->listBox1->Items->Add("Картку розблоковано!");
		     this->listBox1->Items->Add(" ");
			 this->listBox1->Items->Add("Виконати операцію");
			 this->listBox1->Items->Add("Завершити сесію");
		}
public: void incorrectpswrd2()
		{
			this->listBox1->Items->Add("Неправильний код розблокування!");
			this->listBox1->Items->Add("Заберіть картку");
			pictureBox3->Visible = true;
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("");
			this->listBox1->Items->Add("На головну");
			x=26;
		}

};

}



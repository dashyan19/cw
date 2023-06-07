#pragma once

namespace CWCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для programmatic
	/// </summary>
	public ref class programmatic : public System::Windows::Forms::Form
	{
	public:
		programmatic(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			MC->Enabled = false;
			MR->Enabled = false;
			Mplus->Enabled = false;
			Mminus->Enabled = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~programmatic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonordinary1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Mminus;
	private: System::Windows::Forms::Button^ Mplus;
	private: System::Windows::Forms::Button^ MC;
	private: System::Windows::Forms::Button^ MR;
	private: System::Windows::Forms::Button^ MS;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ change;
	private: System::Windows::Forms::Button^ erase2;
	private: System::Windows::Forms::Button^ erase1;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ equalsign;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button0;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonordinary1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Mminus = (gcnew System::Windows::Forms::Button());
			this->Mplus = (gcnew System::Windows::Forms::Button());
			this->MC = (gcnew System::Windows::Forms::Button());
			this->MR = (gcnew System::Windows::Forms::Button());
			this->MS = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->change = (gcnew System::Windows::Forms::Button());
			this->erase2 = (gcnew System::Windows::Forms::Button());
			this->erase1 = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->equalsign = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox5->Location = System::Drawing::Point(79, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(320, 20);
			this->textBox5->TabIndex = 137;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(79, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(320, 20);
			this->textBox4->TabIndex = 136;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(79, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(320, 20);
			this->textBox3->TabIndex = 135;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(79, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 20);
			this->textBox2->TabIndex = 134;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(17, 163);
			this->label1->MaximumSize = System::Drawing::Size(500, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 24);
			this->label1->TabIndex = 133;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonordinary1
			// 
			this->buttonordinary1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonordinary1->Location = System::Drawing::Point(17, 14);
			this->buttonordinary1->Name = L"buttonordinary1";
			this->buttonordinary1->Size = System::Drawing::Size(180, 30);
			this->buttonordinary1->TabIndex = 132;
			this->buttonordinary1->Text = L"Режим \"Обычный\"";
			this->buttonordinary1->UseVisualStyleBackColor = true;
			this->buttonordinary1->Click += gcnew System::EventHandler(this, &programmatic::buttonordinary1_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->ForeColor = System::Drawing::Color::DimGray;
			this->label5->Location = System::Drawing::Point(16, 132);
			this->label5->MaximumSize = System::Drawing::Size(500, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 24);
			this->label5->TabIndex = 131;
			this->label5->Text = L"BIN";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(16, 108);
			this->label4->MaximumSize = System::Drawing::Size(500, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 24);
			this->label4->TabIndex = 130;
			this->label4->Text = L"OCT";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(16, 84);
			this->label3->MaximumSize = System::Drawing::Size(500, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 129;
			this->label3->Text = L"DEC";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Mminus
			// 
			this->Mminus->BackColor = System::Drawing::SystemColors::Control;
			this->Mminus->Cursor = System::Windows::Forms::Cursors::Default;
			this->Mminus->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Mminus->FlatAppearance->BorderSize = 0;
			this->Mminus->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::Control;
			this->Mminus->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->Mminus->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->Mminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Mminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mminus->Location = System::Drawing::Point(249, 237);
			this->Mminus->Name = L"Mminus";
			this->Mminus->Size = System::Drawing::Size(72, 50);
			this->Mminus->TabIndex = 128;
			this->Mminus->Text = L"M-";
			this->Mminus->UseVisualStyleBackColor = false;
			this->Mminus->Click += gcnew System::EventHandler(this, &programmatic::Mminus_Click);
			// 
			// Mplus
			// 
			this->Mplus->BackColor = System::Drawing::SystemColors::Control;
			this->Mplus->Cursor = System::Windows::Forms::Cursors::Default;
			this->Mplus->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->Mplus->FlatAppearance->BorderSize = 0;
			this->Mplus->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::Control;
			this->Mplus->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->Mplus->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->Mplus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Mplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mplus->Location = System::Drawing::Point(171, 237);
			this->Mplus->Name = L"Mplus";
			this->Mplus->Size = System::Drawing::Size(72, 50);
			this->Mplus->TabIndex = 127;
			this->Mplus->Text = L"M+";
			this->Mplus->UseVisualStyleBackColor = false;
			this->Mplus->Click += gcnew System::EventHandler(this, &programmatic::Mplus_Click);
			// 
			// MC
			// 
			this->MC->BackColor = System::Drawing::SystemColors::Control;
			this->MC->Cursor = System::Windows::Forms::Cursors::Default;
			this->MC->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->MC->FlatAppearance->BorderSize = 0;
			this->MC->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::Control;
			this->MC->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->MC->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->MC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MC->Location = System::Drawing::Point(17, 237);
			this->MC->Name = L"MC";
			this->MC->Size = System::Drawing::Size(72, 50);
			this->MC->TabIndex = 126;
			this->MC->Text = L"MC";
			this->MC->UseVisualStyleBackColor = false;
			this->MC->Click += gcnew System::EventHandler(this, &programmatic::MC_Click);
			// 
			// MR
			// 
			this->MR->BackColor = System::Drawing::SystemColors::Control;
			this->MR->Cursor = System::Windows::Forms::Cursors::Default;
			this->MR->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->MR->FlatAppearance->BorderSize = 0;
			this->MR->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::Control;
			this->MR->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->MR->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->MR->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MR->Location = System::Drawing::Point(94, 237);
			this->MR->Name = L"MR";
			this->MR->Size = System::Drawing::Size(72, 50);
			this->MR->TabIndex = 125;
			this->MR->Text = L"MR";
			this->MR->UseVisualStyleBackColor = false;
			this->MR->Click += gcnew System::EventHandler(this, &programmatic::MR_Click);
			// 
			// MS
			// 
			this->MS->BackColor = System::Drawing::SystemColors::Control;
			this->MS->Cursor = System::Windows::Forms::Cursors::Default;
			this->MS->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->MS->FlatAppearance->BorderSize = 0;
			this->MS->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::Control;
			this->MS->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->MS->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->MS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MS->Location = System::Drawing::Point(327, 237);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(72, 50);
			this->MS->TabIndex = 124;
			this->MS->Text = L"MS";
			this->MS->UseVisualStyleBackColor = false;
			this->MS->Click += gcnew System::EventHandler(this, &programmatic::MS_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(16, 60);
			this->label2->MaximumSize = System::Drawing::Size(500, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 24);
			this->label2->TabIndex = 123;
			this->label2->Text = L"HEX";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Leelawadee", 15.75F));
			this->textBox1->Location = System::Drawing::Point(16, 190);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(382, 33);
			this->textBox1->TabIndex = 122;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// change
			// 
			this->change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->change->Location = System::Drawing::Point(205, 502);
			this->change->Name = L"change";
			this->change->Size = System::Drawing::Size(87, 45);
			this->change->TabIndex = 121;
			this->change->Text = L"±";
			this->change->UseVisualStyleBackColor = true;
			this->change->Click += gcnew System::EventHandler(this, &programmatic::change_Click);
			// 
			// erase2
			// 
			this->erase2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase2->Location = System::Drawing::Point(205, 293);
			this->erase2->Name = L"erase2";
			this->erase2->Size = System::Drawing::Size(87, 50);
			this->erase2->TabIndex = 120;
			this->erase2->Text = L"CE";
			this->erase2->UseVisualStyleBackColor = true;
			this->erase2->Click += gcnew System::EventHandler(this, &programmatic::erase2_Click);
			// 
			// erase1
			// 
			this->erase1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase1->Location = System::Drawing::Point(110, 293);
			this->erase1->Name = L"erase1";
			this->erase1->Size = System::Drawing::Size(87, 50);
			this->erase1->TabIndex = 119;
			this->erase1->Text = L"C";
			this->erase1->UseVisualStyleBackColor = true;
			this->erase1->Click += gcnew System::EventHandler(this, &programmatic::erase1_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->clear->Location = System::Drawing::Point(16, 293);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(87, 50);
			this->clear->TabIndex = 118;
			this->clear->Text = L"←";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &programmatic::clear_Click);
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->division->Location = System::Drawing::Point(299, 502);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(99, 45);
			this->division->TabIndex = 117;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &programmatic::arithmetic);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->multiplication->Location = System::Drawing::Point(299, 451);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(99, 45);
			this->multiplication->TabIndex = 116;
			this->multiplication->Text = L"×";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &programmatic::arithmetic);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->minus->Location = System::Drawing::Point(299, 400);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(99, 45);
			this->minus->TabIndex = 115;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &programmatic::arithmetic);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->plus->Location = System::Drawing::Point(299, 349);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(99, 45);
			this->plus->TabIndex = 114;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &programmatic::arithmetic);
			// 
			// equalsign
			// 
			this->equalsign->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->equalsign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalsign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->equalsign->Location = System::Drawing::Point(299, 293);
			this->equalsign->Name = L"equalsign";
			this->equalsign->Size = System::Drawing::Size(99, 50);
			this->equalsign->TabIndex = 113;
			this->equalsign->Text = L"=";
			this->equalsign->UseVisualStyleBackColor = false;
			this->equalsign->Click += gcnew System::EventHandler(this, &programmatic::equalsign_Click);
			// 
			// point
			// 
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->point->Location = System::Drawing::Point(16, 502);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(87, 45);
			this->point->TabIndex = 112;
			this->point->Text = L",";
			this->point->UseVisualStyleBackColor = true;
			this->point->Click += gcnew System::EventHandler(this, &programmatic::point_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button9->Location = System::Drawing::Point(205, 349);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 45);
			this->button9->TabIndex = 111;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->Location = System::Drawing::Point(110, 349);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 45);
			this->button8->TabIndex = 110;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->Location = System::Drawing::Point(16, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 45);
			this->button7->TabIndex = 109;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(206, 400);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 45);
			this->button6->TabIndex = 108;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->Location = System::Drawing::Point(110, 400);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 45);
			this->button5->TabIndex = 107;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(16, 400);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 45);
			this->button4->TabIndex = 106;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button3->Location = System::Drawing::Point(205, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 45);
			this->button3->TabIndex = 105;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(110, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 45);
			this->button2->TabIndex = 104;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(16, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 45);
			this->button1->TabIndex = 103;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button0->Location = System::Drawing::Point(109, 502);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(87, 45);
			this->button0->TabIndex = 102;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &programmatic::numberbuttons);
			// 
			// programmatic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 561);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonordinary1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Mminus);
			this->Controls->Add(this->Mplus);
			this->Controls->Add(this->MC);
			this->Controls->Add(this->MR);
			this->Controls->Add(this->MS);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->change);
			this->Controls->Add(this->erase2);
			this->Controls->Add(this->erase1);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->division);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->equalsign);
			this->Controls->Add(this->point);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button0);
			this->Name = L"programmatic";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"programmatic";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstNum = Double::NaN;
		double secondNum = Double::NaN;
		double result = Double::NaN;
		double memory = 0;
		String^ currentOper;
		bool isCalculated = false;
		bool flag = false;

		void calculate()
		{
			if (!Double::IsNaN(firstNum) && !Double::IsNaN(secondNum))
			{
				if (currentOper == L"+")
				{
					result = firstNum + secondNum;
				}
				else if (currentOper == L"-")
				{
					result = firstNum - secondNum;
				}
				else if (currentOper == L"×")
				{
					result = firstNum * secondNum;
				}
				else if (currentOper == L"÷")
				{
					if (secondNum != 0)
					{
						result = firstNum / secondNum;
					}
					else
					{
						MessageBox::Show("Деление на ноль невозможно", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}

				label1->Text += String::Format(" {0} =", secondNum);
				textBox1->Text = System::Convert::ToString(result);
				isCalculated = true;
			}
		}

	private: System::Void buttonordinary1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Owner->Show();
		this->Close();
	}
private: System::Void numberbuttons(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = numbers->Text;
	}
	else if (textBox1->Text->Length <= 8)
	{
		textBox1->Text += numbers->Text;
	}
	isCalculated = false;

	int a = double::Parse(textBox1->Text);
	textBox5->Text = System::Convert::ToString(a, 2);
	textBox4->Text = System::Convert::ToString(a, 8);
	textBox3->Text = System::Convert::ToString(a, 10);
	textBox2->Text = System::Convert::ToString(a, 16);
}
private: System::Void arithmetic(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ operators = safe_cast<Button^>(sender);
	String^ outNumber;

	// second operation
	if (label1->Text != "")
	{
		// second number
		if (!isCalculated)
		{
			secondNum = Double::Parse(textBox1->Text);
		}

		if (Double::IsNaN(result))
		{
			calculate();
		}
		else
		{
			firstNum = result;
			if (!isCalculated)
			{
				calculate();
			}
		}
		outNumber = System::Convert::ToString(result);
	}
	else  // first operation
	{
		firstNum = Double::Parse(textBox1->Text);
		outNumber = System::Convert::ToString(firstNum);
	}

	currentOper = operators->Text;
	textBox1->Text = "";
	label1->Text = outNumber + " " + currentOper;
}
private: System::Void equalsign_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!isCalculated)
	{
		//firstNum = Double::IsNaN(result) ? firstNum : result;
		secondNum = Double::Parse(textBox1->Text);
	}
	else
	{
		//firstNum = result;
		label1->Text = String::Format("{0} {1}", firstNum, currentOper);
	}

	firstNum = Double::IsNaN(result) ? firstNum : result;
	//secondNum = isCalculated ? secondNum : Double::Parse(CalculationBox->Text);

	calculate();

	int a = int::Parse(textBox1->Text);
	textBox5->Text = System::Convert::ToString(a, 2);
	textBox4->Text = System::Convert::ToString(a, 8);
	textBox3->Text = System::Convert::ToString(a, 10);
	textBox2->Text = System::Convert::ToString(a, 16);
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void erase1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "0";
	label1->Text = "";
	result = Double::NaN;
	firstNum = Double::NaN;
	secondNum = Double::NaN;
	isCalculated = false;
	currentOper = "";
}
private: System::Void erase2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "";
}
private: System::Void point_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!textBox1->Text->Contains(","))
	{
		textBox1->Text += ",";
	}
}
private: System::Void change_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void MS_Click(System::Object^ sender, System::EventArgs^ e) 
{
	memory = Double::Parse(textBox1->Text);
	textBox1->Text = System::Convert::ToString(memory);
	isCalculated = true;
	MC->Enabled = true;
	MR->Enabled = true;
}
private: System::Void MC_Click(System::Object^ sender, System::EventArgs^ e) 
{
	memory = 0;
	MC->Enabled = false;
	MR->Enabled = false;
}
private: System::Void MR_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = System::Convert::ToString(memory);
	isCalculated = true;
}
private: System::Void Mplus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	memory += Double::Parse(textBox1->Text);
	isCalculated = true;
	MC->Enabled = true;
	MR->Enabled = true;
}
private: System::Void Mminus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	memory -= Double::Parse(textBox1->Text);
	isCalculated = true;
	MC->Enabled = true;
	MR->Enabled = true;
}
};
}

#pragma once
#include "engineering.h"
#include "programmatic.h"

namespace CWCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ordinary
	/// </summary>
	public ref class ordinary : public System::Windows::Forms::Form
	{
	public:
		ordinary(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			MC->Enabled = false;
			MR->Enabled = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ordinary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sqrt;
	protected:
	private: System::Windows::Forms::Button^ degree2;
	private: System::Windows::Forms::Button^ divideoneby1;
	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::Button^ Mminus;
	private: System::Windows::Forms::Button^ Mplus;
	private: System::Windows::Forms::Button^ MC;
	private: System::Windows::Forms::Button^ MR;
	private: System::Windows::Forms::Button^ MS;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonprogrammatic;
	private: System::Windows::Forms::Button^ buttonengineering;
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
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->degree2 = (gcnew System::Windows::Forms::Button());
			this->divideoneby1 = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->Mminus = (gcnew System::Windows::Forms::Button());
			this->Mplus = (gcnew System::Windows::Forms::Button());
			this->MC = (gcnew System::Windows::Forms::Button());
			this->MR = (gcnew System::Windows::Forms::Button());
			this->MS = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonprogrammatic = (gcnew System::Windows::Forms::Button());
			this->buttonengineering = (gcnew System::Windows::Forms::Button());
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
			// sqrt
			// 
			this->sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sqrt->Location = System::Drawing::Point(110, 298);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(87, 45);
			this->sqrt->TabIndex = 96;
			this->sqrt->Text = L"√";
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &ordinary::sqrt_Click);
			// 
			// degree2
			// 
			this->degree2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->degree2->Location = System::Drawing::Point(16, 298);
			this->degree2->Name = L"degree2";
			this->degree2->Size = System::Drawing::Size(87, 45);
			this->degree2->TabIndex = 95;
			this->degree2->Text = L"x²";
			this->degree2->UseVisualStyleBackColor = true;
			this->degree2->Click += gcnew System::EventHandler(this, &ordinary::degree2_Click);
			// 
			// divideoneby1
			// 
			this->divideoneby1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->divideoneby1->Location = System::Drawing::Point(205, 298);
			this->divideoneby1->Name = L"divideoneby1";
			this->divideoneby1->Size = System::Drawing::Size(87, 45);
			this->divideoneby1->TabIndex = 94;
			this->divideoneby1->Text = L"1/x";
			this->divideoneby1->UseVisualStyleBackColor = true;
			this->divideoneby1->Click += gcnew System::EventHandler(this, &ordinary::divideoneby1_Click);
			// 
			// percent
			// 
			this->percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percent->Location = System::Drawing::Point(299, 298);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(99, 45);
			this->percent->TabIndex = 93;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = true;
			this->percent->Click += gcnew System::EventHandler(this, &ordinary::percent_Click);
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
			this->Mminus->Location = System::Drawing::Point(245, 154);
			this->Mminus->Name = L"Mminus";
			this->Mminus->Size = System::Drawing::Size(69, 55);
			this->Mminus->TabIndex = 92;
			this->Mminus->Text = L"M-";
			this->Mminus->UseVisualStyleBackColor = false;
			this->Mminus->Click += gcnew System::EventHandler(this, &ordinary::Mminus_Click);
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
			this->Mplus->Location = System::Drawing::Point(170, 154);
			this->Mplus->Name = L"Mplus";
			this->Mplus->Size = System::Drawing::Size(69, 55);
			this->Mplus->TabIndex = 91;
			this->Mplus->Text = L"M+";
			this->Mplus->UseVisualStyleBackColor = false;
			this->Mplus->Click += gcnew System::EventHandler(this, &ordinary::Mplus_Click);
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
			this->MC->Location = System::Drawing::Point(16, 154);
			this->MC->Name = L"MC";
			this->MC->Size = System::Drawing::Size(72, 55);
			this->MC->TabIndex = 90;
			this->MC->Text = L"MC";
			this->MC->UseVisualStyleBackColor = false;
			this->MC->Click += gcnew System::EventHandler(this, &ordinary::MC_Click);
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
			this->MR->Location = System::Drawing::Point(95, 154);
			this->MR->Name = L"MR";
			this->MR->Size = System::Drawing::Size(69, 55);
			this->MR->TabIndex = 89;
			this->MR->Text = L"MR";
			this->MR->UseVisualStyleBackColor = false;
			this->MR->Click += gcnew System::EventHandler(this, &ordinary::MR_Click);
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
			this->MS->Location = System::Drawing::Point(320, 154);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(78, 55);
			this->MS->TabIndex = 88;
			this->MS->Text = L"MS";
			this->MS->UseVisualStyleBackColor = false;
			this->MS->Click += gcnew System::EventHandler(this, &ordinary::MS_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(16, 77);
			this->label1->MaximumSize = System::Drawing::Size(500, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 24);
			this->label1->TabIndex = 87;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonprogrammatic
			// 
			this->buttonprogrammatic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonprogrammatic->Location = System::Drawing::Point(218, 14);
			this->buttonprogrammatic->Name = L"buttonprogrammatic";
			this->buttonprogrammatic->Size = System::Drawing::Size(180, 30);
			this->buttonprogrammatic->TabIndex = 86;
			this->buttonprogrammatic->Text = L"Режим \"Программист\"";
			this->buttonprogrammatic->UseVisualStyleBackColor = true;
			this->buttonprogrammatic->Click += gcnew System::EventHandler(this, &ordinary::buttonprogrammatic_Click);
			// 
			// buttonengineering
			// 
			this->buttonengineering->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonengineering->Location = System::Drawing::Point(17, 14);
			this->buttonengineering->Name = L"buttonengineering";
			this->buttonengineering->Size = System::Drawing::Size(180, 30);
			this->buttonengineering->TabIndex = 85;
			this->buttonengineering->Text = L"Режим \"Инженерный\"";
			this->buttonengineering->UseVisualStyleBackColor = true;
			this->buttonengineering->Click += gcnew System::EventHandler(this, &ordinary::buttonengineering_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Leelawadee", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(16, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(382, 33);
			this->textBox1->TabIndex = 84;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ordinary::textBox1_TextChanged);
			// 
			// change
			// 
			this->change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->change->Location = System::Drawing::Point(205, 502);
			this->change->Name = L"change";
			this->change->Size = System::Drawing::Size(87, 45);
			this->change->TabIndex = 83;
			this->change->Text = L"±";
			this->change->UseVisualStyleBackColor = true;
			this->change->Click += gcnew System::EventHandler(this, &ordinary::change_Click);
			// 
			// erase2
			// 
			this->erase2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase2->Location = System::Drawing::Point(205, 231);
			this->erase2->Name = L"erase2";
			this->erase2->Size = System::Drawing::Size(87, 55);
			this->erase2->TabIndex = 82;
			this->erase2->Text = L"CE";
			this->erase2->UseVisualStyleBackColor = true;
			this->erase2->Click += gcnew System::EventHandler(this, &ordinary::erase2_Click);
			// 
			// erase1
			// 
			this->erase1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase1->Location = System::Drawing::Point(110, 231);
			this->erase1->Name = L"erase1";
			this->erase1->Size = System::Drawing::Size(87, 55);
			this->erase1->TabIndex = 81;
			this->erase1->Text = L"C";
			this->erase1->UseVisualStyleBackColor = true;
			this->erase1->Click += gcnew System::EventHandler(this, &ordinary::erase1_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->clear->Location = System::Drawing::Point(16, 231);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(87, 55);
			this->clear->TabIndex = 80;
			this->clear->Text = L"←";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &ordinary::clear_Click);
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->division->Location = System::Drawing::Point(299, 502);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(99, 45);
			this->division->TabIndex = 79;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &ordinary::arithmetic);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->multiplication->Location = System::Drawing::Point(299, 451);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(99, 45);
			this->multiplication->TabIndex = 78;
			this->multiplication->Text = L"×";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &ordinary::arithmetic);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->minus->Location = System::Drawing::Point(299, 400);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(99, 45);
			this->minus->TabIndex = 77;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &ordinary::arithmetic);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->plus->Location = System::Drawing::Point(299, 349);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(99, 45);
			this->plus->TabIndex = 76;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &ordinary::arithmetic);
			// 
			// equalsign
			// 
			this->equalsign->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->equalsign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalsign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->equalsign->Location = System::Drawing::Point(299, 231);
			this->equalsign->Name = L"equalsign";
			this->equalsign->Size = System::Drawing::Size(99, 55);
			this->equalsign->TabIndex = 75;
			this->equalsign->Text = L"=";
			this->equalsign->UseVisualStyleBackColor = false;
			this->equalsign->Click += gcnew System::EventHandler(this, &ordinary::equalsign_Click);
			// 
			// point
			// 
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->point->Location = System::Drawing::Point(16, 502);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(87, 45);
			this->point->TabIndex = 74;
			this->point->Text = L",";
			this->point->UseVisualStyleBackColor = true;
			this->point->Click += gcnew System::EventHandler(this, &ordinary::point_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button9->Location = System::Drawing::Point(205, 349);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 45);
			this->button9->TabIndex = 73;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->Location = System::Drawing::Point(110, 349);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 45);
			this->button8->TabIndex = 72;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->Location = System::Drawing::Point(16, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 45);
			this->button7->TabIndex = 71;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(206, 400);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 45);
			this->button6->TabIndex = 70;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->Location = System::Drawing::Point(110, 400);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 45);
			this->button5->TabIndex = 69;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(16, 400);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 45);
			this->button4->TabIndex = 68;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button3->Location = System::Drawing::Point(205, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 45);
			this->button3->TabIndex = 67;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(110, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 45);
			this->button2->TabIndex = 66;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(16, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 45);
			this->button1->TabIndex = 65;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button0->Location = System::Drawing::Point(109, 502);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(87, 45);
			this->button0->TabIndex = 64;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &ordinary::numberbuttons);
			// 
			// ordinary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 561);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->degree2);
			this->Controls->Add(this->divideoneby1);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->Mminus);
			this->Controls->Add(this->Mplus);
			this->Controls->Add(this->MC);
			this->Controls->Add(this->MR);
			this->Controls->Add(this->MS);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonprogrammatic);
			this->Controls->Add(this->buttonengineering);
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
			this->Name = L"ordinary";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ordinary";
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

	private: System::Void buttonengineering_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		engineering^ Fo2 = gcnew engineering();
		Fo2->Show(); //показываем вторую форму
		ordinary::Hide();
		Fo2->Owner = this;
	}
private: System::Void buttonprogrammatic_Click(System::Object^ sender, System::EventArgs^ e) 
{
	programmatic^ Fo2 = gcnew programmatic();
	Fo2->Show(); //показываем третью форму
	ordinary::Hide();
	Fo2->Owner = this;
}
private: System::Void numberbuttons(System::Object^ sender, System::EventArgs^ e) 
{
	Button^ numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = numbers->Text;
	}
	else if (textBox1->Text->Length <= 31)
	{
		textBox1->Text += numbers->Text;
	}
	isCalculated = false;
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
private: System::Void degree2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = String::Format("sqr ({0})", textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Pow(Double::Parse(textBox1->Text), 2));
}
private: System::Void sqrt_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = String::Format("sqrt ({0})", textBox1->Text);
	textBox1->Text = System::Convert::ToString(Math::Sqrt(Double::Parse(textBox1->Text)));
}
private: System::Void divideoneby1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text != "0")
	{
		label1->Text = String::Format("1/({0})", textBox1->Text);
		textBox1->Text = System::Convert::ToString(1 / Double::Parse(textBox1->Text));
	}
	else
	{
		MessageBox::Show("Деление на ноль невозможно", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!Double::IsNaN(firstNum) && label1->Text != "")
	{
		label1->Text = "";
		textBox1->Text = System::Convert::ToString(firstNum / 100 * Double::Parse(textBox1->Text));
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
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text == "")
	{
		textBox1->Text = "0";
	}
}
};
}

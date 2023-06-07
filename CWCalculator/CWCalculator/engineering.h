#pragma once
#include <string>
#include <stdlib.h> 
#include <iostream>

namespace CWCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для engineering
	/// </summary>
	public ref class engineering : public System::Windows::Forms::Form
	{
	public:
		engineering(void)
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
		~engineering()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ numberpi;
	protected:
	private: System::Windows::Forms::Button^ exhibitor;
	private: System::Windows::Forms::Button^ natlogarithm;
	private: System::Windows::Forms::Button^ logarithm;
	private: System::Windows::Forms::Button^ degreey;
	private: System::Windows::Forms::Button^ buttoncsc;
	private: System::Windows::Forms::Button^ buttonsec;
	private: System::Windows::Forms::Button^ buttoncot;
	private: System::Windows::Forms::Button^ buttontan;
	private: System::Windows::Forms::Button^ buttoncos;
	private: System::Windows::Forms::Button^ buttonsin;
	private: System::Windows::Forms::Button^ Mminus;
	private: System::Windows::Forms::Button^ Mplus;
	private: System::Windows::Forms::Button^ MC;
	private: System::Windows::Forms::Button^ MR;
	private: System::Windows::Forms::Button^ MS;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::Button^ buttonordinary1;

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
			this->numberpi = (gcnew System::Windows::Forms::Button());
			this->exhibitor = (gcnew System::Windows::Forms::Button());
			this->natlogarithm = (gcnew System::Windows::Forms::Button());
			this->logarithm = (gcnew System::Windows::Forms::Button());
			this->degreey = (gcnew System::Windows::Forms::Button());
			this->buttoncsc = (gcnew System::Windows::Forms::Button());
			this->buttonsec = (gcnew System::Windows::Forms::Button());
			this->buttoncot = (gcnew System::Windows::Forms::Button());
			this->buttontan = (gcnew System::Windows::Forms::Button());
			this->buttoncos = (gcnew System::Windows::Forms::Button());
			this->buttonsin = (gcnew System::Windows::Forms::Button());
			this->Mminus = (gcnew System::Windows::Forms::Button());
			this->Mplus = (gcnew System::Windows::Forms::Button());
			this->MC = (gcnew System::Windows::Forms::Button());
			this->MR = (gcnew System::Windows::Forms::Button());
			this->MS = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->buttonordinary1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// numberpi
			// 
			this->numberpi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numberpi->Location = System::Drawing::Point(247, 253);
			this->numberpi->Name = L"numberpi";
			this->numberpi->Size = System::Drawing::Size(148, 44);
			this->numberpi->TabIndex = 254;
			this->numberpi->Text = L"π";
			this->numberpi->UseVisualStyleBackColor = true;
			this->numberpi->Click += gcnew System::EventHandler(this, &engineering::numberpi_Click);
			// 
			// exhibitor
			// 
			this->exhibitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exhibitor->Location = System::Drawing::Point(247, 302);
			this->exhibitor->Name = L"exhibitor";
			this->exhibitor->Size = System::Drawing::Size(148, 44);
			this->exhibitor->TabIndex = 253;
			this->exhibitor->Text = L"e";
			this->exhibitor->UseVisualStyleBackColor = true;
			this->exhibitor->Click += gcnew System::EventHandler(this, &engineering::exhibitor_Click);
			// 
			// natlogarithm
			// 
			this->natlogarithm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->natlogarithm->Location = System::Drawing::Point(170, 302);
			this->natlogarithm->Name = L"natlogarithm";
			this->natlogarithm->Size = System::Drawing::Size(71, 44);
			this->natlogarithm->TabIndex = 252;
			this->natlogarithm->Text = L"ln";
			this->natlogarithm->UseVisualStyleBackColor = true;
			this->natlogarithm->Click += gcnew System::EventHandler(this, &engineering::natlogarithm_Click);
			// 
			// logarithm
			// 
			this->logarithm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->logarithm->Location = System::Drawing::Point(93, 302);
			this->logarithm->Name = L"logarithm";
			this->logarithm->Size = System::Drawing::Size(71, 44);
			this->logarithm->TabIndex = 251;
			this->logarithm->Text = L"log";
			this->logarithm->UseVisualStyleBackColor = true;
			this->logarithm->Click += gcnew System::EventHandler(this, &engineering::logarithm_Click);
			// 
			// degreey
			// 
			this->degreey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->degreey->Location = System::Drawing::Point(93, 253);
			this->degreey->Name = L"degreey";
			this->degreey->Size = System::Drawing::Size(148, 44);
			this->degreey->TabIndex = 250;
			this->degreey->Text = L"^";
			this->degreey->UseVisualStyleBackColor = true;
			this->degreey->Click += gcnew System::EventHandler(this, &engineering::degreey_Click);
			// 
			// buttoncsc
			// 
			this->buttoncsc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttoncsc->Location = System::Drawing::Point(17, 503);
			this->buttoncsc->Name = L"buttoncsc";
			this->buttoncsc->Size = System::Drawing::Size(71, 44);
			this->buttoncsc->TabIndex = 249;
			this->buttoncsc->Text = L"csc";
			this->buttoncsc->UseVisualStyleBackColor = true;
			this->buttoncsc->Click += gcnew System::EventHandler(this, &engineering::buttoncsc_Click);
			// 
			// buttonsec
			// 
			this->buttonsec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonsec->Location = System::Drawing::Point(17, 453);
			this->buttonsec->Name = L"buttonsec";
			this->buttonsec->Size = System::Drawing::Size(71, 44);
			this->buttonsec->TabIndex = 248;
			this->buttonsec->Text = L"sec";
			this->buttonsec->UseVisualStyleBackColor = true;
			this->buttonsec->Click += gcnew System::EventHandler(this, &engineering::buttonsec_Click);
			// 
			// buttoncot
			// 
			this->buttoncot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttoncot->Location = System::Drawing::Point(17, 402);
			this->buttoncot->Name = L"buttoncot";
			this->buttoncot->Size = System::Drawing::Size(71, 44);
			this->buttoncot->TabIndex = 247;
			this->buttoncot->Text = L"cot";
			this->buttoncot->UseVisualStyleBackColor = true;
			this->buttoncot->Click += gcnew System::EventHandler(this, &engineering::buttoncot_Click);
			// 
			// buttontan
			// 
			this->buttontan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttontan->Location = System::Drawing::Point(17, 352);
			this->buttontan->Name = L"buttontan";
			this->buttontan->Size = System::Drawing::Size(71, 44);
			this->buttontan->TabIndex = 246;
			this->buttontan->Text = L"tan";
			this->buttontan->UseVisualStyleBackColor = true;
			this->buttontan->Click += gcnew System::EventHandler(this, &engineering::buttontan_Click);
			// 
			// buttoncos
			// 
			this->buttoncos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttoncos->Location = System::Drawing::Point(17, 302);
			this->buttoncos->Name = L"buttoncos";
			this->buttoncos->Size = System::Drawing::Size(71, 44);
			this->buttoncos->TabIndex = 245;
			this->buttoncos->Text = L"cos";
			this->buttoncos->UseVisualStyleBackColor = true;
			this->buttoncos->Click += gcnew System::EventHandler(this, &engineering::buttoncos_Click);
			// 
			// buttonsin
			// 
			this->buttonsin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonsin->Location = System::Drawing::Point(17, 253);
			this->buttonsin->Name = L"buttonsin";
			this->buttonsin->Size = System::Drawing::Size(71, 44);
			this->buttonsin->TabIndex = 244;
			this->buttonsin->Text = L"sin";
			this->buttonsin->UseVisualStyleBackColor = true;
			this->buttonsin->Click += gcnew System::EventHandler(this, &engineering::buttonsin_Click);
			// 
			// Mminus
			// 
			this->Mminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mminus->Location = System::Drawing::Point(262, 137);
			this->Mminus->Name = L"Mminus";
			this->Mminus->Size = System::Drawing::Size(55, 30);
			this->Mminus->TabIndex = 243;
			this->Mminus->Text = L"M-";
			this->Mminus->UseVisualStyleBackColor = true;
			this->Mminus->Click += gcnew System::EventHandler(this, &engineering::Mminus_Click);
			// 
			// Mplus
			// 
			this->Mplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mplus->Location = System::Drawing::Point(181, 137);
			this->Mplus->Name = L"Mplus";
			this->Mplus->Size = System::Drawing::Size(55, 30);
			this->Mplus->TabIndex = 242;
			this->Mplus->Text = L"M+";
			this->Mplus->UseVisualStyleBackColor = true;
			this->Mplus->Click += gcnew System::EventHandler(this, &engineering::Mplus_Click);
			// 
			// MC
			// 
			this->MC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MC->Location = System::Drawing::Point(17, 137);
			this->MC->Name = L"MC";
			this->MC->Size = System::Drawing::Size(55, 30);
			this->MC->TabIndex = 241;
			this->MC->Text = L"MC";
			this->MC->UseVisualStyleBackColor = true;
			this->MC->Click += gcnew System::EventHandler(this, &engineering::MC_Click);
			// 
			// MR
			// 
			this->MR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MR->Location = System::Drawing::Point(99, 137);
			this->MR->Name = L"MR";
			this->MR->Size = System::Drawing::Size(54, 30);
			this->MR->TabIndex = 240;
			this->MR->Text = L"MR";
			this->MR->UseVisualStyleBackColor = true;
			this->MR->Click += gcnew System::EventHandler(this, &engineering::MR_Click);
			// 
			// MS
			// 
			this->MS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MS->Location = System::Drawing::Point(340, 137);
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(55, 30);
			this->MS->TabIndex = 239;
			this->MS->Text = L"MS";
			this->MS->UseVisualStyleBackColor = true;
			this->MS->Click += gcnew System::EventHandler(this, &engineering::MS_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(16, 69);
			this->label1->MaximumSize = System::Drawing::Size(500, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 24);
			this->label1->TabIndex = 238;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Leelawadee", 15.75F));
			this->textBox1->Location = System::Drawing::Point(17, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(378, 33);
			this->textBox1->TabIndex = 237;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// change
			// 
			this->change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->change->Location = System::Drawing::Point(247, 504);
			this->change->Name = L"change";
			this->change->Size = System::Drawing::Size(71, 44);
			this->change->TabIndex = 236;
			this->change->Text = L"±";
			this->change->UseVisualStyleBackColor = true;
			this->change->Click += gcnew System::EventHandler(this, &engineering::change_Click);
			// 
			// erase2
			// 
			this->erase2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase2->Location = System::Drawing::Point(212, 187);
			this->erase2->Name = L"erase2";
			this->erase2->Size = System::Drawing::Size(85, 55);
			this->erase2->TabIndex = 235;
			this->erase2->Text = L"CE";
			this->erase2->UseVisualStyleBackColor = true;
			this->erase2->Click += gcnew System::EventHandler(this, &engineering::erase2_Click);
			// 
			// erase1
			// 
			this->erase1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->erase1->Location = System::Drawing::Point(115, 187);
			this->erase1->Name = L"erase1";
			this->erase1->Size = System::Drawing::Size(85, 55);
			this->erase1->TabIndex = 234;
			this->erase1->Text = L"C";
			this->erase1->UseVisualStyleBackColor = true;
			this->erase1->Click += gcnew System::EventHandler(this, &engineering::erase1_Click);
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->clear->Location = System::Drawing::Point(17, 187);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(85, 55);
			this->clear->TabIndex = 233;
			this->clear->Text = L"←";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &engineering::clear_Click);
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->division->Location = System::Drawing::Point(324, 504);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(71, 44);
			this->division->TabIndex = 232;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &engineering::arithmetic);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->multiplication->Location = System::Drawing::Point(324, 453);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(71, 44);
			this->multiplication->TabIndex = 231;
			this->multiplication->Text = L"×";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &engineering::arithmetic);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->minus->Location = System::Drawing::Point(324, 403);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(71, 44);
			this->minus->TabIndex = 230;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &engineering::arithmetic);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->plus->Location = System::Drawing::Point(324, 353);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(71, 44);
			this->plus->TabIndex = 229;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &engineering::arithmetic);
			// 
			// equalsign
			// 
			this->equalsign->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->equalsign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equalsign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->equalsign->Location = System::Drawing::Point(310, 187);
			this->equalsign->Name = L"equalsign";
			this->equalsign->Size = System::Drawing::Size(85, 55);
			this->equalsign->TabIndex = 228;
			this->equalsign->Text = L"=";
			this->equalsign->UseVisualStyleBackColor = false;
			this->equalsign->Click += gcnew System::EventHandler(this, &engineering::equalsign_Click);
			// 
			// point
			// 
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->point->Location = System::Drawing::Point(93, 503);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(71, 44);
			this->point->TabIndex = 227;
			this->point->Text = L",";
			this->point->UseVisualStyleBackColor = true;
			this->point->Click += gcnew System::EventHandler(this, &engineering::point_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button9->Location = System::Drawing::Point(247, 354);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 44);
			this->button9->TabIndex = 226;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->Location = System::Drawing::Point(170, 354);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 44);
			this->button8->TabIndex = 225;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->Location = System::Drawing::Point(93, 354);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 44);
			this->button7->TabIndex = 224;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(247, 404);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 44);
			this->button6->TabIndex = 223;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->Location = System::Drawing::Point(170, 403);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 44);
			this->button5->TabIndex = 222;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(93, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 44);
			this->button4->TabIndex = 221;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button3->Location = System::Drawing::Point(247, 454);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 44);
			this->button3->TabIndex = 220;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(170, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 44);
			this->button2->TabIndex = 219;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(93, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 44);
			this->button1->TabIndex = 218;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button0->Location = System::Drawing::Point(170, 504);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(71, 44);
			this->button0->TabIndex = 217;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &engineering::numberbuttons);
			// 
			// buttonordinary1
			// 
			this->buttonordinary1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonordinary1->Location = System::Drawing::Point(17, 12);
			this->buttonordinary1->Name = L"buttonordinary1";
			this->buttonordinary1->Size = System::Drawing::Size(180, 30);
			this->buttonordinary1->TabIndex = 216;
			this->buttonordinary1->Text = L"Режим \"Обычный\"";
			this->buttonordinary1->UseVisualStyleBackColor = true;
			this->buttonordinary1->Click += gcnew System::EventHandler(this, &engineering::buttonordinary1_Click);
			// 
			// engineering
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 561);
			this->Controls->Add(this->numberpi);
			this->Controls->Add(this->exhibitor);
			this->Controls->Add(this->natlogarithm);
			this->Controls->Add(this->logarithm);
			this->Controls->Add(this->degreey);
			this->Controls->Add(this->buttoncsc);
			this->Controls->Add(this->buttonsec);
			this->Controls->Add(this->buttoncot);
			this->Controls->Add(this->buttontan);
			this->Controls->Add(this->buttoncos);
			this->Controls->Add(this->buttonsin);
			this->Controls->Add(this->Mminus);
			this->Controls->Add(this->Mplus);
			this->Controls->Add(this->MC);
			this->Controls->Add(this->MR);
			this->Controls->Add(this->MS);
			this->Controls->Add(this->label1);
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
			this->Controls->Add(this->buttonordinary1);
			this->Name = L"engineering";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"engineering";
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
		double a;
		double pi;
		double e;

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

				else if (currentOper == L"^")
				{
					result = Math::Pow(firstNum, secondNum);
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
private: System::Void numberpi_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text += "3,1415926535";
}
private: System::Void exhibitor_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text += "2,7182818284";
}
private: System::Void degreey_Click(System::Object^ sender, System::EventArgs^ e) 
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

private: System::Void logarithm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("log " + "(" + (textBox1->Text) + ")");
	a = Math::Log10(a);
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void natlogarithm_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("ln " + "(" + (textBox1->Text) + ")");
	a = Math::Log(a);
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttonsin_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("sind " + "(" + (textBox1->Text) + ")");
	a = Math::Sin(a);
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttoncos_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("cosd " + "(" + (textBox1->Text) + ")");
	a = Math::Cos(a);
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttontan_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("tand " + "(" + (textBox1->Text) + ")");
	a = Math::Tan(a);
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttoncot_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("cotd " + "(" + (textBox1->Text) + ")");
	a = (Math::Cos(a)) / (Math::Sin(a));
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttonsec_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("cotd " + "(" + (textBox1->Text) + ")");
	a = (1) / (Math::Cos(a));
	textBox1->Text = System::Convert::ToString(a);
}
private: System::Void buttoncsc_Click(System::Object^ sender, System::EventArgs^ e) 
{
	a = Double::Parse(textBox1->Text);
	label1->Text = System::Convert::ToString("cotd " + "(" + (textBox1->Text) + ")");
	a = (1) / (Math::Sin(a));
	textBox1->Text = System::Convert::ToString(a);
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
};
}

#pragma once
#include"Polish.h"
namespace CalculatorWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyCalculator1
	/// </summary>
	public ref class MyCalculator1 : public System::Windows::Forms::Form
	{
	public:
		MyCalculator1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyCalculator1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;



	private: System::Windows::Forms::Button^ button_umn;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;




	private: System::Windows::Forms::Button^ button_min;
	private: System::Windows::Forms::Button^ button_1;


	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;


	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_0;






	private: System::Windows::Forms::Button^ button_rav;

	private: System::Windows::Forms::Button^ button_del;

	private: System::Windows::Forms::Button^ button_zak;

	private: System::Windows::Forms::Button^ button_otk;

	private: System::Windows::Forms::Button^ buttonAC;





	protected:

	protected:

	protected:







	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyCalculator1::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_umn = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_min = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_rav = (gcnew System::Windows::Forms::Button());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->button_zak = (gcnew System::Windows::Forms::Button());
			this->button_otk = (gcnew System::Windows::Forms::Button());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatAppearance->BorderSize = 0;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_exit->Location = System::Drawing::Point(3, 3);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(30, 30);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyCalculator1::button_exit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Location = System::Drawing::Point(19, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 71);
			this->label1->TabIndex = 1;
			this->label1->Text = L"\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::Gray;
			this->button_7->FlatAppearance->BorderSize = 0;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(13, 205);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(85, 80);
			this->button_7->TabIndex = 2;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyCalculator1::button1_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::Gray;
			this->button_8->FlatAppearance->BorderSize = 0;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(104, 205);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(85, 80);
			this->button_8->TabIndex = 3;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyCalculator1::button2_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::Gray;
			this->button_9->FlatAppearance->BorderSize = 0;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(195, 205);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(85, 80);
			this->button_9->TabIndex = 4;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyCalculator1::button3_Click);
			// 
			// button_umn
			// 
			this->button_umn->BackColor = System::Drawing::Color::Orange;
			this->button_umn->FlatAppearance->BorderSize = 0;
			this->button_umn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_umn->ForeColor = System::Drawing::Color::White;
			this->button_umn->Location = System::Drawing::Point(286, 205);
			this->button_umn->Name = L"button_umn";
			this->button_umn->Size = System::Drawing::Size(85, 80);
			this->button_umn->TabIndex = 5;
			this->button_umn->Text = L"*";
			this->button_umn->UseVisualStyleBackColor = false;
			this->button_umn->Click += gcnew System::EventHandler(this, &MyCalculator1::button4_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::Gray;
			this->button_4->FlatAppearance->BorderSize = 0;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(13, 291);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(85, 80);
			this->button_4->TabIndex = 6;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyCalculator1::button8_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::Gray;
			this->button_5->FlatAppearance->BorderSize = 0;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(104, 291);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(85, 80);
			this->button_5->TabIndex = 7;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyCalculator1::button7_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::Gray;
			this->button_6->FlatAppearance->BorderSize = 0;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::Color::White;
			this->button_6->Location = System::Drawing::Point(195, 291);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(85, 80);
			this->button_6->TabIndex = 8;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyCalculator1::button6_Click);
			// 
			// button_min
			// 
			this->button_min->BackColor = System::Drawing::Color::Orange;
			this->button_min->FlatAppearance->BorderSize = 0;
			this->button_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_min->ForeColor = System::Drawing::Color::White;
			this->button_min->Location = System::Drawing::Point(286, 291);
			this->button_min->Name = L"button_min";
			this->button_min->Size = System::Drawing::Size(85, 80);
			this->button_min->TabIndex = 9;
			this->button_min->Text = L"-";
			this->button_min->UseVisualStyleBackColor = false;
			this->button_min->Click += gcnew System::EventHandler(this, &MyCalculator1::button5_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::Gray;
			this->button_1->FlatAppearance->BorderSize = 0;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::Color::White;
			this->button_1->Location = System::Drawing::Point(13, 377);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(85, 80);
			this->button_1->TabIndex = 10;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyCalculator1::button12_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::Gray;
			this->button_2->FlatAppearance->BorderSize = 0;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(104, 377);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(85, 80);
			this->button_2->TabIndex = 11;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyCalculator1::button11_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::Gray;
			this->button_3->FlatAppearance->BorderSize = 0;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(195, 377);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(85, 80);
			this->button_3->TabIndex = 12;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyCalculator1::button10_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Orange;
			this->button_plus->FlatAppearance->BorderSize = 0;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(286, 377);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(85, 80);
			this->button_plus->TabIndex = 13;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyCalculator1::button9_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::Gray;
			this->button_0->FlatAppearance->BorderSize = 0;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(13, 463);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(267, 80);
			this->button_0->TabIndex = 14;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyCalculator1::button16_Click);
			// 
			// button_rav
			// 
			this->button_rav->BackColor = System::Drawing::Color::Orange;
			this->button_rav->FlatAppearance->BorderSize = 0;
			this->button_rav->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_rav->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rav->ForeColor = System::Drawing::Color::White;
			this->button_rav->Location = System::Drawing::Point(286, 463);
			this->button_rav->Name = L"button_rav";
			this->button_rav->Size = System::Drawing::Size(85, 80);
			this->button_rav->TabIndex = 17;
			this->button_rav->Text = L"=";
			this->button_rav->UseVisualStyleBackColor = false;
			this->button_rav->Click += gcnew System::EventHandler(this, &MyCalculator1::button13_Click);
			// 
			// button_del
			// 
			this->button_del->BackColor = System::Drawing::Color::Orange;
			this->button_del->FlatAppearance->BorderSize = 0;
			this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_del->ForeColor = System::Drawing::Color::White;
			this->button_del->Location = System::Drawing::Point(286, 119);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(85, 80);
			this->button_del->TabIndex = 21;
			this->button_del->Text = L"/";
			this->button_del->UseVisualStyleBackColor = false;
			this->button_del->Click += gcnew System::EventHandler(this, &MyCalculator1::button17_Click);
			// 
			// button_zak
			// 
			this->button_zak->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_zak->FlatAppearance->BorderSize = 0;
			this->button_zak->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_zak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zak->ForeColor = System::Drawing::Color::White;
			this->button_zak->Location = System::Drawing::Point(195, 119);
			this->button_zak->Name = L"button_zak";
			this->button_zak->Size = System::Drawing::Size(85, 80);
			this->button_zak->TabIndex = 20;
			this->button_zak->Text = L")";
			this->button_zak->UseVisualStyleBackColor = false;
			this->button_zak->Click += gcnew System::EventHandler(this, &MyCalculator1::button18_Click);
			// 
			// button_otk
			// 
			this->button_otk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_otk->FlatAppearance->BorderSize = 0;
			this->button_otk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_otk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_otk->ForeColor = System::Drawing::Color::White;
			this->button_otk->Location = System::Drawing::Point(104, 119);
			this->button_otk->Name = L"button_otk";
			this->button_otk->Size = System::Drawing::Size(85, 80);
			this->button_otk->TabIndex = 19;
			this->button_otk->Text = L"(";
			this->button_otk->UseVisualStyleBackColor = false;
			this->button_otk->Click += gcnew System::EventHandler(this, &MyCalculator1::button19_Click);
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonAC->FlatAppearance->BorderSize = 0;
			this->buttonAC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAC->ForeColor = System::Drawing::Color::White;
			this->buttonAC->Location = System::Drawing::Point(13, 119);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(85, 80);
			this->buttonAC->TabIndex = 18;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyCalculator1::button20_Click);
			// 
			// MyCalculator1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(384, 561);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->button_zak);
			this->Controls->Add(this->button_otk);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->button_rav);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_min);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_umn);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_exit);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyCalculator1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = L" ";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"9";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"8";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"7";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"1";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L")";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"-";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"*";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"+";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"2";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"6";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L".";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"5";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"3";
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"(";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"4";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"0";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		
		float res = Result(toStandardString(label1->Text));
		std::string str = std::to_string(res);
		label1->Text = gcnew System::String(str.c_str());
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += L"/";
	}


	private: static std::string toStandardString(System::String^ string)
	{
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	};
}
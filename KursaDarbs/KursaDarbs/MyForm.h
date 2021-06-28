#pragma once
#include <math.h>
namespace KursaDarbs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float segments(float radius, float angle) { // Funkcija lai apreiķinātu min un max segmentus!

		double PI = 3.14159265359; //Deklerē PI

		float sector = PI * (radius * radius) * (angle / 360); // Apreiķina sektora laukumu

		float triangle = (float)1 / 2 * (radius * radius) * sin((angle * PI) / 180); // Apreiķina trīstura laukumu

		return sector - triangle; // Atgriež sectora laukumu - trīstura laukumu!
	}
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			PanelTriangle->Hide(); //Programmas sākumā paslēpj visus paneļus, kuri parādās tikai tad ja malā uzpiež uz kādas no figurām!
			PanelSquare->Hide();
			PanelCircle->Hide();
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
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ PanelTriangle;

	private: System::Windows::Forms::Panel^ PanelSquare;

	private: System::Windows::Forms::Panel^ PanelCircle;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::Label^ C;


	private: System::Windows::Forms::Label^ B;
	private: System::Windows::Forms::Label^ VEIDS;
	private: System::Windows::Forms::Label^ M3;
	private: System::Windows::Forms::Label^ M2;
	private: System::Windows::Forms::Label^ M1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ CVEIDS;
	private: System::Windows::Forms::Label^ garakamala;


	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ radiuscircle;
	private: System::Windows::Forms::Label^ laukumscircle;
	private: System::Windows::Forms::TextBox^ lenkiscircle;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ MiniS;
	private: System::Windows::Forms::Label^ MaxS;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PanelTriangle = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->M3 = (gcnew System::Windows::Forms::Label());
			this->M2 = (gcnew System::Windows::Forms::Label());
			this->M1 = (gcnew System::Windows::Forms::Label());
			this->VEIDS = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->PanelSquare = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->CVEIDS = (gcnew System::Windows::Forms::Label());
			this->garakamala = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelCircle = (gcnew System::Windows::Forms::Panel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->MaxS = (gcnew System::Windows::Forms::Label());
			this->MiniS = (gcnew System::Windows::Forms::Label());
			this->lenkiscircle = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->laukumscircle = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->radiuscircle = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->PanelTriangle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->PanelSquare->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->PanelCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(202, 729);
			this->panel2->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(26, 553);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 144);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(26, 347);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 144);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(26, 134);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 144);
			this->button1->TabIndex = 0;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// PanelTriangle
			// 
			this->PanelTriangle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelTriangle.BackgroundImage")));
			this->PanelTriangle->Controls->Add(this->pictureBox6);
			this->PanelTriangle->Controls->Add(this->pictureBox5);
			this->PanelTriangle->Controls->Add(this->pictureBox4);
			this->PanelTriangle->Controls->Add(this->M3);
			this->PanelTriangle->Controls->Add(this->M2);
			this->PanelTriangle->Controls->Add(this->M1);
			this->PanelTriangle->Controls->Add(this->VEIDS);
			this->PanelTriangle->Controls->Add(this->C);
			this->PanelTriangle->Controls->Add(this->B);
			this->PanelTriangle->Controls->Add(this->A);
			this->PanelTriangle->Controls->Add(this->textBox3);
			this->PanelTriangle->Controls->Add(this->textBox2);
			this->PanelTriangle->Controls->Add(this->textBox1);
			this->PanelTriangle->Controls->Add(this->pictureBox3);
			this->PanelTriangle->Controls->Add(this->pictureBox2);
			this->PanelTriangle->Controls->Add(this->button5);
			this->PanelTriangle->Controls->Add(this->button4);
			this->PanelTriangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 1, System::Drawing::FontStyle::Bold));
			this->PanelTriangle->ForeColor = System::Drawing::Color::White;
			this->PanelTriangle->Location = System::Drawing::Point(202, 84);
			this->PanelTriangle->Name = L"PanelTriangle";
			this->PanelTriangle->Size = System::Drawing::Size(784, 649);
			this->PanelTriangle->TabIndex = 1;
			this->PanelTriangle->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PanelTriangle_Paint);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(589, 263);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(73, 22);
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(529, 172);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(209, 22);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(52, 172);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(131, 22);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// M3
			// 
			this->M3->AutoSize = true;
			this->M3->BackColor = System::Drawing::Color::Transparent;
			this->M3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->M3->ForeColor = System::Drawing::Color::White;
			this->M3->Location = System::Drawing::Point(48, 352);
			this->M3->Name = L"M3";
			this->M3->Size = System::Drawing::Size(0, 24);
			this->M3->TabIndex = 15;
			// 
			// M2
			// 
			this->M2->AutoSize = true;
			this->M2->BackColor = System::Drawing::Color::Transparent;
			this->M2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->M2->ForeColor = System::Drawing::Color::White;
			this->M2->Location = System::Drawing::Point(48, 288);
			this->M2->Name = L"M2";
			this->M2->Size = System::Drawing::Size(0, 24);
			this->M2->TabIndex = 14;
			this->M2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// M1
			// 
			this->M1->AutoSize = true;
			this->M1->BackColor = System::Drawing::Color::Transparent;
			this->M1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->M1->ForeColor = System::Drawing::Color::White;
			this->M1->Location = System::Drawing::Point(48, 227);
			this->M1->Name = L"M1";
			this->M1->Size = System::Drawing::Size(0, 24);
			this->M1->TabIndex = 13;
			// 
			// VEIDS
			// 
			this->VEIDS->AutoSize = true;
			this->VEIDS->BackColor = System::Drawing::Color::Transparent;
			this->VEIDS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->VEIDS->ForeColor = System::Drawing::Color::White;
			this->VEIDS->Location = System::Drawing::Point(524, 211);
			this->VEIDS->Name = L"VEIDS";
			this->VEIDS->Size = System::Drawing::Size(0, 26);
			this->VEIDS->TabIndex = 11;
			// 
			// C
			// 
			this->C->AutoSize = true;
			this->C->BackColor = System::Drawing::Color::Transparent;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->C->Location = System::Drawing::Point(533, 373);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(0, 24);
			this->C->TabIndex = 10;
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::Transparent;
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->B->ForeColor = System::Drawing::Color::White;
			this->B->Location = System::Drawing::Point(533, 336);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(0, 24);
			this->B->TabIndex = 9;
			// 
			// A
			// 
			this->A->AutoSize = true;
			this->A->BackColor = System::Drawing::Color::Transparent;
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->A->ForeColor = System::Drawing::Color::White;
			this->A->Location = System::Drawing::Point(532, 298);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(0, 24);
			this->A->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox3->Location = System::Drawing::Point(362, 382);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 25);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox2->Location = System::Drawing::Point(440, 260);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 25);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox1->Location = System::Drawing::Point(282, 260);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 25);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(202, 50);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(346, 60);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(294, 211);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(164, 164);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(142, 531);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(480, 60);
			this->button5->TabIndex = 2;
			this->button5->Text = L"NOTEIKT TRĪSSTURA MEDIĀNAS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(142, 436);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(480, 60);
			this->button4->TabIndex = 1;
			this->button4->Text = L"NOTEIKT LEŅĶUS UN TRĪSSTŪRA VEIDU";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// PanelSquare
			// 
			this->PanelSquare->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelSquare.BackgroundImage")));
			this->PanelSquare->Controls->Add(this->pictureBox11);
			this->PanelSquare->Controls->Add(this->textBox8);
			this->PanelSquare->Controls->Add(this->textBox7);
			this->PanelSquare->Controls->Add(this->textBox6);
			this->PanelSquare->Controls->Add(this->textBox5);
			this->PanelSquare->Controls->Add(this->textBox4);
			this->PanelSquare->Controls->Add(this->pictureBox10);
			this->PanelSquare->Controls->Add(this->CVEIDS);
			this->PanelSquare->Controls->Add(this->garakamala);
			this->PanelSquare->Controls->Add(this->pictureBox9);
			this->PanelSquare->Controls->Add(this->button7);
			this->PanelSquare->Controls->Add(this->button6);
			this->PanelSquare->Controls->Add(this->pictureBox8);
			this->PanelSquare->Controls->Add(this->pictureBox7);
			this->PanelSquare->Location = System::Drawing::Point(202, 84);
			this->PanelSquare->Name = L"PanelSquare";
			this->PanelSquare->Size = System::Drawing::Size(784, 649);
			this->PanelSquare->TabIndex = 2;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(176, 384);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(93, 23);
			this->pictureBox11->TabIndex = 29;
			this->pictureBox11->TabStop = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox8->Location = System::Drawing::Point(275, 382);
			this->textBox8->MaxLength = 4;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(32, 25);
			this->textBox8->TabIndex = 28;
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox7->Location = System::Drawing::Point(275, 278);
			this->textBox7->MaxLength = 4;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(32, 25);
			this->textBox7->TabIndex = 27;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox6->Location = System::Drawing::Point(378, 381);
			this->textBox6->MaxLength = 4;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(32, 25);
			this->textBox6->TabIndex = 26;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox5->Location = System::Drawing::Point(483, 278);
			this->textBox5->MaxLength = 4;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 25);
			this->textBox5->TabIndex = 25;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox4->Location = System::Drawing::Point(378, 180);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 25);
			this->textBox4->TabIndex = 24;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(210, 51);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(349, 59);
			this->pictureBox10->TabIndex = 23;
			this->pictureBox10->TabStop = false;
			// 
			// CVEIDS
			// 
			this->CVEIDS->AutoSize = true;
			this->CVEIDS->BackColor = System::Drawing::Color::Transparent;
			this->CVEIDS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->CVEIDS->ForeColor = System::Drawing::Color::White;
			this->CVEIDS->Location = System::Drawing::Point(559, 213);
			this->CVEIDS->Name = L"CVEIDS";
			this->CVEIDS->Size = System::Drawing::Size(0, 29);
			this->CVEIDS->TabIndex = 22;
			// 
			// garakamala
			// 
			this->garakamala->AutoSize = true;
			this->garakamala->BackColor = System::Drawing::Color::Transparent;
			this->garakamala->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->garakamala->ForeColor = System::Drawing::Color::White;
			this->garakamala->Location = System::Drawing::Point(169, 211);
			this->garakamala->Name = L"garakamala";
			this->garakamala->Size = System::Drawing::Size(0, 37);
			this->garakamala->TabIndex = 21;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(91, 171);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(182, 23);
			this->pictureBox9->TabIndex = 20;
			this->pictureBox9->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(147, 531);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(480, 60);
			this->button7->TabIndex = 19;
			this->button7->Text = L"NOTEIKT ČETRSTŪRA GARĀKO MALU";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(147, 436);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(480, 60);
			this->button6->TabIndex = 19;
			this->button6->Text = L"NOTEIKT ČETRSTŪRA VEIDU";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(512, 171);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(214, 23);
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(313, 211);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(164, 164);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// PanelCircle
			// 
			this->PanelCircle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelCircle.BackgroundImage")));
			this->PanelCircle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->PanelCircle->Controls->Add(this->pictureBox18);
			this->PanelCircle->Controls->Add(this->pictureBox17);
			this->PanelCircle->Controls->Add(this->MaxS);
			this->PanelCircle->Controls->Add(this->MiniS);
			this->PanelCircle->Controls->Add(this->lenkiscircle);
			this->PanelCircle->Controls->Add(this->pictureBox16);
			this->PanelCircle->Controls->Add(this->laukumscircle);
			this->PanelCircle->Controls->Add(this->pictureBox15);
			this->PanelCircle->Controls->Add(this->button9);
			this->PanelCircle->Controls->Add(this->button8);
			this->PanelCircle->Controls->Add(this->radiuscircle);
			this->PanelCircle->Controls->Add(this->pictureBox14);
			this->PanelCircle->Controls->Add(this->pictureBox13);
			this->PanelCircle->Controls->Add(this->pictureBox12);
			this->PanelCircle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PanelCircle->Location = System::Drawing::Point(202, 84);
			this->PanelCircle->Name = L"PanelCircle";
			this->PanelCircle->Size = System::Drawing::Size(784, 649);
			this->PanelCircle->TabIndex = 3;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(485, 265);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(273, 20);
			this->pictureBox18->TabIndex = 28;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(485, 328);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(273, 20);
			this->pictureBox17->TabIndex = 27;
			this->pictureBox17->TabStop = false;
			// 
			// MaxS
			// 
			this->MaxS->AutoSize = true;
			this->MaxS->BackColor = System::Drawing::Color::Transparent;
			this->MaxS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->MaxS->ForeColor = System::Drawing::Color::White;
			this->MaxS->Location = System::Drawing::Point(533, 287);
			this->MaxS->Name = L"MaxS";
			this->MaxS->Size = System::Drawing::Size(0, 26);
			this->MaxS->TabIndex = 26;
			// 
			// MiniS
			// 
			this->MiniS->AutoSize = true;
			this->MiniS->BackColor = System::Drawing::Color::Transparent;
			this->MiniS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->MiniS->ForeColor = System::Drawing::Color::White;
			this->MiniS->Location = System::Drawing::Point(533, 350);
			this->MiniS->Name = L"MiniS";
			this->MiniS->Size = System::Drawing::Size(0, 26);
			this->MiniS->TabIndex = 25;
			// 
			// lenkiscircle
			// 
			this->lenkiscircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lenkiscircle->Location = System::Drawing::Point(213, 233);
			this->lenkiscircle->Name = L"lenkiscircle";
			this->lenkiscircle->Size = System::Drawing::Size(35, 32);
			this->lenkiscircle->TabIndex = 24;
			this->lenkiscircle->Text = L"0";
			this->lenkiscircle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->lenkiscircle->TextChanged += gcnew System::EventHandler(this, &MyForm::lenkiscircle_TextChanged);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(114, 241);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(93, 23);
			this->pictureBox16->TabIndex = 23;
			this->pictureBox16->TabStop = false;
			// 
			// laukumscircle
			// 
			this->laukumscircle->AutoSize = true;
			this->laukumscircle->BackColor = System::Drawing::Color::Transparent;
			this->laukumscircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->laukumscircle->ForeColor = System::Drawing::Color::White;
			this->laukumscircle->Location = System::Drawing::Point(585, 213);
			this->laukumscircle->Name = L"laukumscircle";
			this->laukumscircle->Size = System::Drawing::Size(0, 37);
			this->laukumscircle->TabIndex = 22;
			this->laukumscircle->Click += gcnew System::EventHandler(this, &MyForm::laukumscircle_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(503, 180);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(238, 27);
			this->pictureBox15->TabIndex = 21;
			this->pictureBox15->TabStop = false;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(143, 531);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(480, 60);
			this->button9->TabIndex = 20;
			this->button9->Text = L"APREIĶINĀT SEGMENTUS";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(143, 436);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(480, 60);
			this->button8->TabIndex = 19;
			this->button8->Text = L"APREIĶINĀT LAUKUMU IZMANTOJOT RĀDIUSU";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// radiuscircle
			// 
			this->radiuscircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->radiuscircle->Location = System::Drawing::Point(213, 328);
			this->radiuscircle->Name = L"radiuscircle";
			this->radiuscircle->Size = System::Drawing::Size(35, 32);
			this->radiuscircle->TabIndex = 3;
			this->radiuscircle->Text = L"0";
			this->radiuscircle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(95, 333);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(112, 22);
			this->pictureBox14->TabIndex = 2;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(321, 211);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(144, 144);
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(285, 50);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(205, 58);
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(277, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(608, 72);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->PanelCircle);
			this->Controls->Add(this->PanelTriangle);
			this->Controls->Add(this->PanelSquare);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Geometircal";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->PanelTriangle->ResumeLayout(false);
			this->PanelTriangle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->PanelSquare->ResumeLayout(false);
			this->PanelSquare->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->PanelCircle->ResumeLayout(false);
			this->PanelCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
	private : System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PanelTriangle->Show(); //Parāda paneli ar trīsstūri paslēpjot pārejos
		PanelSquare->Hide(); // Paslēpj paneli ar kvadrātu
		PanelCircle->Hide(); // Paslēpj paneli ar riņķi
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelSquare->Show(); //Parāda paneli ar kvadrātu paslēpjot pārejos
	PanelTriangle->Hide(); // Paslēpj paneli ar trīsstūri
	PanelCircle->Hide(); // Paslēpj paneli ar riņķi
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelTriangle->Hide();// Paslēpj paneli ar trīstūri
	PanelSquare->Hide(); // Paslēpj paneli ar kvadrātu
	PanelCircle->Show(); //Parāda paneli ar riņķi paslēpjot pārejos
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PanelTriangle_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		double PI = 3.14159265359; //Deklerē PI

		String^ t1 = textBox1->Text; // Paņem ierakstīto String mainīgo no textbBox
		double tr1 = System::Convert::ToDouble(t1); // Pārvērš String mainīgo par double lai precīzāk varētu veikt apreiķinus!
		String^ t2 = textBox2->Text;
		double tr2 = System::Convert::ToDouble(t2);
		String^ t3 = textBox3->Text;
		double tr3 = System::Convert::ToDouble(t3);

		double t1lenkis = acosl((tr2*tr2 + tr3*tr3 - tr1*tr1) / (2*tr2*tr3)); // Tiek izmantota formula trīstura leņķa apreiķināšanai
		double t1l = (t1lenkis * 180) / PI; //Lai iegūtu pareizu un precīzu leņķi tiek reizināta trīstura leņķu summa ar iegūto skaitli un tad tiek dalīta ar PI (3.14159265359)
		double t2lenkis = acosl((tr1*tr1 + tr3*tr3 - tr2*tr2) / (2*tr1*tr3));
		double t2l = (t2lenkis * 180) / PI;
		double t3lenkis = acosl((tr1*tr1 + tr2*tr2 - tr3*tr3) / (2*tr2*tr1));
		double t3l = (t3lenkis * 180) / PI;
		if ((t1lenkis * 180) / PI < 90 && (t2lenkis * 180) / PI < 90 && (t3lenkis * 180) / PI < 90) { // Ja Visi trīsstūra leņķi ir mazāki par 90 grādiem tad tiek izdrukāts, ka trīsstūris ir šaurleņķa!
			VEIDS->Text = "Trissturis ir šaurlenka!";
		}
		else if ((t1lenkis * 180) / PI == 90 || (t2lenkis * 180) / PI == 90 || (t3lenkis * 180) / PI == 90) { // Ja kāds no trīsstūra leņķiem ir vienāds ar 90 grādiem, tad trīstūris ir taisnleņķa!
			VEIDS->Text = "Trissturis ir taisnlenka!";
		}
		else VEIDS->Text = "Trissturis ir platlenka!"; // Ja tas neatbilst ne šaurleņķa vai taisnleņķa apreiķiniem, tad tas būs platleņķa!

	t1 = System::Convert::ToString(t1l); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!
	t2 = System::Convert::ToString(t2l);
	t3 = System::Convert::ToString(t3l);

	A->Text = t1; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!
	B->Text = t2;
	C->Text = t3;
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ m1 = textBox1->Text; // Paņem ierakstīto String mainīgo no textBox
	int me1 = System::Convert::ToInt16(m1); // Pārvērš String mainīgo par intidžeri lai precīzāk varētu veikt apreiķinus!
	String^ m2 = textBox2->Text;
	int me2 = System::Convert::ToInt16(m2);
	String^ m3 = textBox3->Text;
	int me3 = System::Convert::ToInt16(m3);

	double Mediana1 = sqrt(2 * (me2 * me2 + me3 * me3) - me1 * me1) / 2; // Tiek izmantota formula trīsstura mediānu apreiķināšanai
	double Mediana2 = sqrt(2 * (me1 * me1 + me3 * me3) - me2 * me2) / 2;
	double Mediana3 = sqrt(2 * (me2 * me2 + me1 * me1) - me3 * me3) / 2;

	m1 = System::Convert::ToString(Mediana1); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!
	m2 = System::Convert::ToString(Mediana2);
	m3 = System::Convert::ToString(Mediana3);

	M1->Text = m1; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!
	M2->Text = m2;
	M3->Text = m3;


}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ c1 = textBox4->Text; // Paņem ierakstīto String mainīgo no textbBox
	int ce1 = System::Convert::ToInt16(c1); // Pārvērš String mainīgo par intidžeri lai precīzāk varētu veikt apreiķinus!
	String^ c2 = textBox5->Text;
	int ce2 = System::Convert::ToInt16(c2);
	String^ c3 = textBox6->Text;
	int ce3 = System::Convert::ToInt16(c3);
	String^ c4 = textBox7->Text;
	int ce4 = System::Convert::ToInt16(c4);
	String^ l1 = textBox8->Text;
	int le1 = System::Convert::ToInt16(l1);

	if (ce1 == ce2 && ce2 == ce3 && ce3 == ce4 && le1 == 90) CVEIDS->Text = "KVADRATS"; // Pārbauda un noskaidro vai četrstūris ir KVADRATS, ROMBS, TAISNSTURIS vai PARALELOGRAMS!
	else if (ce1 == ce2 && ce2 == ce3 && ce3 == ce4) CVEIDS->Text = "ROMBS";
	else if (ce1 == ce3 && ce2 == ce4 && le1 == 90
		|| ce1 == ce2 && ce3 == ce4 && le1 == 90) CVEIDS->Text = "TAISNSTURIS";
	else if (ce1 != ce3 && ce2 != ce4 || ce1 == ce2
		&& ce3 == ce4) CVEIDS->Text = "PARALELOGRAMS";
	else
		CVEIDS->Text = "NEVAR NOTEIKT!";// Ja ievadītais leņķis un malu garumi nesakrīt ar nevienu no šiem veidiem tad tiek izvadīts ka NEVAR NOTEIKT!

	c1 = System::Convert::ToString(ce1); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!
	c2 = System::Convert::ToString(ce2);
	c3 = System::Convert::ToString(ce3);
	c4 = System::Convert::ToString(ce4);
	l1 = System::Convert::ToString(le1);

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ c1 = textBox4->Text; // Paņem ierakstīto String mainīgo no textbBox
	int ce1 = System::Convert::ToInt16(c1); // Pārvērš String mainīgo par intidžeri lai precīzāk varētu veikt apreiķinus!
	String^ c2 = textBox5->Text;
	int ce2 = System::Convert::ToInt16(c2);
	String^ c3 = textBox6->Text;
	int ce3 = System::Convert::ToInt16(c3);
	String^ c4 = textBox7->Text;
	int ce4 = System::Convert::ToInt16(c4);

	int garaka; // Deklerē garāko malu
	String^ c5; // Deklerē String mainīgo ko pēc tam var izmantot izvadei

		garaka = ce1; // Iet cauri visiem ievadītajiem skaitļiem salīdzinot tos un izvēlas lielāko skaitli kuru izmantot kā izvadi garākajai malai!
		if (garaka < ce2)
			garaka = ce2;
		if (garaka < ce3)
			garaka = ce3;
		if (garaka < ce4)
			garaka = ce4;

	c1 = System::Convert::ToString(ce1); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!
	c2 = System::Convert::ToString(ce2);
	c3 = System::Convert::ToString(ce3);
	c4 = System::Convert::ToString(ce4);
	c5 = System::Convert::ToString(garaka);

	garakamala->Text = c5; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ r1 = radiuscircle->Text; // Paņem ierakstīto String mainīgo no textbBox
	int ri1 = System::Convert::ToInt16(r1); // Pārvērš String mainīgo par intidžeri lai precīzāk varētu veikt apreiķinus!

	double PI = 3.14159265359; //Deklerē PI

	ri1 = PI * ri1 * ri1; // Tiek apreiķināts riņķa laukums!

	r1 = System::Convert::ToString(ri1); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!

	laukumscircle->Text = r1; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!
}
private: System::Void laukumscircle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	double PI = 3.14159265359; //Deklerē PI

	String^ r1 = radiuscircle->Text; // Paņem ierakstīto String mainīgo no textbBox
	int ri1 = System::Convert::ToInt16(r1); // Pārvērš String mainīgo par intidžeri lai precīzāk varētu veikt apreiķinus!
	String^ lc1 = lenkiscircle->Text;
	int lci1 = System::Convert::ToInt16(lc1);

	double SEC = segments(ri1, lci1);// Izsauc funkciju segments padodot lietotāja ievadīto leņķi un rādiusu!

	double TRIS = segments(ri1, (360 - lci1)); // Izsauc funkciju segments padodot lietotāja ievadīto leņķi un rādiusu! Tikai šoreiz skatoties pēc 
	                                           //formulas lai apreiķinātu trīstura laukumu/segmentu no 360 grādiem jāatņem ievadītais segments

	String^ S; // Deklerē String mainīgo ko pēc tam var izmantot izvadei
	String^ T; // Deklerē String mainīgo ko pēc tam var izmantot izvadei

	S = System::Convert::ToString(SEC); //Pēc apreiķiniem pārvērš Intidžer mainīgos atpakaļ String mainīgajos lai varētu izdrukāt teksta veidā izmantojot label tools!
	T = System::Convert::ToString(TRIS);

	MiniS->Text = S; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!
	MaxS->Text = T; // Tiek izdrukāti apreiķini noteiktajās etiķetēs (lable) kurus var noteikt pēc padotā vārda!
}
private: System::Void lenkiscircle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <assert.h>


#pragma once

namespace Zemlyanova932001 {
    
    using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    //int a, b, c, d, h, f, g;
    //int money, m;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
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
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    protected:
    private: System::Windows::Forms::Panel^ panel1;




    private: System::Windows::Forms::Button^ button3;


    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label10;

    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::PictureBox^ pictureBox10Win;
    private: System::Windows::Forms::PictureBox^ pictureBox11Lose;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::PictureBox^ pictureBox10WL;
    private: System::Windows::Forms::PictureBox^ pictureBox10L;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::Label^ label15;



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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox10WL = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10L = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox11Lose = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10Win = (gcnew System::Windows::Forms::PictureBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10WL))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10L))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11Lose))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10Win))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(560, 63);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(57, 91);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 95;
            this->pictureBox9->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->textBox16);
            this->panel1->Controls->Add(this->label16);
            this->panel1->Controls->Add(this->textBox15);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->textBox14);
            this->panel1->Controls->Add(this->textBox13);
            this->panel1->Controls->Add(this->textBox12);
            this->panel1->Controls->Add(this->pictureBox10WL);
            this->panel1->Controls->Add(this->pictureBox10L);
            this->panel1->Controls->Add(this->pictureBox11Lose);
            this->panel1->Controls->Add(this->pictureBox10Win);
            this->panel1->Controls->Add(this->textBox11);
            this->panel1->Controls->Add(this->pictureBox8);
            this->panel1->Location = System::Drawing::Point(12, 174);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(592, 592);
            this->panel1->TabIndex = 94;
            // 
            // textBox16
            // 
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox16->Location = System::Drawing::Point(226, 209);
            this->textBox16->Name = L"textBox16";
            this->textBox16->ReadOnly = true;
            this->textBox16->Size = System::Drawing::Size(96, 28);
            this->textBox16->TabIndex = 97;
            this->textBox16->Text = L"0";
            this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox16->Visible = false;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(53, 212);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(106, 23);
            this->label16->TabIndex = 97;
            this->label16->Text = L"Урон Зомби";
            this->label16->Visible = false;
            // 
            // textBox15
            // 
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox15->Location = System::Drawing::Point(226, 167);
            this->textBox15->Name = L"textBox15";
            this->textBox15->ReadOnly = true;
            this->textBox15->Size = System::Drawing::Size(96, 28);
            this->textBox15->TabIndex = 97;
            this->textBox15->Text = L"0";
            this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox15->Visible = false;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(53, 174);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(143, 23);
            this->label15->TabIndex = 97;
            this->label15->Text = L"Здоровье Зомби";
            this->label15->Visible = false;
            // 
            // textBox14
            // 
            this->textBox14->BackColor = System::Drawing::SystemColors::Menu;
            this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12));
            this->textBox14->Location = System::Drawing::Point(55, 109);
            this->textBox14->Name = L"textBox14";
            this->textBox14->ReadOnly = true;
            this->textBox14->Size = System::Drawing::Size(469, 24);
            this->textBox14->TabIndex = 8;
            this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox14->Visible = false;
            // 
            // textBox13
            // 
            this->textBox13->BackColor = System::Drawing::SystemColors::Menu;
            this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 36));
            this->textBox13->Location = System::Drawing::Point(55, 18);
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->Size = System::Drawing::Size(469, 70);
            this->textBox13->TabIndex = 7;
            this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox13->Visible = false;
            // 
            // textBox12
            // 
            this->textBox12->BackColor = System::Drawing::SystemColors::Menu;
            this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20));
            this->textBox12->Location = System::Drawing::Point(113, 142);
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->Size = System::Drawing::Size(329, 39);
            this->textBox12->TabIndex = 6;
            this->textBox12->Text = L"Приготовься!";
            this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox10WL
            // 
            this->pictureBox10WL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10WL.BackgroundImage")));
            this->pictureBox10WL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox10WL->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox10WL->Location = System::Drawing::Point(66, 253);
            this->pictureBox10WL->Name = L"pictureBox10WL";
            this->pictureBox10WL->Size = System::Drawing::Size(469, 310);
            this->pictureBox10WL->TabIndex = 5;
            this->pictureBox10WL->TabStop = false;
            this->pictureBox10WL->Visible = false;
            // 
            // pictureBox10L
            // 
            this->pictureBox10L->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10L.BackgroundImage")));
            this->pictureBox10L->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox10L->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox10L->Location = System::Drawing::Point(68, 253);
            this->pictureBox10L->Name = L"pictureBox10L";
            this->pictureBox10L->Size = System::Drawing::Size(469, 310);
            this->pictureBox10L->TabIndex = 4;
            this->pictureBox10L->TabStop = false;
            this->pictureBox10L->Visible = false;
            // 
            // pictureBox11Lose
            // 
            this->pictureBox11Lose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11Lose.BackgroundImage")));
            this->pictureBox11Lose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox11Lose->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox11Lose->Location = System::Drawing::Point(68, 255);
            this->pictureBox11Lose->Name = L"pictureBox11Lose";
            this->pictureBox11Lose->Size = System::Drawing::Size(469, 310);
            this->pictureBox11Lose->TabIndex = 3;
            this->pictureBox11Lose->TabStop = false;
            this->pictureBox11Lose->Visible = false;
            // 
            // pictureBox10Win
            // 
            this->pictureBox10Win->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10Win.BackgroundImage")));
            this->pictureBox10Win->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox10Win->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox10Win->Location = System::Drawing::Point(68, 253);
            this->pictureBox10Win->Name = L"pictureBox10Win";
            this->pictureBox10Win->Size = System::Drawing::Size(469, 310);
            this->pictureBox10Win->TabIndex = 2;
            this->pictureBox10Win->TabStop = false;
            this->pictureBox10Win->Visible = false;
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::SystemColors::Menu;
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20));
            this->textBox11->Location = System::Drawing::Point(113, 44);
            this->textBox11->Name = L"textBox11";
            this->textBox11->ReadOnly = true;
            this->textBox11->Size = System::Drawing::Size(329, 39);
            this->textBox11->TabIndex = 1;
            this->textBox11->Text = L"Зомби уже близко!";
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pictureBox8->Location = System::Drawing::Point(66, 255);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(469, 310);
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox10->Location = System::Drawing::Point(119, 216);
            this->textBox10->Name = L"textBox10";
            this->textBox10->ReadOnly = true;
            this->textBox10->Size = System::Drawing::Size(96, 28);
            this->textBox10->TabIndex = 82;
            this->textBox10->Text = L"0";
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox9->Location = System::Drawing::Point(119, 158);
            this->textBox9->Name = L"textBox9";
            this->textBox9->ReadOnly = true;
            this->textBox9->Size = System::Drawing::Size(96, 28);
            this->textBox9->TabIndex = 81;
            this->textBox9->Text = L"0";
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11));
            this->label13->Location = System::Drawing::Point(18, 114);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(170, 24);
            this->label13->TabIndex = 83;
            this->label13->Text = L"Состояние армии:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(18, 219);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(55, 23);
            this->label10->TabIndex = 52;
            this->label10->Text = L"Урон ";
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 11.8F));
            this->button3->Location = System::Drawing::Point(39, 275);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(161, 78);
            this->button3->TabIndex = 18;
            this->button3->Text = L"Начать\r\nсражение";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Menu;
            this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(74, 46);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(451, 28);
            this->label1->TabIndex = 53;
            this->label1->Text = L"Добро пожаловать в «Plants vs. Zombies»";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Menu;
            this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(103, 94);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(377, 23);
            this->label2->TabIndex = 54;
            this->label2->Text = L"Собери свою армию и защити дом от зомби!";
            this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(42, 312);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(176, 36);
            this->button4->TabIndex = 66;
            this->button4->Text = L"Создать армию";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(22, 59);
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(193, 28);
            this->textBox1->TabIndex = 67;
            this->textBox1->Text = L"0";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label12
            // 
            this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::SystemColors::Menu;
            this->label12->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(18, 16);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(178, 23);
            this->label12->TabIndex = 63;
            this->label12->Text = L"На твоем счету:       ";
            this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->InitialImage = nullptr;
            this->pictureBox7->Location = System::Drawing::Point(670, 627);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(62, 96);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 93;
            this->pictureBox7->TabStop = false;
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox8->Location = System::Drawing::Point(591, 661);
            this->textBox8->Name = L"textBox8";
            this->textBox8->ReadOnly = true;
            this->textBox8->Size = System::Drawing::Size(38, 28);
            this->textBox8->TabIndex = 92;
            this->textBox8->Text = L"0";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button15
            // 
            this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button15->Location = System::Drawing::Point(591, 627);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(38, 28);
            this->button15->TabIndex = 91;
            this->button15->Text = L"-";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
            // 
            // button16
            // 
            this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button16->Location = System::Drawing::Point(591, 695);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(38, 28);
            this->button16->TabIndex = 90;
            this->button16->Text = L"+";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->InitialImage = nullptr;
            this->pictureBox6->Location = System::Drawing::Point(403, 615);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(86, 127);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 89;
            this->pictureBox6->TabStop = false;
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox7->Location = System::Drawing::Point(324, 661);
            this->textBox7->Name = L"textBox7";
            this->textBox7->ReadOnly = true;
            this->textBox7->Size = System::Drawing::Size(38, 28);
            this->textBox7->TabIndex = 88;
            this->textBox7->Text = L"0";
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button13
            // 
            this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button13->Location = System::Drawing::Point(324, 627);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(38, 28);
            this->button13->TabIndex = 87;
            this->button13->Text = L"-";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
            // 
            // button14
            // 
            this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button14->Location = System::Drawing::Point(324, 695);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(38, 28);
            this->button14->TabIndex = 86;
            this->button14->Text = L"+";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->InitialImage = nullptr;
            this->pictureBox5->Location = System::Drawing::Point(670, 395);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(62, 96);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 85;
            this->pictureBox5->TabStop = false;
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox6->Location = System::Drawing::Point(591, 429);
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->Size = System::Drawing::Size(38, 28);
            this->textBox6->TabIndex = 84;
            this->textBox6->Text = L"0";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button11
            // 
            this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button11->Location = System::Drawing::Point(591, 395);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(38, 28);
            this->button11->TabIndex = 83;
            this->button11->Text = L"-";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // button12
            // 
            this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button12->Location = System::Drawing::Point(591, 463);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(38, 28);
            this->button12->TabIndex = 82;
            this->button12->Text = L"+";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->InitialImage = nullptr;
            this->pictureBox4->Location = System::Drawing::Point(403, 395);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(62, 96);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 81;
            this->pictureBox4->TabStop = false;
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox5->Location = System::Drawing::Point(324, 429);
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->Size = System::Drawing::Size(38, 28);
            this->textBox5->TabIndex = 80;
            this->textBox5->Text = L"0";
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button9
            // 
            this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button9->Location = System::Drawing::Point(324, 395);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(38, 28);
            this->button9->TabIndex = 79;
            this->button9->Text = L"-";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // button10
            // 
            this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button10->Location = System::Drawing::Point(324, 463);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(38, 28);
            this->button10->TabIndex = 78;
            this->button10->Text = L"+";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->InitialImage = nullptr;
            this->pictureBox3->Location = System::Drawing::Point(670, 166);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(62, 96);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 77;
            this->pictureBox3->TabStop = false;
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox4->Location = System::Drawing::Point(591, 200);
            this->textBox4->Name = L"textBox4";
            this->textBox4->ReadOnly = true;
            this->textBox4->Size = System::Drawing::Size(38, 28);
            this->textBox4->TabIndex = 76;
            this->textBox4->Text = L"0";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button7
            // 
            this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button7->Location = System::Drawing::Point(591, 166);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(38, 28);
            this->button7->TabIndex = 75;
            this->button7->Text = L"-";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // button8
            // 
            this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button8->Location = System::Drawing::Point(591, 234);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(38, 28);
            this->button8->TabIndex = 74;
            this->button8->Text = L"+";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->InitialImage = nullptr;
            this->pictureBox2->Location = System::Drawing::Point(395, 166);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(62, 96);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 73;
            this->pictureBox2->TabStop = false;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(316, 200);
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(38, 28);
            this->textBox3->TabIndex = 72;
            this->textBox3->Text = L"0";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button5
            // 
            this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->Location = System::Drawing::Point(316, 166);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(38, 28);
            this->button5->TabIndex = 71;
            this->button5->Text = L"-";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // button6
            // 
            this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button6->Location = System::Drawing::Point(316, 234);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(38, 28);
            this->button6->TabIndex = 70;
            this->button6->Text = L"+";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->InitialImage = nullptr;
            this->pictureBox1->Location = System::Drawing::Point(158, 166);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(62, 96);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 69;
            this->pictureBox1->TabStop = false;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(79, 200);
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->Size = System::Drawing::Size(38, 28);
            this->textBox2->TabIndex = 68;
            this->textBox2->Text = L"0";
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(79, 166);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(38, 28);
            this->button1->TabIndex = 65;
            this->button1->Text = L"-";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(79, 234);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(38, 28);
            this->button2->TabIndex = 64;
            this->button2->Text = L"+";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::SystemColors::Menu;
            this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(557, 520);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(176, 92);
            this->label8->TabIndex = 62;
            this->label8->Text = L"7. Арбузопульта:     \r\n    Здоровье:      600\r\n    Урон:              300\r\n    Це"
                L"на:              500";
            this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::SystemColors::Menu;
            this->label9->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(287, 520);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(186, 92);
            this->label9->TabIndex = 61;
            this->label9->Text = L"6. Горохомет:            \r\n    Здоровье:      300\r\n    Урон:              400\r\n  "
                L"  Цена:              350";
            this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::SystemColors::Menu;
            this->label11->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(557, 290);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(205, 92);
            this->label11->TabIndex = 60;
            this->label11->Text = L"5. Картофельная мина:\r\n     Здоровье:        200   \r\n     Урон:               150"
                L"    \r\n     Цена:               200    ";
            this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::SystemColors::Menu;
            this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(287, 290);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(188, 92);
            this->label7->TabIndex = 59;
            this->label7->Text = L"4. Капустапульта:      \r\n    Здоровье:        300\r\n    Урон:                150\r\n"
                L"    Цена:                275";
            this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::SystemColors::Menu;
            this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(557, 61);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(186, 92);
            this->label6->TabIndex = 58;
            this->label6->Text = L"3. Вишневая бомба: \r\n     Здоровье:        350\r\n     Урон:               350\r\n   "
                L"  Цена:               400";
            this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::Menu;
            this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(287, 61);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(230, 92);
            this->label5->TabIndex = 57;
            this->label5->Text = L"2. Снежный горохострел: \r\n    Здоровье:       175          \r\n    Урон:           "
                L"   100          \r\n     Цена:              175          ";
            this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::Menu;
            this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(55, 61);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(180, 92);
            this->label4->TabIndex = 56;
            this->label4->Text = L"1. Горохострел:      \r\n    Здоровье:      75  \r\n    Урон:             100\r\n     Ц"
                L"ена:             100 ";
            this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::Menu;
            this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(16, 13);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(228, 23);
            this->label3->TabIndex = 55;
            this->label3->Text = L"Характеристика растений:";
            this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panel2
            // 
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->panel3);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->pictureBox7);
            this->panel2->Controls->Add(this->label5);
            this->panel2->Controls->Add(this->textBox8);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Controls->Add(this->button15);
            this->panel2->Controls->Add(this->button2);
            this->panel2->Controls->Add(this->button16);
            this->panel2->Controls->Add(this->button1);
            this->panel2->Controls->Add(this->pictureBox6);
            this->panel2->Controls->Add(this->textBox2);
            this->panel2->Controls->Add(this->textBox7);
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->button13);
            this->panel2->Controls->Add(this->button6);
            this->panel2->Controls->Add(this->button14);
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->label8);
            this->panel2->Controls->Add(this->label9);
            this->panel2->Controls->Add(this->pictureBox5);
            this->panel2->Controls->Add(this->textBox3);
            this->panel2->Controls->Add(this->textBox6);
            this->panel2->Controls->Add(this->pictureBox2);
            this->panel2->Controls->Add(this->button11);
            this->panel2->Controls->Add(this->button8);
            this->panel2->Controls->Add(this->button12);
            this->panel2->Controls->Add(this->button7);
            this->panel2->Controls->Add(this->pictureBox4);
            this->panel2->Controls->Add(this->textBox4);
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->pictureBox3);
            this->panel2->Controls->Add(this->button9);
            this->panel2->Controls->Add(this->label11);
            this->panel2->Controls->Add(this->button10);
            this->panel2->Controls->Add(this->label7);
            this->panel2->Location = System::Drawing::Point(646, 12);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(814, 754);
            this->panel2->TabIndex = 95;
            // 
            // panel3
            // 
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel3->Controls->Add(this->textBox10);
            this->panel3->Controls->Add(this->label14);
            this->panel3->Controls->Add(this->label12);
            this->panel3->Controls->Add(this->button3);
            this->panel3->Controls->Add(this->textBox9);
            this->panel3->Controls->Add(this->label10);
            this->panel3->Controls->Add(this->textBox1);
            this->panel3->Controls->Add(this->label13);
            this->panel3->Location = System::Drawing::Point(20, 370);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(233, 372);
            this->panel3->TabIndex = 94;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(18, 161);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(87, 23);
            this->label14->TabIndex = 96;
            this->label14->Text = L"Здоровье";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1472, 791);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"«Plants vs. Zombies»";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10WL))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10L))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11Lose))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10Win))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);


    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);




};

}

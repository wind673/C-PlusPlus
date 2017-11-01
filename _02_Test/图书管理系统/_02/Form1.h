#pragma once

namespace _02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: Microsoft::VisualBasic::PowerPacks::DataRepeater^  dataRepeater1;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataRepeater1 = (gcnew Microsoft::VisualBasic::PowerPacks::DataRepeater());
			this->dataRepeater1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::Color::SpringGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button3->Location = System::Drawing::Point(965, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 38);
			this->button3->TabIndex = 23;
			this->button3->Text = L"确 认";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Location = System::Drawing::Point(63, 544);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 21);
			this->textBox2->TabIndex = 22;
			this->textBox2->Text = L"密 码";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->Location = System::Drawing::Point(912, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(163, 21);
			this->textBox4->TabIndex = 21;
			this->textBox4->Text = L"书籍号";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Location = System::Drawing::Point(566, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 30);
			this->button2->TabIndex = 20;
			this->button2->Text = L"查 找";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(181, 52);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(379, 28);
			this->textBox3->TabIndex = 19;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::Black;
			this->radioButton2->Location = System::Drawing::Point(912, 143);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 16);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"归还";
			this->radioButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::Black;
			this->radioButton1->Location = System::Drawing::Point(912, 121);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(47, 16);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"借阅";
			this->radioButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(196, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 57);
			this->button1->TabIndex = 16;
			this->button1->Text = L"登陆";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(12, 549);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"密码";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 516);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"学号";
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Location = System::Drawing::Point(63, 513);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 21);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"学 号";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataRepeater1
			// 
			// 
			// dataRepeater1.ItemTemplate
			// 
			this->dataRepeater1->ItemTemplate->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataRepeater1->ItemTemplate->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataRepeater1->ItemTemplate->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dataRepeater1->ItemTemplate->Size = System::Drawing::Size(762, 5000);
			this->dataRepeater1->Location = System::Drawing::Point(101, 94);
			this->dataRepeater1->Name = L"dataRepeater1";
			this->dataRepeater1->Size = System::Drawing::Size(787, 405);
			this->dataRepeater1->TabIndex = 24;
			this->dataRepeater1->Text = L"dataRepeater1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1087, 577);
			this->Controls->Add(this->dataRepeater1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"图书管理系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->dataRepeater1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->reportViewer1->RefreshReport();
			 }
};
}


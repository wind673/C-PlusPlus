#pragma once

namespace 图书管理系统 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: Microsoft::VisualBasic::PowerPacks::DataRepeater^  dataRepeater1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;



	protected: 
	private: System::ComponentModel::IContainer^  components;

	protected: 

	protected: 


	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataRepeater1 = (gcnew Microsoft::VisualBasic::PowerPacks::DataRepeater());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataRepeater1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Name = L"label2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// radioButton1
			// 
			resources->ApplyResources(this->radioButton1, L"radioButton1");
			this->radioButton1->ForeColor = System::Drawing::Color::Black;
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			resources->ApplyResources(this->radioButton2, L"radioButton2");
			this->radioButton2->ForeColor = System::Drawing::Color::Black;
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// dataRepeater1
			// 
			this->dataRepeater1->AccessibleRole = System::Windows::Forms::AccessibleRole::IpAddress;
			// 
			// dataRepeater1.ItemTemplate
			// 
			resources->ApplyResources(this->dataRepeater1->ItemTemplate, L"dataRepeater1.ItemTemplate");
			resources->ApplyResources(this->dataRepeater1, L"dataRepeater1");
			this->dataRepeater1->Name = L"dataRepeater1";
			this->dataRepeater1->TabStop = false;
			this->dataRepeater1->CurrentItemIndexChanged += gcnew System::EventHandler(this, &Form1::dataRepeater1_CurrentItemIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->BackColor = System::Drawing::Color::SpringGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button3->Name = L"button3";
			this->button3->UseCompatibleTextRendering = true;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataRepeater1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->HelpButton = true;
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->TransparencyKey = System::Drawing::SystemColors::ActiveCaptionText;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->dataRepeater1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dataRepeater1_CurrentItemIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


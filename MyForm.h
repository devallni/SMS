#pragma once
#include "PortalForm.h"
#include "PortalFormTeacher.h"
#include "PortalFormAdmin.h"
#include <cmath>

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonAdminPortal;

	private: System::Windows::Forms::Panel^ panelAdminLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonAdminLogin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxAdminPassword;
	private: System::Windows::Forms::TextBox^ textBoxAdminEmail;
	private: System::Windows::Forms::Button^ buttonCloseAdmin;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:

		bool fadeIn = false;
		bool fadeOut = false;
		double opacityStep = 0.05;
		double panelAlpha = 0.0;
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAdminPortal = (gcnew System::Windows::Forms::Button());
			this->panelAdminLogin = (gcnew System::Windows::Forms::Panel());
			this->buttonCloseAdmin = (gcnew System::Windows::Forms::Button());
			this->buttonAdminLogin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdminPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdminEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelAdminLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(379, 675);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 42);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(327, 406);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(302, 28);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(327, 514);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(302, 28);
			this->textBox2->TabIndex = 2;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(314, 581);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Student";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(492, 581);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Teacher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1361, 667);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// buttonAdminPortal
			// 
			this->buttonAdminPortal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdminPortal.BackgroundImage")));
			this->buttonAdminPortal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdminPortal->FlatAppearance->BorderSize = 0;
			this->buttonAdminPortal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdminPortal->ForeColor = System::Drawing::Color::White;
			this->buttonAdminPortal->Location = System::Drawing::Point(1105, 95);
			this->buttonAdminPortal->Name = L"buttonAdminPortal";
			this->buttonAdminPortal->Size = System::Drawing::Size(149, 39);
			this->buttonAdminPortal->TabIndex = 6;
			this->buttonAdminPortal->Text = L"Admin Portal";
			this->buttonAdminPortal->UseVisualStyleBackColor = true;
			this->buttonAdminPortal->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminPortal_Click);
			// 
			// panelAdminLogin
			// 
			this->panelAdminLogin->BackColor = System::Drawing::Color::LightGray;
			this->panelAdminLogin->Controls->Add(this->buttonCloseAdmin);
			this->panelAdminLogin->Controls->Add(this->buttonAdminLogin);
			this->panelAdminLogin->Controls->Add(this->label3);
			this->panelAdminLogin->Controls->Add(this->textBoxAdminPassword);
			this->panelAdminLogin->Controls->Add(this->textBoxAdminEmail);
			this->panelAdminLogin->Controls->Add(this->label2);
			this->panelAdminLogin->Controls->Add(this->label1);
			this->panelAdminLogin->Location = System::Drawing::Point(411, 79);
			this->panelAdminLogin->Name = L"panelAdminLogin";
			this->panelAdminLogin->Size = System::Drawing::Size(541, 721);
			this->panelAdminLogin->TabIndex = 7;
			this->panelAdminLogin->Visible = false;
			// 
			// buttonCloseAdmin
			// 
			this->buttonCloseAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCloseAdmin.BackgroundImage")));
			this->buttonCloseAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCloseAdmin->FlatAppearance->BorderSize = 0;
			this->buttonCloseAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCloseAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCloseAdmin->ForeColor = System::Drawing::Color::White;
			this->buttonCloseAdmin->Location = System::Drawing::Point(374, 16);
			this->buttonCloseAdmin->Name = L"buttonCloseAdmin";
			this->buttonCloseAdmin->Size = System::Drawing::Size(150, 39);
			this->buttonCloseAdmin->TabIndex = 6;
			this->buttonCloseAdmin->Text = L" Minimize";
			this->buttonCloseAdmin->UseVisualStyleBackColor = true;
			this->buttonCloseAdmin->Click += gcnew System::EventHandler(this, &MyForm::buttonCloseAdmin_Click);
			// 
			// buttonAdminLogin
			// 
			this->buttonAdminLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdminLogin.BackgroundImage")));
			this->buttonAdminLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdminLogin->FlatAppearance->BorderSize = 0;
			this->buttonAdminLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdminLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdminLogin->ForeColor = System::Drawing::Color::White;
			this->buttonAdminLogin->Location = System::Drawing::Point(188, 502);
			this->buttonAdminLogin->Name = L"buttonAdminLogin";
			this->buttonAdminLogin->Size = System::Drawing::Size(149, 40);
			this->buttonAdminLogin->TabIndex = 5;
			this->buttonAdminLogin->Text = L"Sign In";
			this->buttonAdminLogin->UseVisualStyleBackColor = true;
			this->buttonAdminLogin->Click += gcnew System::EventHandler(this, &MyForm::buttonAdminLogin_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(112, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 59);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Admin Portal";
			// 
			// textBoxAdminPassword
			// 
			this->textBoxAdminPassword->Location = System::Drawing::Point(81, 394);
			this->textBoxAdminPassword->Name = L"textBoxAdminPassword";
			this->textBoxAdminPassword->Size = System::Drawing::Size(319, 35);
			this->textBoxAdminPassword->TabIndex = 3;
			this->textBoxAdminPassword->UseSystemPasswordChar = true;
			// 
			// textBoxAdminEmail
			// 
			this->textBoxAdminEmail->Location = System::Drawing::Point(81, 290);
			this->textBoxAdminEmail->Name = L"textBoxAdminEmail";
			this->textBoxAdminEmail->Size = System::Drawing::Size(319, 35);
			this->textBoxAdminEmail->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(76, 344);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Admin Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(76, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Email";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1358, 847);
			this->Controls->Add(this->panelAdminLogin);
			this->Controls->Add(this->buttonAdminPortal);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelAdminLogin->ResumeLayout(false);
			this->panelAdminLogin->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
	bool isTeacher = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (button3->BackgroundImage == pictureBox1->Image) {
			// Open teacher portal
			StudentManagementSystem::PortalFormTeacher^ teacherPortal = gcnew StudentManagementSystem::PortalFormTeacher();
			teacherPortal->Show();
		}
		else if(button2->BackgroundImage == pictureBox1->Image) {
			// Open student portal
			StudentManagementSystem::PortalForm^ studentPortal = gcnew StudentManagementSystem::PortalForm();
			studentPortal->Show();
		}

		// Hide the login form
		this->Hide();
	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->FlatAppearance->MouseDownBackColor = Color::Transparent;
	button1->FlatAppearance->MouseOverBackColor = Color::Transparent;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// When Student is clicked, Teacher gets Student's background
	button3->BackgroundImage = button2->BackgroundImage;
	// Student gets default from pictureBox1
	button2->BackgroundImage = pictureBox1->Image;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// When Teacher is clicked, Student gets Teacher's background
	button2->BackgroundImage = button3->BackgroundImage;
	// Teacher gets default from pictureBox1
	button3->BackgroundImage = pictureBox1->Image;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonAdminPortal_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAdminLogin->Visible = true;
}
private: System::Void buttonCloseAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panelAdminLogin->Visible = false;

}
private: System::Void buttonAdminLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentManagementSystem::PortalFormAdmin^ adminForm = gcnew StudentManagementSystem::PortalFormAdmin();
	adminForm->Show();

	this->Hide();
}
};
}

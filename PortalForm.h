#pragma once

namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PortalForm
	/// </summary>
	public ref class PortalForm : public System::Windows::Forms::Form
	{
	public:
		PortalForm(void);

	protected:
		~PortalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonPersonalInfo;
	private: System::Windows::Forms::Button^ buttonCourseReg;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panelPersonalInfo;
	private: System::Windows::Forms::Button^ buttonAttendance;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ buttonGrades;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panelCourseReg;
	private: System::Windows::Forms::Panel^ panelGrades;
	private: System::Windows::Forms::Panel^ panelAttendance;
	private: System::Windows::Forms::Button^ buttonTimetable;
	private: System::Windows::Forms::PictureBox^ pictureBox5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PortalForm::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPersonalInfo = (gcnew System::Windows::Forms::Button());
			this->panelPersonalInfo = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonCourseReg = (gcnew System::Windows::Forms::Button());
			this->panelCourseReg = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonGrades = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAttendance = (gcnew System::Windows::Forms::Button());
			this->panelGrades = (gcnew System::Windows::Forms::Panel());
			this->panelAttendance = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonTimetable = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panelPersonalInfo);
			this->flowLayoutPanel1->Controls->Add(this->panelCourseReg);
			this->flowLayoutPanel1->Controls->Add(this->panelGrades);
			this->flowLayoutPanel1->Controls->Add(this->panelAttendance);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1241, 849);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->buttonTimetable);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->buttonAttendance);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->buttonGrades);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->buttonCourseReg);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->buttonPersonalInfo);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(271, 846);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(9, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(68, 66);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// buttonPersonalInfo
			// 
			this->buttonPersonalInfo->BackColor = System::Drawing::Color::Black;
			this->buttonPersonalInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonPersonalInfo->ForeColor = System::Drawing::Color::White;
			this->buttonPersonalInfo->Location = System::Drawing::Point(83, 157);
			this->buttonPersonalInfo->Name = L"buttonPersonalInfo";
			this->buttonPersonalInfo->Size = System::Drawing::Size(185, 69);
			this->buttonPersonalInfo->TabIndex = 3;
			this->buttonPersonalInfo->Text = L"Personal Information";
			this->buttonPersonalInfo->UseVisualStyleBackColor = false;
			// 
			// panelPersonalInfo
			// 
			this->panelPersonalInfo->BackColor = System::Drawing::Color::IndianRed;
			this->panelPersonalInfo->Location = System::Drawing::Point(280, 3);
			this->panelPersonalInfo->Name = L"panelPersonalInfo";
			this->panelPersonalInfo->Size = System::Drawing::Size(200, 100);
			this->panelPersonalInfo->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(9, 259);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 66);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// buttonCourseReg
			// 
			this->buttonCourseReg->BackColor = System::Drawing::Color::Black;
			this->buttonCourseReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCourseReg->ForeColor = System::Drawing::Color::White;
			this->buttonCourseReg->Location = System::Drawing::Point(83, 259);
			this->buttonCourseReg->Name = L"buttonCourseReg";
			this->buttonCourseReg->Size = System::Drawing::Size(185, 69);
			this->buttonCourseReg->TabIndex = 5;
			this->buttonCourseReg->Text = L"Course Registration";
			this->buttonCourseReg->UseVisualStyleBackColor = false;
			// 
			// panelCourseReg
			// 
			this->panelCourseReg->BackColor = System::Drawing::Color::Sienna;
			this->panelCourseReg->Location = System::Drawing::Point(486, 3);
			this->panelCourseReg->Name = L"panelCourseReg";
			this->panelCourseReg->Size = System::Drawing::Size(200, 100);
			this->panelCourseReg->TabIndex = 3;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(9, 354);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(68, 66);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// buttonGrades
			// 
			this->buttonGrades->BackColor = System::Drawing::Color::Black;
			this->buttonGrades->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGrades->ForeColor = System::Drawing::Color::White;
			this->buttonGrades->Location = System::Drawing::Point(83, 354);
			this->buttonGrades->Name = L"buttonGrades";
			this->buttonGrades->Size = System::Drawing::Size(185, 69);
			this->buttonGrades->TabIndex = 7;
			this->buttonGrades->Text = L"Grades";
			this->buttonGrades->UseVisualStyleBackColor = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(9, 447);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(65, 66);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// buttonAttendance
			// 
			this->buttonAttendance->BackColor = System::Drawing::Color::Black;
			this->buttonAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAttendance->ForeColor = System::Drawing::Color::White;
			this->buttonAttendance->Location = System::Drawing::Point(83, 447);
			this->buttonAttendance->Name = L"buttonAttendance";
			this->buttonAttendance->Size = System::Drawing::Size(185, 69);
			this->buttonAttendance->TabIndex = 9;
			this->buttonAttendance->Text = L"Attendance";
			this->buttonAttendance->UseVisualStyleBackColor = false;
			// 
			// panelGrades
			// 
			this->panelGrades->BackColor = System::Drawing::Color::SandyBrown;
			this->panelGrades->Location = System::Drawing::Point(692, 3);
			this->panelGrades->Name = L"panelGrades";
			this->panelGrades->Size = System::Drawing::Size(200, 100);
			this->panelGrades->TabIndex = 4;
			// 
			// panelAttendance
			// 
			this->panelAttendance->BackColor = System::Drawing::Color::SeaGreen;
			this->panelAttendance->Location = System::Drawing::Point(898, 3);
			this->panelAttendance->Name = L"panelAttendance";
			this->panelAttendance->Size = System::Drawing::Size(200, 100);
			this->panelAttendance->TabIndex = 5;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(9, 534);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(65, 66);
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// buttonTimetable
			// 
			this->buttonTimetable->BackColor = System::Drawing::Color::Black;
			this->buttonTimetable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTimetable->ForeColor = System::Drawing::Color::White;
			this->buttonTimetable->Location = System::Drawing::Point(83, 534);
			this->buttonTimetable->Name = L"buttonTimetable";
			this->buttonTimetable->Size = System::Drawing::Size(185, 69);
			this->buttonTimetable->TabIndex = 11;
			this->buttonTimetable->Text = L"Timetable";
			this->buttonTimetable->UseVisualStyleBackColor = false;
			// 
			// PortalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 849);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"PortalForm";
			this->Text = L"Student Portal";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

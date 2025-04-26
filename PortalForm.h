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

	private: System::Windows::Forms::Button^ buttonAttendance;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ buttonGrades;

	private: System::Windows::Forms::PictureBox^ pictureBox3;



	private: System::Windows::Forms::Button^ buttonTimetable;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ buttonTranscript;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ buttonGradeChange;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ panelPersonalInfo;
	private: System::Windows::Forms::Panel^ panelCourseReg;
	private: System::Windows::Forms::Panel^ panelGrades;
	private: System::Windows::Forms::Panel^ panelAttendance;
	private: System::Windows::Forms::Panel^ panelTimetable;
	private: System::Windows::Forms::Panel^ panelTranscript;
	private: System::Windows::Forms::Panel^ panelGradeChange;























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
			this->buttonGradeChange = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonTranscript = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonTimetable = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAttendance = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonGrades = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonCourseReg = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPersonalInfo = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelPersonalInfo = (gcnew System::Windows::Forms::Panel());
			this->panelCourseReg = (gcnew System::Windows::Forms::Panel());
			this->panelGrades = (gcnew System::Windows::Forms::Panel());
			this->panelAttendance = (gcnew System::Windows::Forms::Panel());
			this->panelTimetable = (gcnew System::Windows::Forms::Panel());
			this->panelTranscript = (gcnew System::Windows::Forms::Panel());
			this->panelGradeChange = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel2);
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
			this->panel2->Controls->Add(this->buttonGradeChange);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->buttonTranscript);
			this->panel2->Controls->Add(this->pictureBox6);
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
			// buttonGradeChange
			// 
			this->buttonGradeChange->BackColor = System::Drawing::Color::Black;
			this->buttonGradeChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGradeChange->ForeColor = System::Drawing::Color::White;
			this->buttonGradeChange->Location = System::Drawing::Point(83, 702);
			this->buttonGradeChange->Name = L"buttonGradeChange";
			this->buttonGradeChange->Size = System::Drawing::Size(185, 69);
			this->buttonGradeChange->TabIndex = 15;
			this->buttonGradeChange->Text = L"Grade Change Request";
			this->buttonGradeChange->UseVisualStyleBackColor = false;
			this->buttonGradeChange->Click += gcnew System::EventHandler(this, &PortalForm::buttonTranscript_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(9, 702);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(65, 62);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// buttonTranscript
			// 
			this->buttonTranscript->BackColor = System::Drawing::Color::Black;
			this->buttonTranscript->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTranscript->ForeColor = System::Drawing::Color::White;
			this->buttonTranscript->Location = System::Drawing::Point(83, 616);
			this->buttonTranscript->Name = L"buttonTranscript";
			this->buttonTranscript->Size = System::Drawing::Size(185, 69);
			this->buttonTranscript->TabIndex = 13;
			this->buttonTranscript->Text = L"Transcript";
			this->buttonTranscript->UseVisualStyleBackColor = false;
			this->buttonTranscript->Click += gcnew System::EventHandler(this, &PortalForm::buttonGradeChange_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(9, 616);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(65, 66);
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
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
			this->buttonTimetable->Click += gcnew System::EventHandler(this, &PortalForm::buttonTimetable_Click);
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
			this->buttonAttendance->Click += gcnew System::EventHandler(this, &PortalForm::buttonAttendance_Click);
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
			this->buttonGrades->Click += gcnew System::EventHandler(this, &PortalForm::buttonGrades_Click);
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
			this->buttonCourseReg->Click += gcnew System::EventHandler(this, &PortalForm::buttonCourseReg_Click);
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
			this->buttonPersonalInfo->Click += gcnew System::EventHandler(this, &PortalForm::buttonPersonalInfo_Click);
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
			// panelPersonalInfo
			// 
			this->panelPersonalInfo->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelPersonalInfo->Location = System::Drawing::Point(277, 0);
			this->panelPersonalInfo->Name = L"panelPersonalInfo";
			this->panelPersonalInfo->Size = System::Drawing::Size(964, 849);
			this->panelPersonalInfo->TabIndex = 1;
			// 
			// panelCourseReg
			// 
			this->panelCourseReg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panelCourseReg->Location = System::Drawing::Point(277, 0);
			this->panelCourseReg->Name = L"panelCourseReg";
			this->panelCourseReg->Size = System::Drawing::Size(964, 849);
			this->panelCourseReg->TabIndex = 2;
			// 
			// panelGrades
			// 
			this->panelGrades->BackColor = System::Drawing::Color::Coral;
			this->panelGrades->Location = System::Drawing::Point(277, 0);
			this->panelGrades->Name = L"panelGrades";
			this->panelGrades->Size = System::Drawing::Size(964, 849);
			this->panelGrades->TabIndex = 3;
			// 
			// panelAttendance
			// 
			this->panelAttendance->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panelAttendance->Location = System::Drawing::Point(277, 0);
			this->panelAttendance->Name = L"panelAttendance";
			this->panelAttendance->Size = System::Drawing::Size(964, 849);
			this->panelAttendance->TabIndex = 5;
			// 
			// panelTimetable
			// 
			this->panelTimetable->BackColor = System::Drawing::Color::Crimson;
			this->panelTimetable->Location = System::Drawing::Point(277, 0);
			this->panelTimetable->Name = L"panelTimetable";
			this->panelTimetable->Size = System::Drawing::Size(964, 849);
			this->panelTimetable->TabIndex = 6;
			// 
			// panelTranscript
			// 
			this->panelTranscript->BackColor = System::Drawing::Color::Cyan;
			this->panelTranscript->Location = System::Drawing::Point(277, 0);
			this->panelTranscript->Name = L"panelTranscript";
			this->panelTranscript->Size = System::Drawing::Size(964, 849);
			this->panelTranscript->TabIndex = 7;
			// 
			// panelGradeChange
			// 
			this->panelGradeChange->BackColor = System::Drawing::Color::DarkBlue;
			this->panelGradeChange->Location = System::Drawing::Point(277, 0);
			this->panelGradeChange->Name = L"panelGradeChange";
			this->panelGradeChange->Size = System::Drawing::Size(964, 849);
			this->panelGradeChange->TabIndex = 9;
			this->panelGradeChange->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PortalForm::panelGradeChange_Paint);
			// 
			// PortalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1241, 849);
			this->Controls->Add(this->panelGradeChange);
			this->Controls->Add(this->panelTranscript);
			this->Controls->Add(this->panelTimetable);
			this->Controls->Add(this->panelAttendance);
			this->Controls->Add(this->panelGrades);
			this->Controls->Add(this->panelCourseReg);
			this->Controls->Add(this->panelPersonalInfo);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"PortalForm";
			this->Text = L"Student Portal";
			this->Load += gcnew System::EventHandler(this, &PortalForm::PortalForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonPersonalInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = true;
		panelCourseReg->Visible = false;
		panelGrades->Visible = false;
		panelAttendance->Visible = false;
		panelTimetable->Visible = false;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = false;
	}
	private: System::Void buttonCourseReg_Click(System::Object^ sender, System::EventArgs^ e) {
		
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = true;
		panelGrades->Visible = false;
		panelAttendance->Visible = false;
		panelTimetable->Visible = false;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = false;
		panelCourseReg->BringToFront();
	}
	private: System::Void buttonGrades_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = false;
		panelGrades->Visible = true;
		panelAttendance->Visible = false;
		panelTimetable->Visible = false;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = false;
		panelGrades->BringToFront();
	}
	private: System::Void buttonAttendance_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = false;
		panelGrades->Visible = false;
		panelAttendance->Visible = true;
		panelTimetable->Visible = false;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = false;
		panelAttendance->BringToFront();
	}
	private: System::Void buttonTimetable_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = false;
		panelGrades->Visible = false;
		panelAttendance->Visible = false;
		panelTimetable->Visible = true;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = false;
		panelTimetable->BringToFront();
	}
	private: System::Void buttonTranscript_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = false;
		panelGrades->Visible = false;
		panelAttendance->Visible = false;
		panelTimetable->Visible = false;
		panelTranscript->Visible = true;
		panelGradeChange->Visible = false;
		panelTranscript->BringToFront();
	}
	private: System::Void buttonGradeChange_Click(System::Object^ sender, System::EventArgs^ e) {
		panelPersonalInfo->Visible = false;
		panelCourseReg->Visible = false;
		panelGrades->Visible = false;
		panelAttendance->Visible = false;
		panelTimetable->Visible = false;
		panelTranscript->Visible = false;
		panelGradeChange->Visible = true;
		panelGradeChange->BringToFront();
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panelGradeChange_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PortalForm_Load(System::Object^ sender, System::EventArgs^ e) {

	panelPersonalInfo->Visible = false;
	panelCourseReg->Visible = false;
	panelGrades->Visible = false;
	panelAttendance->Visible = false;
	panelTimetable->Visible = false;
	panelTranscript->Visible = false;
	panelGradeChange->Visible = false;

	// Show only Personal Info panel
	panelPersonalInfo->Visible = true;
	panelPersonalInfo->BringToFront();
}
};
}

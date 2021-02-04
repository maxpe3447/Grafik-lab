#pragma once
#include "Fizika.h"

//#define time_error

namespace Grafiklab {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(12, 36);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Grafik";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1046, 577);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1064, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(273, 274);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 61);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Вариант 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вариант 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выбор варианта";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(2024, 57);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(34, 52);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click_1);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(34, 28);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1349, 618);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		typedef Phizics::Fizika Phiz;

		const int T_max = 5; // numbers of periods

	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	float error_time(float k) {
		float end = (k * 1000) * 0.3;
		float start = (k * 1000) * 0.05;
		int result = (std::rand() % (int(end) - int(start)) + int(start));
		return /*k +*/ result / 1000.0;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Grafik"]->Points->Clear(); //Series 1
	chart1->Titles->Clear();
	chart1->Titles->Add(L"Вариант 1");

#ifdef DEBUG_XY
	system("cls");
#endif // DEBUG_XY

	Phizics::Fizika obj;

#ifdef DEBUG_XY
	std::cout << "Variant 1" << std::endl;
	std::cout << "X\tY\t\tError\n";
#endif // DEBUG_XY


	float k{};
	float k_{};
	for (size_t i = 1; i <= T_max; i++) { //number of periods(5)

		for (k; k < 0.1 * i; k += float(0.02)) {

#ifdef time_error
			if (k)
				k_ = error_time(k);
#endif // time_error

			obj.for_rand();
			obj.set_t(T_max * k+k_);
			obj.set_code(Phiz::TASK_1);

			double y = obj.Y_U_calc();

			chart1->Series["Grafik"]->Points->AddXY(k+k_, y);

#ifdef DEBUG_XY
			std::cout << k+k_ << "\t" << y<< std::setw(4) <<"\t" << k_ << std::endl;
#endif // DEBUG_XY

		}

#ifdef DEBUG_XY
		std::cout << k_+k << '\t' << i << '\n' << "<--------->\n";
#endif // DEBUG_XY

	}

#ifdef DEBUG_XY
	std::cout << "<=========>";
#endif // DEBUG_XY

	chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = 0.04;	//additional line by X
	chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = 0.5;	//additional line by Y
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	chart1->Series["Grafik"]->Points->Clear();//Series1
	chart1->Titles->Clear();
	chart1->Titles->Add(L"Вариант 2");

#ifdef DEBUG_XY
	system("cls");
#endif // DEBUG_XY

	Phizics::Fizika obj;

#ifdef DEBUG_XY
	std::cout << "Variant 2" << std::endl;
	std::cout << "X\tY\n";
#endif // DEBUG_XY

	chart1->Series["Grafik"];

	float k{};

	for (size_t i = 1; i <= T_max; i++) { //number of periods(5)

		for (k; k < 0.1 * i; k += float(0.02)) {
			obj.for_rand();
			obj.set_t(T_max * k);
			obj.set_code(Phiz::TASK_2);

			double y = obj.Y_U_calc();

			chart1->Series["Grafik"]->Points->AddXY(k, y);

#ifdef DEBUG_XY
			std::cout << k << "\t" << y << std::endl;
#endif // DEBUG_XY

		}

#ifdef DEBUG_XY
		std::cout << "<--------->\n";
#endif // DEBUG_XY

	}

#ifdef DEBUG_XY
	std::cout << "<=========>";
#endif // DEBUG_XY

	chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = 0.04;	//additional line by X
	chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = 0.5;	//additional line by Y
}

private: System::Void toolStripButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	(gcnew System::Diagnostics::Process())->Start("https://github.com/maxpe3447");
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
};
}

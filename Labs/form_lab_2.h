#pragma once
#include <vector>

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для form_lab_2
	/// </summary>
	public ref class form_lab_2 : public System::Windows::Forms::Form
	{
	public:
		form_lab_2(void)
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
		~form_lab_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::PictureBox^ bp_task;
	private: System::Windows::Forms::Label^ lbl_arraylen;


	private: System::Windows::Forms::TextBox^ tb_arraylen;
	private: System::Windows::Forms::TextBox^ tb_minvalue;
	private: System::Windows::Forms::Label^ lbl_minvalue;



	private: System::Windows::Forms::TextBox^ tb_maxvalue;
	private: System::Windows::Forms::Label^ lbl_maxvalue;


	private: System::Windows::Forms::Button^ btn_generate;
	private: System::Windows::Forms::Button^ btn_write;
	private: System::Windows::Forms::Button^ brn_solve;



	private: System::Windows::Forms::TextBox^ tb_startarray;
	private: System::Windows::Forms::TextBox^ tb_answer;



	private: System::Windows::Forms::Label^ lbl_startarray;
	private: System::Windows::Forms::Label^ lbl_answer;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form_lab_2::typeid));
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->bp_task = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_arraylen = (gcnew System::Windows::Forms::Label());
			this->tb_arraylen = (gcnew System::Windows::Forms::TextBox());
			this->tb_minvalue = (gcnew System::Windows::Forms::TextBox());
			this->lbl_minvalue = (gcnew System::Windows::Forms::Label());
			this->tb_maxvalue = (gcnew System::Windows::Forms::TextBox());
			this->lbl_maxvalue = (gcnew System::Windows::Forms::Label());
			this->btn_generate = (gcnew System::Windows::Forms::Button());
			this->btn_write = (gcnew System::Windows::Forms::Button());
			this->brn_solve = (gcnew System::Windows::Forms::Button());
			this->tb_startarray = (gcnew System::Windows::Forms::TextBox());
			this->tb_answer = (gcnew System::Windows::Forms::TextBox());
			this->lbl_startarray = (gcnew System::Windows::Forms::Label());
			this->lbl_answer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bp_task))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(12, 506);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(142, 23);
			this->btn_back->TabIndex = 0;
			this->btn_back->Text = L"Вернуться на гланую";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &form_lab_2::btn_back_Click);
			// 
			// bp_task
			// 
			this->bp_task->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bp_task.Image")));
			this->bp_task->Location = System::Drawing::Point(12, 12);
			this->bp_task->Name = L"bp_task";
			this->bp_task->Size = System::Drawing::Size(512, 135);
			this->bp_task->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bp_task->TabIndex = 1;
			this->bp_task->TabStop = false;
			// 
			// lbl_arraylen
			// 
			this->lbl_arraylen->AutoSize = true;
			this->lbl_arraylen->Location = System::Drawing::Point(14, 168);
			this->lbl_arraylen->Name = L"lbl_arraylen";
			this->lbl_arraylen->Size = System::Drawing::Size(124, 13);
			this->lbl_arraylen->TabIndex = 2;
			this->lbl_arraylen->Text = L"Количество элементов";
			// 
			// tb_arraylen
			// 
			this->tb_arraylen->Location = System::Drawing::Point(154, 165);
			this->tb_arraylen->Name = L"tb_arraylen";
			this->tb_arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_arraylen->TabIndex = 3;
			this->tb_arraylen->Text = L"10";
			this->tb_arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_2::tb_arraylen_KeyPress);
			// 
			// tb_minvalue
			// 
			this->tb_minvalue->Location = System::Drawing::Point(154, 196);
			this->tb_minvalue->Name = L"tb_minvalue";
			this->tb_minvalue->Size = System::Drawing::Size(56, 20);
			this->tb_minvalue->TabIndex = 5;
			this->tb_minvalue->Text = L"-100";
			this->tb_minvalue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_2::tb_minvalue_KeyPress);
			// 
			// lbl_minvalue
			// 
			this->lbl_minvalue->AutoSize = true;
			this->lbl_minvalue->Location = System::Drawing::Point(14, 199);
			this->lbl_minvalue->Name = L"lbl_minvalue";
			this->lbl_minvalue->Size = System::Drawing::Size(128, 13);
			this->lbl_minvalue->TabIndex = 4;
			this->lbl_minvalue->Text = L"Минимальное значение";
			// 
			// tb_maxvalue
			// 
			this->tb_maxvalue->Location = System::Drawing::Point(154, 227);
			this->tb_maxvalue->Name = L"tb_maxvalue";
			this->tb_maxvalue->Size = System::Drawing::Size(56, 20);
			this->tb_maxvalue->TabIndex = 7;
			this->tb_maxvalue->Text = L"100";
			this->tb_maxvalue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_2::tb_maxvalue_KeyPress);
			// 
			// lbl_maxvalue
			// 
			this->lbl_maxvalue->AutoSize = true;
			this->lbl_maxvalue->Location = System::Drawing::Point(14, 230);
			this->lbl_maxvalue->Name = L"lbl_maxvalue";
			this->lbl_maxvalue->Size = System::Drawing::Size(134, 13);
			this->lbl_maxvalue->TabIndex = 6;
			this->lbl_maxvalue->Text = L"Максимальное значение";
			// 
			// btn_generate
			// 
			this->btn_generate->BackColor = System::Drawing::Color::PaleGreen;
			this->btn_generate->Location = System::Drawing::Point(258, 163);
			this->btn_generate->Name = L"btn_generate";
			this->btn_generate->Size = System::Drawing::Size(111, 23);
			this->btn_generate->TabIndex = 8;
			this->btn_generate->Text = L"Сгенерировать";
			this->btn_generate->UseVisualStyleBackColor = false;
			this->btn_generate->Click += gcnew System::EventHandler(this, &form_lab_2::btn_generate_Click);
			// 
			// btn_write
			// 
			this->btn_write->BackColor = System::Drawing::Color::Silver;
			this->btn_write->Location = System::Drawing::Point(430, 163);
			this->btn_write->Name = L"btn_write";
			this->btn_write->Size = System::Drawing::Size(75, 23);
			this->btn_write->TabIndex = 9;
			this->btn_write->Text = L"Вписать";
			this->btn_write->UseVisualStyleBackColor = false;
			this->btn_write->Click += gcnew System::EventHandler(this, &form_lab_2::btn_write_Click);
			// 
			// brn_solve
			// 
			this->brn_solve->Location = System::Drawing::Point(351, 220);
			this->brn_solve->Name = L"brn_solve";
			this->brn_solve->Size = System::Drawing::Size(75, 23);
			this->brn_solve->TabIndex = 10;
			this->brn_solve->Text = L"Обработать";
			this->brn_solve->UseVisualStyleBackColor = true;
			this->brn_solve->Click += gcnew System::EventHandler(this, &form_lab_2::brn_solve_Click);
			// 
			// tb_startarray
			// 
			this->tb_startarray->Enabled = false;
			this->tb_startarray->Location = System::Drawing::Point(12, 293);
			this->tb_startarray->Multiline = true;
			this->tb_startarray->Name = L"tb_startarray";
			this->tb_startarray->Size = System::Drawing::Size(232, 193);
			this->tb_startarray->TabIndex = 11;
			this->tb_startarray->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_2::tb_startarray_KeyPress);
			// 
			// tb_answer
			// 
			this->tb_answer->Location = System::Drawing::Point(258, 293);
			this->tb_answer->Multiline = true;
			this->tb_answer->Name = L"tb_answer";
			this->tb_answer->Size = System::Drawing::Size(266, 193);
			this->tb_answer->TabIndex = 12;
			// 
			// lbl_startarray
			// 
			this->lbl_startarray->AutoSize = true;
			this->lbl_startarray->Location = System::Drawing::Point(14, 265);
			this->lbl_startarray->Name = L"lbl_startarray";
			this->lbl_startarray->Size = System::Drawing::Size(140, 13);
			this->lbl_startarray->TabIndex = 13;
			this->lbl_startarray->Text = L"Сгенерированный массив";
			// 
			// lbl_answer
			// 
			this->lbl_answer->AutoSize = true;
			this->lbl_answer->Location = System::Drawing::Point(255, 265);
			this->lbl_answer->Name = L"lbl_answer";
			this->lbl_answer->Size = System::Drawing::Size(161, 13);
			this->lbl_answer->TabIndex = 14;
			this->lbl_answer->Text = L"Результат работы программы";
			// 
			// form_lab_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 541);
			this->Controls->Add(this->lbl_answer);
			this->Controls->Add(this->lbl_startarray);
			this->Controls->Add(this->tb_answer);
			this->Controls->Add(this->tb_startarray);
			this->Controls->Add(this->brn_solve);
			this->Controls->Add(this->btn_write);
			this->Controls->Add(this->btn_generate);
			this->Controls->Add(this->tb_maxvalue);
			this->Controls->Add(this->lbl_maxvalue);
			this->Controls->Add(this->tb_minvalue);
			this->Controls->Add(this->lbl_minvalue);
			this->Controls->Add(this->tb_arraylen);
			this->Controls->Add(this->lbl_arraylen);
			this->Controls->Add(this->bp_task);
			this->Controls->Add(this->btn_back);
			this->Name = L"form_lab_2";
			this->Text = L"Лабораторная работа 2";
			//this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &form_lab_2::form_lab_2_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bp_task))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}/*
	private: System::Void form_lab_2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}*/
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_generate_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_generate->BackColor = System::Drawing::Color::PaleGreen;
		btn_write->BackColor = System::Drawing::Color::Silver;
		tb_startarray->Enabled = false;
		tb_startarray->Text = "";
		int arraylen, minvalue, maxvalue;
		arraylen = LabsDLL::Class1::Vvod(tb_arraylen);
		minvalue = LabsDLL::Class1::Vvod(tb_minvalue);
		maxvalue = LabsDLL::Class1::Vvod(tb_maxvalue);
		vector<int> array;
		for (int i = 0; i < arraylen; i++) {
			int newval = minvalue + (rand() % (maxvalue - minvalue));
			array.push_back(newval);
			tb_startarray->Text += Convert::ToString(newval) + " ";
		}

	}
	private: System::Void btn_write_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_write->BackColor = System::Drawing::Color::PaleGreen;
		btn_generate->BackColor = System::Drawing::Color::Silver;
		tb_startarray->Enabled = true;
	}
	private: System::Void brn_solve_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<int> array;
		if (tb_startarray->Text != "")
		{
			tb_startarray->Text = tb_startarray->Text->Replace('.', ',')->Replace('  ', ' ')->Replace('- ', '-');

			String^ laststr = "";
			for (int i = 0; i < tb_startarray->Text->Length; i++) {
				if (tb_startarray->Text[i] == ' ' || i == tb_startarray->Text->Length - 1) {
					array.push_back(Convert::ToInt32(laststr));
					laststr = "";
				}
				else {
					laststr += tb_startarray->Text[i];
				}
			}
		}
		else {
			tb_startarray->Text = "0";
			array.push_back(0);
		}

		int maxchet = LabsDLL::Class1::Vvod(tb_minvalue);
		int maxchetind = 0;
		vector<int> resarray;
		for (int i = 0; i < array.size(); i++) {
			if (array[i] % 2 == 0 && array[i] > maxchet) {
				maxchet = array[i];
				maxchetind = i;
			}
		}

		for (int i = 0; i < array.size(); i++) {
			if (array[i] < maxchet) {
				resarray.push_back(i);
			}
		}


		String^ msg = "";
		msg += "Индекс максимального четного элемента (" + Convert::ToString(maxchet) + "): " + Convert::ToString(maxchetind) + Environment::NewLine;
		msg += "Индексы элементов, меньших чем " + Convert::ToString(maxchet) + ": " + Environment::NewLine;

		for (int i = 0; i < resarray.size(); i++) {
			msg += Convert::ToString(resarray[i]) + " ";
		}

		tb_answer->Text = msg;
	}
	private: System::Void tb_arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_minvalue_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_maxvalue_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_startarray_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == '-') || (e->KeyChar == ' ') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	};
}
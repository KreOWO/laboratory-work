#pragma once

#include "form_lab_1.h"
#include "form_lab_2.h"

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для form_main
	/// </summary>
	public ref class form_main : public System::Windows::Forms::Form
	{
	public:
		form_main(void)
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
		~form_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_lab_1;
	private: System::Windows::Forms::Button^ btn_lab_2;
	private: System::Windows::Forms::Button^ btn_lab_3;
	private: System::Windows::Forms::Button^ btn_lab_4;
	private: System::Windows::Forms::Button^ btn_lab_5;
	private: System::Windows::Forms::Label^ lbl_first_text;
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
			this->btn_lab_1 = (gcnew System::Windows::Forms::Button());
			this->btn_lab_2 = (gcnew System::Windows::Forms::Button());
			this->btn_lab_3 = (gcnew System::Windows::Forms::Button());
			this->btn_lab_4 = (gcnew System::Windows::Forms::Button());
			this->btn_lab_5 = (gcnew System::Windows::Forms::Button());
			this->lbl_first_text = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_lab_1
			// 
			this->btn_lab_1->Location = System::Drawing::Point(215, 74);
			this->btn_lab_1->Name = L"btn_lab_1";
			this->btn_lab_1->Size = System::Drawing::Size(154, 23);
			this->btn_lab_1->TabIndex = 0;
			this->btn_lab_1->Text = L"Лабораторная работа 1";
			this->btn_lab_1->UseVisualStyleBackColor = true;
			this->btn_lab_1->Click += gcnew System::EventHandler(this, &form_main::btn_lab_1_Click);
			// 
			// btn_lab_2
			// 
			this->btn_lab_2->Location = System::Drawing::Point(215, 103);
			this->btn_lab_2->Name = L"btn_lab_2";
			this->btn_lab_2->Size = System::Drawing::Size(154, 23);
			this->btn_lab_2->TabIndex = 1;
			this->btn_lab_2->Text = L"Лабораторная работа 2";
			this->btn_lab_2->UseVisualStyleBackColor = true;
			this->btn_lab_2->Click += gcnew System::EventHandler(this, &form_main::btn_lab_2_Click);
			// 
			// btn_lab_3
			// 
			this->btn_lab_3->Location = System::Drawing::Point(215, 132);
			this->btn_lab_3->Name = L"btn_lab_3";
			this->btn_lab_3->Size = System::Drawing::Size(154, 23);
			this->btn_lab_3->TabIndex = 2;
			this->btn_lab_3->Text = L"Лабораторная работа 3";
			this->btn_lab_3->UseVisualStyleBackColor = true;
			// 
			// btn_lab_4
			// 
			this->btn_lab_4->Location = System::Drawing::Point(215, 161);
			this->btn_lab_4->Name = L"btn_lab_4";
			this->btn_lab_4->Size = System::Drawing::Size(154, 23);
			this->btn_lab_4->TabIndex = 3;
			this->btn_lab_4->Text = L"Лабораторная работа 4";
			this->btn_lab_4->UseVisualStyleBackColor = true;
			// 
			// btn_lab_5
			// 
			this->btn_lab_5->Location = System::Drawing::Point(215, 190);
			this->btn_lab_5->Name = L"btn_lab_5";
			this->btn_lab_5->Size = System::Drawing::Size(154, 23);
			this->btn_lab_5->TabIndex = 4;
			this->btn_lab_5->Text = L"Лабораторная работа 5";
			this->btn_lab_5->UseVisualStyleBackColor = true;
			// 
			// lbl_first_text
			// 
			this->lbl_first_text->AutoSize = true;
			this->lbl_first_text->Location = System::Drawing::Point(115, 36);
			this->lbl_first_text->Name = L"lbl_first_text";
			this->lbl_first_text->Size = System::Drawing::Size(366, 13);
			this->lbl_first_text->TabIndex = 5;
			this->lbl_first_text->Text = L"Нажмите на кнопку чтобы открыть окно нужной лабораторной работы";
			// 
			// form_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 261);
			this->Controls->Add(this->lbl_first_text);
			this->Controls->Add(this->btn_lab_5);
			this->Controls->Add(this->btn_lab_4);
			this->Controls->Add(this->btn_lab_3);
			this->Controls->Add(this->btn_lab_2);
			this->Controls->Add(this->btn_lab_1);
			this->Name = L"form_main";
			this->Text = L"form_main";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_lab_1_Click(System::Object^ sender, System::EventArgs^ e) {
		form_lab_1^ f = gcnew form_lab_1();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void btn_lab_2_Click(System::Object^ sender, System::EventArgs^ e) {
		form_lab_2^ f = gcnew form_lab_2();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
};
}

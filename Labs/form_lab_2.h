#pragma once
#include <cmath>

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(68, 119);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(142, 23);
			this->btn_back->TabIndex = 0;
			this->btn_back->Text = L"Вернуться на гланую";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &form_lab_2::btn_back_Click);
			// 
			// form_lab_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btn_back);
			this->Name = L"form_lab_2";
			this->Text = L"form_lab_2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	};
}

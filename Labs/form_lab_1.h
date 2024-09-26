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
	/// ������ ��� form_lab_1
	/// </summary>
	public ref class form_lab_1 : public System::Windows::Forms::Form
	{
	public:
		form_lab_1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~form_lab_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_return;
	private: System::Windows::Forms::Button^ btn_doit;
	private: System::Windows::Forms::Label^ lbl_task;
	private: System::Windows::Forms::Label^ lbl_a;
	private: System::Windows::Forms::TextBox^ tb_a;
	private: System::Windows::Forms::TextBox^ tb_b;
	private: System::Windows::Forms::Label^ lbl_b;
	private: System::Windows::Forms::TextBox^ tb_x;
	private: System::Windows::Forms::Label^ lbl_x;
	private: System::Windows::Forms::Label^ lbl_z;
	private: System::Windows::Forms::Label^ lbl_w;
	private: System::Windows::Forms::Label^ lbl_z_answer;
	private: System::Windows::Forms::Label^ lbl_w_answer;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_return = (gcnew System::Windows::Forms::Button());
			this->btn_doit = (gcnew System::Windows::Forms::Button());
			this->lbl_task = (gcnew System::Windows::Forms::Label());
			this->lbl_a = (gcnew System::Windows::Forms::Label());
			this->tb_a = (gcnew System::Windows::Forms::TextBox());
			this->tb_b = (gcnew System::Windows::Forms::TextBox());
			this->lbl_b = (gcnew System::Windows::Forms::Label());
			this->tb_x = (gcnew System::Windows::Forms::TextBox());
			this->lbl_x = (gcnew System::Windows::Forms::Label());
			this->lbl_z = (gcnew System::Windows::Forms::Label());
			this->lbl_w = (gcnew System::Windows::Forms::Label());
			this->lbl_z_answer = (gcnew System::Windows::Forms::Label());
			this->lbl_w_answer = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_return
			// 
			this->btn_return->Location = System::Drawing::Point(23, 213);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(146, 23);
			this->btn_return->TabIndex = 0;
			this->btn_return->Text = L"��������� �� �������";
			this->btn_return->UseVisualStyleBackColor = true;
			this->btn_return->Click += gcnew System::EventHandler(this, &form_lab_1::btn_back_Click);
			// 
			// btn_doit
			// 
			this->btn_doit->Location = System::Drawing::Point(152, 162);
			this->btn_doit->Name = L"btn_doit";
			this->btn_doit->Size = System::Drawing::Size(75, 23);
			this->btn_doit->TabIndex = 1;
			this->btn_doit->Text = L"��������� �� �������";
			this->btn_doit->UseVisualStyleBackColor = true;
			this->btn_doit->Click += gcnew System::EventHandler(this, &form_lab_1::btn_doit_Click);
			// 
			// lbl_task
			// 
			this->lbl_task->AutoSize = true;
			this->lbl_task->Location = System::Drawing::Point(34, 18);
			this->lbl_task->Name = L"lbl_task";
			this->lbl_task->Size = System::Drawing::Size(269, 13);
			this->lbl_task->TabIndex = 2;
			this->lbl_task->Text = L"������� �������� ����� ���������� �� � �������: ";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->Location = System::Drawing::Point(34, 52);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(22, 13);
			this->lbl_a->TabIndex = 3;
			this->lbl_a->Text = L"a =";
			// 
			// tb_a
			// 
			this->tb_a->Location = System::Drawing::Point(59, 49);
			this->tb_a->Name = L"tb_a";
			this->tb_a->Size = System::Drawing::Size(84, 20);
			this->tb_a->TabIndex = 4;
			this->tb_a->Text = L"0,5";
			// 
			// tb_b
			// 
			this->tb_b->Location = System::Drawing::Point(174, 49);
			this->tb_b->Name = L"tb_b";
			this->tb_b->Size = System::Drawing::Size(84, 20);
			this->tb_b->TabIndex = 6;
			this->tb_b->Text = L"3,1";
			// 
			// lbl_b
			// 
			this->lbl_b->AutoSize = true;
			this->lbl_b->Location = System::Drawing::Point(149, 52);
			this->lbl_b->Name = L"lbl_b";
			this->lbl_b->Size = System::Drawing::Size(22, 13);
			this->lbl_b->TabIndex = 5;
			this->lbl_b->Text = L"b =";
			// 
			// tb_x
			// 
			this->tb_x->Location = System::Drawing::Point(289, 49);
			this->tb_x->Name = L"tb_x";
			this->tb_x->Size = System::Drawing::Size(84, 20);
			this->tb_x->TabIndex = 8;
			this->tb_x->Text = L"1,414";
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(264, 52);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(21, 13);
			this->lbl_x->TabIndex = 7;
			this->lbl_x->Text = L"x =";
			// 
			// lbl_z
			// 
			this->lbl_z->AutoSize = true;
			this->lbl_z->Location = System::Drawing::Point(34, 88);
			this->lbl_z->Name = L"lbl_z";
			this->lbl_z->Size = System::Drawing::Size(228, 13);
			this->lbl_z->TabIndex = 9;
			this->lbl_z->Text = L"z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b)) = ";
			// 
			// lbl_w
			// 
			this->lbl_w->AutoSize = true;
			this->lbl_w->Location = System::Drawing::Point(34, 120);
			this->lbl_w->Name = L"lbl_w";
			this->lbl_w->Size = System::Drawing::Size(291, 13);
			this->lbl_w->TabIndex = 10;
			this->lbl_w->Text = L"w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2)) = ";
			// 
			// lbl_z_answer
			// 
			this->lbl_z_answer->AutoSize = true;
			this->lbl_z_answer->Location = System::Drawing::Point(258, 88);
			this->lbl_z_answer->Name = L"lbl_z_answer";
			this->lbl_z_answer->Size = System::Drawing::Size(37, 13);
			this->lbl_z_answer->TabIndex = 11;
			this->lbl_z_answer->Text = L"";
			// 
			// lbl_w_answer
			// 
			this->lbl_w_answer->AutoSize = true;
			this->lbl_w_answer->Location = System::Drawing::Point(321, 120);
			this->lbl_w_answer->Name = L"lbl_w_answer";
			this->lbl_w_answer->Size = System::Drawing::Size(40, 13);
			this->lbl_w_answer->TabIndex = 12;
			this->lbl_w_answer->Text = L"";
			// 
			// form_lab_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 261);
			this->Controls->Add(this->lbl_w_answer);
			this->Controls->Add(this->lbl_z_answer);
			this->Controls->Add(this->lbl_w);
			this->Controls->Add(this->lbl_z);
			this->Controls->Add(this->tb_x);
			this->Controls->Add(this->lbl_x);
			this->Controls->Add(this->tb_b);
			this->Controls->Add(this->lbl_b);
			this->Controls->Add(this->tb_a);
			this->Controls->Add(this->lbl_a);
			this->Controls->Add(this->lbl_task);
			this->Controls->Add(this->btn_doit);
			this->Controls->Add(this->btn_return);
			this->Name = L"form_lab_1";
			this->Text = L"form_lab_1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void btn_doit_Click(System::Object^ sender, System::EventArgs^ e) {
		float a, b, x;
		try  //������ ����� ��������� ����������
		{
			a = Convert::ToDouble(tb_a->Text->Replace('.', ','));
			b = Convert::ToDouble(tb_b->Text->Replace('.', ','));
			x = Convert::ToDouble(tb_x->Text->Replace('.', ','));
			double z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b));
			double w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
			//����� ������
			lbl_z_answer->Text = Convert::ToString(z);
			lbl_w_answer->Text = Convert::ToString(w);
		}
		catch (System::FormatException^ e)  //������������ ������ ����������
		{
			MessageBox::Show("������ ��� ����� ������. ������� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
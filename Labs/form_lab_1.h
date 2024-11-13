#pragma once
#include <cmath>

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LabsDLL;

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
	private: System::Windows::Forms::PictureBox^ pb_task;

	private: System::Windows::Forms::TextBox^ tb_all_results;












	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form_lab_1::typeid));
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
			this->pb_task = (gcnew System::Windows::Forms::PictureBox());
			this->tb_all_results = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_task))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_return
			// 
			this->btn_return->Location = System::Drawing::Point(12, 308);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(146, 23);
			this->btn_return->TabIndex = 0;
			this->btn_return->Text = L"��������� �� �������";
			this->btn_return->UseVisualStyleBackColor = true;
			this->btn_return->Click += gcnew System::EventHandler(this, &form_lab_1::btn_back_Click);
			// 
			// btn_doit
			// 
			this->btn_doit->Location = System::Drawing::Point(422, 155);
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
			this->lbl_task->Location = System::Drawing::Point(12, 18);
			this->lbl_task->Name = L"lbl_task";
			this->lbl_task->Size = System::Drawing::Size(269, 13);
			this->lbl_task->TabIndex = 2;
			this->lbl_task->Text = L"������� �������� ����� ���������� �� � �������: ";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->Location = System::Drawing::Point(24, 161);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(22, 13);
			this->lbl_a->TabIndex = 3;
			this->lbl_a->Text = L"a =";
			// 
			// tb_a
			// 
			this->tb_a->Location = System::Drawing::Point(49, 158);
			this->tb_a->Name = L"tb_a";
			this->tb_a->Size = System::Drawing::Size(84, 20);
			this->tb_a->TabIndex = 4;
			this->tb_a->Text = L"0,5";
			this->tb_a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_1::tb_a_KeyPress);
			// 
			// tb_b
			// 
			this->tb_b->Location = System::Drawing::Point(164, 158);
			this->tb_b->Name = L"tb_b";
			this->tb_b->Size = System::Drawing::Size(84, 20);
			this->tb_b->TabIndex = 6;
			this->tb_b->Text = L"3,1";
			this->tb_b->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_1::tb_b_KeyPress);
			// 
			// lbl_b
			// 
			this->lbl_b->AutoSize = true;
			this->lbl_b->Location = System::Drawing::Point(139, 161);
			this->lbl_b->Name = L"lbl_b";
			this->lbl_b->Size = System::Drawing::Size(22, 13);
			this->lbl_b->TabIndex = 5;
			this->lbl_b->Text = L"b =";
			// 
			// tb_x
			// 
			this->tb_x->Location = System::Drawing::Point(279, 158);
			this->tb_x->Name = L"tb_x";
			this->tb_x->Size = System::Drawing::Size(84, 20);
			this->tb_x->TabIndex = 8;
			this->tb_x->Text = L"1,414";
			this->tb_x->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_1::tb_x_KeyPress);
			// 
			// lbl_x
			// 
			this->lbl_x->AutoSize = true;
			this->lbl_x->Location = System::Drawing::Point(254, 161);
			this->lbl_x->Name = L"lbl_x";
			this->lbl_x->Size = System::Drawing::Size(21, 13);
			this->lbl_x->TabIndex = 7;
			this->lbl_x->Text = L"x =";
			// 
			// lbl_z
			// 
			this->lbl_z->AutoSize = true;
			this->lbl_z->Location = System::Drawing::Point(25, 201);
			this->lbl_z->Name = L"lbl_z";
			this->lbl_z->Size = System::Drawing::Size(21, 13);
			this->lbl_z->TabIndex = 9;
			this->lbl_z->Text = L"z =";
			// 
			// lbl_w
			// 
			this->lbl_w->AutoSize = true;
			this->lbl_w->Location = System::Drawing::Point(25, 233);
			this->lbl_w->Name = L"lbl_w";
			this->lbl_w->Size = System::Drawing::Size(24, 13);
			this->lbl_w->TabIndex = 10;
			this->lbl_w->Text = L"w =";
			// 
			// lbl_z_answer
			// 
			this->lbl_z_answer->AutoSize = true;
			this->lbl_z_answer->Location = System::Drawing::Point(52, 201);
			this->lbl_z_answer->Name = L"lbl_z_answer";
			this->lbl_z_answer->Size = System::Drawing::Size(0, 13);
			this->lbl_z_answer->TabIndex = 11;
			// 
			// lbl_w_answer
			// 
			this->lbl_w_answer->AutoSize = true;
			this->lbl_w_answer->Location = System::Drawing::Point(55, 233);
			this->lbl_w_answer->Name = L"lbl_w_answer";
			this->lbl_w_answer->Size = System::Drawing::Size(0, 13);
			this->lbl_w_answer->TabIndex = 12;
			// 
			// pb_task
			// 
			this->pb_task->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_task.Image")));
			this->pb_task->Location = System::Drawing::Point(12, 52);
			this->pb_task->Name = L"pb_task";
			this->pb_task->Size = System::Drawing::Size(540, 83);
			this->pb_task->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb_task->TabIndex = 13;
			this->pb_task->TabStop = false;
			// 
			// tb_all_results
			// 
			this->tb_all_results->AcceptsTab = true;
			this->tb_all_results->Enabled = false;
			this->tb_all_results->Location = System::Drawing::Point(187, 201);
			this->tb_all_results->Multiline = true;
			this->tb_all_results->Name = L"tb_all_results";
			this->tb_all_results->Size = System::Drawing::Size(365, 119);
			this->tb_all_results->TabIndex = 14;
			this->tb_all_results->WordWrap = false;
			// 
			// form_lab_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 343);
			this->Controls->Add(this->tb_all_results);
			this->Controls->Add(this->pb_task);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������ ������ 1";
			//this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &form_lab_1::form_lab_1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_task))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void btn_doit_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, x, z, w;
		try  //������ ����� ��������� ����������
		{
			//a = Convert::ToDouble(tb_a->Text->Replace('.', ','));
			//b = Convert::ToDouble(tb_b->Text->Replace('.', ','));
			//x = Convert::ToDouble(tb_x->Text->Replace('.', ','));
			a = LabsDLL::Class1::Vvod(tb_a);
			b = LabsDLL::Class1::Vvod(tb_b);
			x = LabsDLL::Class1::Vvod(tb_x);
			//double z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b));
			//double w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
			//����� ������
			z = 0;
			w = 0;
			LabsDLL::Class1::Solve12(&z, &w, a, b, x);
			LabsDLL::Class1::Vivod(z, lbl_z_answer);
			LabsDLL::Class1::Vivod(w, lbl_w_answer);
			//lbl_z_answer->Text = Convert::ToString(z);
			//lbl_w_answer->Text = Convert::ToString(w);


			int intz = floor(z);
			double doublez = z - intz;
			String^ msg = "";
			msg += "����� ����� z = " + Convert::ToString(intz) + Environment::NewLine;
			msg += "������� ����� z = " + Convert::ToString(doublez) + Environment::NewLine;
			msg += "���������� ����� z = " + Convert::ToString(ceil(z)) + Environment::NewLine;
			msg += "���������� ���� z = " + Convert::ToString(floor(z)) + Environment::NewLine;
			msg += "���������� ��������� ����� ����� = " + Convert::ToString(++intz) + Environment::NewLine;
			msg += "����������� ��������� ������� ����� = " + Convert::ToString(doublez++) + Environment::NewLine;
			msg += "�������� ����� ����� ����� ���������� = " + Convert::ToString(intz) + Environment::NewLine;
			msg += "�������� ������� ����� ����� ���������� = " + Convert::ToString(doublez);
			tb_all_results->Text = msg;

		}
		catch (System::FormatException^ ex)  //������������ ������ ����������
		{
			MessageBox::Show("������ ��� ����� ������. ������� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void tb_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_b_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_x_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}/*
	private: System::Void form_lab_1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}*/
	};
}
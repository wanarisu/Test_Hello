#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormOption �̊T�v
	/// </summary>
	public ref class FormOption : public System::Windows::Forms::Form
	{
	public:
		FormOption(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~FormOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;
	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�T�C�R���̂��낪��Ԋu�i�~���b�j";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 20);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(14, 66);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 2;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormOption::ButtonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(197, 66);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"�L�����Z��";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormOption::ButtonCancel_Click);
			// 
			// FormOption
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(284, 111);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormOption";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"���ݒ�";
			this->Load += gcnew System::EventHandler(this, &FormOption::FormOption_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			// �t�B�[���h
			int _diceTimer;
	public:
		// �v���p�e�B
		property int DiceTimer {
			int get() {
				return _diceTimer;
			}
			void set(int _newDiceTimer) {
				if (_newDiceTimer < 1) {
					throw gcnew Exception("Interval��1�ȏ��ݒ肵�Ă��������B");
				}
				_diceTimer = _newDiceTimer;
			}
		}
	private: System::Void FormOption_Load(System::Object^ sender, System::EventArgs^ e) {
		//�^�C�}�[�̐ݒ���e�L�X�g�{�b�N�X�ɕ\��
		this->textBox1->Text = Convert::ToString(this->DiceTimer);
	}
private: System::Void ButtonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		//�e�L�X�g�𐔒l�ɕϊ����ăv���p�e�B�ɐݒ�
		this->DiceTimer = Convert::ToInt32(this->textBox1->Text);
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("���������l��ݒ肵�Ă�������",
			"����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
	}
	finally{
		System::Diagnostics::Debug::WriteLine("------");
	}
}
private: System::Void ButtonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

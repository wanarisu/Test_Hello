#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormScore �̊T�v
	/// </summary>
	public ref class FormScore : public System::Windows::Forms::Form
	{
	public:
		FormScore(void)
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
		~FormScore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::Button^ buttonClose;
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
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�n�C�X�R�A";
			// 
			// labelScore
			// 
			this->labelScore->Location = System::Drawing::Point(189, 26);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(35, 12);
			this->labelScore->TabIndex = 0;
			this->labelScore->Text = L"0�_";
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(31, 86);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 23);
			this->buttonReset->TabIndex = 1;
			this->buttonReset->Text = L"���Z�b�g";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &FormScore::ButtonReset_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonClose->Location = System::Drawing::Point(165, 86);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 2;
			this->buttonClose->Text = L"����";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &FormScore::ButtonClose_Click);
			// 
			// FormScore
			// 
			this->AcceptButton = this->buttonClose;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonClose;
			this->ClientSize = System::Drawing::Size(284, 161);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormScore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"�n�C�X�R�A";
			this->Load += gcnew System::EventHandler(this, &FormScore::FormScore_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormScore_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			//�X�R�A�L�^�p��Dice.dat���J��
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
			//Dice.dat�ɒ��g������ꍇ�A���̒l�����x���ɃZ�b�g
			if (!reader->EndOfStream) {
				this->labelScore->Text = reader->ReadToEnd() + "�_";
			}
			//Dice.dat�����
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g�t�@�C�����쐬
			System::IO::File::AppendAllText("./Dice.dat", "0");
			System::Diagnostics::Debug::WriteLine ("---�G���[���b�Z�[�W---\n" + ex->Message);
		}
	}
private: System::Void ButtonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ButtonReset_Click(System::Object^ sender, System::EventArgs^ e) {
	//Dice.dat���J���i���݂��Ȃ��ꍇ�͐V�K�쐬�j
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
	//�l�Ƃ���0���Z�b�g
	writer->Write("0");
	//Dice.dat�����
	writer->Close();
	//�t�H�[����̕\�����u0�_�v�ɕύX
	this->labelScore->Text = "0�_";
}
};
}

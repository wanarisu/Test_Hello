#pragma once
#include "Dice.h"
#include "FormOption.h"
#include "FormScore.h"

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;

	/// <summary>
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButtonKisu;
	private: System::Windows::Forms::RadioButton^ radioButtonGusu;
	private: System::Windows::Forms::PictureBox^ pictureDice1;
	private: System::Windows::Forms::PictureBox^ pictureDice2;
	private: System::Windows::Forms::PictureBox^ pictureDice3;
	private: System::Windows::Forms::PictureBox^ pictureDice4;
	private: System::Windows::Forms::PictureBox^ pictureDice5;
	private: System::Windows::Forms::PictureBox^ pictureDice6;
	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::PictureBox^ pictureWin;
	private: System::Windows::Forms::PictureBox^ pictureLose;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �Q�[��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ResetToollStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���̑�OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EnvToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ScoreToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButtonKisu = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGusu = (gcnew System::Windows::Forms::RadioButton());
			this->pictureDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice6 = (gcnew System::Windows::Forms::PictureBox());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->pictureWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureLose = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�Q�[��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ResetToollStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���̑�OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnvToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LemonChiffon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::Color::DarkBlue;
			this->label1->Location = System::Drawing::Point(41, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���^�V�Ə������悤�I\r\n�A�������œ_��2�{����";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->ForeColor = System::Drawing::Color::Brown;
			this->button1->Location = System::Drawing::Point(41, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�X�^�[�g";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// radioButtonKisu
			// 
			this->radioButtonKisu->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButtonKisu->AutoSize = true;
			this->radioButtonKisu->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButtonKisu->Location = System::Drawing::Point(41, 110);
			this->radioButtonKisu->Name = L"radioButtonKisu";
			this->radioButtonKisu->Size = System::Drawing::Size(53, 22);
			this->radioButtonKisu->TabIndex = 2;
			this->radioButtonKisu->TabStop = true;
			this->radioButtonKisu->Text = L"���";
			this->radioButtonKisu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButtonKisu->UseVisualStyleBackColor = true;
			this->radioButtonKisu->Click += gcnew System::EventHandler(this, &MyForm::radio_Click);
			// 
			// radioButtonGusu
			// 
			this->radioButtonGusu->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButtonGusu->AutoSize = true;
			this->radioButtonGusu->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButtonGusu->Location = System::Drawing::Point(102, 110);
			this->radioButtonGusu->Name = L"radioButtonGusu";
			this->radioButtonGusu->Size = System::Drawing::Size(53, 22);
			this->radioButtonGusu->TabIndex = 3;
			this->radioButtonGusu->TabStop = true;
			this->radioButtonGusu->Text = L"������";
			this->radioButtonGusu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButtonGusu->UseVisualStyleBackColor = true;
			this->radioButtonGusu->Click += gcnew System::EventHandler(this, &MyForm::radio_Click);
			// 
			// pictureDice1
			// 
			this->pictureDice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice1.Image")));
			this->pictureDice1->Location = System::Drawing::Point(331, 65);
			this->pictureDice1->Name = L"pictureDice1";
			this->pictureDice1->Size = System::Drawing::Size(32, 34);
			this->pictureDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice1->TabIndex = 4;
			this->pictureDice1->TabStop = false;
			this->pictureDice1->Visible = false;
			// 
			// pictureDice2
			// 
			this->pictureDice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice2.Image")));
			this->pictureDice2->Location = System::Drawing::Point(331, 65);
			this->pictureDice2->Name = L"pictureDice2";
			this->pictureDice2->Size = System::Drawing::Size(32, 34);
			this->pictureDice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice2->TabIndex = 5;
			this->pictureDice2->TabStop = false;
			this->pictureDice2->Visible = false;
			// 
			// pictureDice3
			// 
			this->pictureDice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice3.Image")));
			this->pictureDice3->Location = System::Drawing::Point(331, 65);
			this->pictureDice3->Name = L"pictureDice3";
			this->pictureDice3->Size = System::Drawing::Size(32, 34);
			this->pictureDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice3->TabIndex = 6;
			this->pictureDice3->TabStop = false;
			this->pictureDice3->Visible = false;
			// 
			// pictureDice4
			// 
			this->pictureDice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice4.Image")));
			this->pictureDice4->Location = System::Drawing::Point(331, 65);
			this->pictureDice4->Name = L"pictureDice4";
			this->pictureDice4->Size = System::Drawing::Size(32, 34);
			this->pictureDice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice4->TabIndex = 7;
			this->pictureDice4->TabStop = false;
			this->pictureDice4->Visible = false;
			// 
			// pictureDice5
			// 
			this->pictureDice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice5.Image")));
			this->pictureDice5->Location = System::Drawing::Point(331, 65);
			this->pictureDice5->Name = L"pictureDice5";
			this->pictureDice5->Size = System::Drawing::Size(32, 34);
			this->pictureDice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice5->TabIndex = 8;
			this->pictureDice5->TabStop = false;
			this->pictureDice5->Visible = false;
			// 
			// pictureDice6
			// 
			this->pictureDice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice6.Image")));
			this->pictureDice6->Location = System::Drawing::Point(331, 65);
			this->pictureDice6->Name = L"pictureDice6";
			this->pictureDice6->Size = System::Drawing::Size(32, 34);
			this->pictureDice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice6->TabIndex = 9;
			this->pictureDice6->TabStop = false;
			this->pictureDice6->Visible = false;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelResult->Location = System::Drawing::Point(303, 105);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 27);
			this->labelResult->TabIndex = 10;
			// 
			// pictureWin
			// 
			this->pictureWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWin.Image")));
			this->pictureWin->Location = System::Drawing::Point(188, 84);
			this->pictureWin->Name = L"pictureWin";
			this->pictureWin->Size = System::Drawing::Size(75, 48);
			this->pictureWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureWin->TabIndex = 11;
			this->pictureWin->TabStop = false;
			this->pictureWin->Visible = false;
			// 
			// pictureLose
			// 
			this->pictureLose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLose.Image")));
			this->pictureLose->Location = System::Drawing::Point(188, 84);
			this->pictureLose->Name = L"pictureLose";
			this->pictureLose->Size = System::Drawing::Size(75, 48);
			this->pictureLose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureLose->TabIndex = 12;
			this->pictureLose->TabStop = false;
			this->pictureLose->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LemonChiffon;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(80, 159);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(250, 134);
			this->listBox1->TabIndex = 13;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�Q�[��ToolStripMenuItem,
					this->���̑�OToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(434, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �Q�[��ToolStripMenuItem
			// 
			this->�Q�[��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ResetToollStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->�Q�[��ToolStripMenuItem->Name = L"�Q�[��ToolStripMenuItem";
			this->�Q�[��ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->�Q�[��ToolStripMenuItem->Text = L"�Q�[��(&G)";
			// 
			// ResetToollStripMenuItem
			// 
			this->ResetToollStripMenuItem->Name = L"ResetToollStripMenuItem";
			this->ResetToollStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->ResetToollStripMenuItem->Text = L"���Z�b�g(&R)";
			this->ResetToollStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->ExitToolStripMenuItem->Text = L"�I��(&X)";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// ���̑�OToolStripMenuItem
			// 
			this->���̑�OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->EnvToolStripMenuItem,
					this->ScoreToolStripMenuItem
			});
			this->���̑�OToolStripMenuItem->Name = L"���̑�OToolStripMenuItem";
			this->���̑�OToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->���̑�OToolStripMenuItem->Text = L"���̑�(&O)";
			// 
			// EnvToolStripMenuItem
			// 
			this->EnvToolStripMenuItem->Name = L"EnvToolStripMenuItem";
			this->EnvToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->EnvToolStripMenuItem->Text = L"���ݒ�(&E)";
			this->EnvToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnvToolStripMenuItem_Click);
			// 
			// ScoreToolStripMenuItem
			// 
			this->ScoreToolStripMenuItem->Name = L"ScoreToolStripMenuItem";
			this->ScoreToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ScoreToolStripMenuItem->Text = L"�n�C�X�R�A(&H)";
			this->ScoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ScoreToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(434, 311);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureLose);
			this->Controls->Add(this->pictureWin);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->pictureDice6);
			this->Controls->Add(this->pictureDice5);
			this->Controls->Add(this->pictureDice4);
			this->Controls->Add(this->pictureDice3);
			this->Controls->Add(this->pictureDice2);
			this->Controls->Add(this->pictureDice1);
			this->Controls->Add(this->radioButtonGusu);
			this->Controls->Add(this->radioButtonKisu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�T�C�R���\�z�Q�[��";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			//Dice�N���X
			Dice^ _dice;
			//�_���v�Z�p�̃R���N�V����
			List<int>^ _historyCollection;
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		////�I�v�V�����{�^���i���W�I�{�^���j�̏�Ԃ��m�F
		//if (this->radioButtonKisu->Checked == true) {
		//	System::Diagnostics::Debug::WriteLine("����I������܂���");
		//}
		//else if (this->radioButtonGusu->Checked == true) {
		//	System::Diagnostics::Debug::WriteLine("�������I������܂���");
		//}
		//else {
		//	MessageBox::Show("�����������I��ł�������", "���肢");
		//	return;
		//}

		////�T�C�R���̖ڂ������_���ɐ���
		//Random^ randomDice;
		//randomDice = gcnew Random();
		//int diceNumber;
		//diceNumber = randomDice->Next(1, 7);
		//Debug::WriteLine("�ϐ�diceNumber�̒l��" + diceNumber.ToString() + "�ł�");

		////�T�C�R����\��
		//ShowDice(diceNumber);

		////���s�𔻒�
		//bool winFlg = IsWinGame(diceNumber);

		////���s�ɉ������摜��\��
		//ShowPicture(winFlg);

		//�e�R���g���[�����Q�[�����̏�ԂɕύX
		ChangeControlStatus(true);
	}

	private: System::Void ShowDice(int showDiceNumber) {
		//�S���̃T�C�R�����\��
		this->pictureDice1->Visible = false;
		this->pictureDice2->Visible = false;
		this->pictureDice3->Visible = false;
		this->pictureDice4->Visible = false;
		this->pictureDice5->Visible = false;
		this->pictureDice6->Visible = false;
		//�T�C�R����\��
		switch (showDiceNumber) {
		case 1:
			this->pictureDice1->Visible = true;
			break;
		case 2:
			this->pictureDice2->Visible = true;
			break;
		case 3:
			this->pictureDice3->Visible = true;
			break;
		case 4:
			this->pictureDice4->Visible = true;
			break;
		case 5:
			this->pictureDice5->Visible = true;
			break;
		case 6:
			this->pictureDice6->Visible = true;
			break;
		default:
			break;
		}
	}

	private: bool IsWinGame(int showDiceNumber) {
		//��������̂ǂ����I�񂾂��ۑ�
		String^ selectedValue;
		if (radioButtonGusu->Checked == true) {
			selectedValue = "����";
		}
		else {
			selectedValue = "�";
		}
		//��������̂ǂ���̖ڂ��o������ۑ�
		String^ resultValue;
		if (showDiceNumber % 2 == 0) {
			resultValue = "����";
		}
		else {
			resultValue = "�";
		}

		//�\�z�ƌ��ʂ���v���邩�ŏ��s�𔻒�
		if (selectedValue == resultValue) {
			//����
			return true;
		}
		else {
			//����
			return false;
		}
	}

	private: System::Void ShowPicture(bool winGame) {
		if (winGame) {
			this->labelResult->Text = "������I";
			this->labelResult->ForeColor = Color::Red;
			this->pictureWin->Visible = true;
			this->pictureLose->Visible = false;
			this->BackColor = Color::White;
		}
		else {
			this->labelResult->Text = "�͂���c";
			this->labelResult->ForeColor = Color::Blue;
			this->pictureWin->Visible = false;
			this->pictureLose->Visible = true;
			this->BackColor = Color::LightGray;
		}
	}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (System::Windows::Forms::DialogResult::Cancel ==
		MessageBox::Show("�Q�[�����I�����܂����H", "�m�F",
			MessageBoxButtons::OKCancel, MessageBoxIcon::Question))
	{
		e->Cancel = true;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	_dice = gcnew Dice(6);
	ShowDice(_dice->Number);
	ChangeControlStatus(false);
	_historyCollection = gcnew List<int>;
	//���X�g�{�b�N�X���N���A
	this->listBox1->Items->Clear();
	//��ʂ̐F��߂�
	this->BackColor = Color::White;
	//�摜�Ə��s���b�Z�[�W���N���A
	this->labelResult->Text = "";
	this->pictureWin->Visible = false;
	this->pictureLose->Visible = false;
}
private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//�T�C�R����U��
	_dice->Shake();
	//�\���𔽉f����
	ShowDice(_dice->Number);
}

private: System::Void ChangeControlStatus(bool playing) {
	//�T�C�R���p�̃^�C�}�[
	timer1->Enabled = playing;
	//�X�^�[�g�{�^��
	this->button1->Enabled = !playing;
	//��E�����{�^��
	this->radioButtonKisu->Enabled = playing;
	this->radioButtonGusu->Enabled = playing;
	if (playing) {
		this->radioButtonGusu->Checked = false;
		this->radioButtonKisu->Checked = false;
	}
}

private: System::Void ManageHistory(bool winGame) {
	//����̓��_�p�ϐ�
	int nowPoint = 0;
	if (winGame) {
		//���݂̃Q�[�������擾
		int gameCount = _historyCollection->Count;
		//�O��̓��_�p�ϐ�
		int prePoint = 0;
		if (gameCount > 0) {
			//1��ȏ�Q�[�������Ă���ΑO��̓_����ݒ�
			prePoint = _historyCollection[gameCount - 1];
		}
		//����̓��_�v�Z
		if (prePoint == 0) {
			//�O�񕉂��Ă����1�_
			nowPoint = 1;
		}
		else {
			//�O�񏟂��Ă����2�{
			nowPoint = prePoint * 2;
		}
	}
	//���X�g�{�b�N�X�ɒǉ�
	if ((_dice->Number % 2) == 0) {
		this->listBox1->Items->Add("�����ł��B" + labelResult->Text + "�F" + nowPoint.ToString() + "�_");
	}
	else {
		this->listBox1->Items->Add("��ł��B" + labelResult->Text + "�F" + nowPoint.ToString() + "�_");
	}

	//�R���N�V�����ɃQ�[���̗�����ǉ�
	_historyCollection->Add(nowPoint);

	//10��Q�[��������΁A���ʂ��W�v����
	if (_historyCollection->Count == 10) {
		//��������
		int winCount = 0;
		//��������
		int loseCount = 0;
		//���v���_
		int sumPoint = 0;
		//�Y��
		int i = 0;
		//10��J��Ԃ�
		while (i < _historyCollection->Count) {
			//�R���N�V�������痚���̎��o��
			int historyPoint = _historyCollection[i];
			//���v���_�𑫂�����
			sumPoint = sumPoint + historyPoint;
			//���������ƕ��������̉��Z
			if (historyPoint == 0) {
				loseCount++;
			}
			else {
				winCount++;
			}
			i++;
		}
		MessageBox::Show("���v���_��" + sumPoint + "�_�ł���", winCount + "��" + loseCount + "�s");
		//�X�^�[�g�{�^�����g�p�s��
		this->button1->Enabled = false;

		//���݂̃n�C�X�R�A
		int highScore = 0;
		try {
			//�X�R�A�L�^�p��Dice.dat���J��
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
			//Dice.dat�ɒ��g������ꍇ�A���̒l��ϐ��ɃZ�b�g
			if (!reader->EndOfStream) {
				highScore = Int32::Parse(reader->ReadToEnd());
			}
			//Dice.dat�����
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g���쐬
			System::IO::File::AppendAllText("./Dice.dat", "0");
			highScore = 0;
			System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
		}
		//�n�C�X�R�A��荡��̓��_�������ꍇ�ɁA�����Dice.dat�ɋL�^
		if (sumPoint > highScore) {
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
			writer->Write((gcnew Int32(sumPoint))->ToString());
			writer->Close();
		}
	}
}
private: System::Void radio_Click(System::Object^ sender, System::EventArgs^ e) {
	//�e�R���g���[�����Q�[���I���̏�ԂɕύX
	ChangeControlStatus(false);
	//���s�̔���
	bool winflg = IsWinGame(_dice->Number);
	//���s�摜�̕\��
	ShowPicture(winflg);
	//�����̊Ǘ�
	ManageHistory(winflg);
}
private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void EnvToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//FormOption�i���ݒ�t�H�[���j���C���X�^���X��
	FormOption^ frm = gcnew FormOption();
	//MyForm�̃^�C�}�[�Ԋu��FormOption�̃v���p�e�B�ɐݒ�
	frm->DiceTimer = this->timer1->Interval;
	//FormOption�����[�_���\��
	frm->ShowDialog();
	//FormOption�̃v���p�e�B��MyForm�̃^�C�}�[�Ԋu�ɐݒ�
	this->timer1->Interval = frm->DiceTimer;
}
private: System::Void ScoreToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//FormScore�i�n�C�X�R�A�\���t�H�[���j���C���X�^���X��
	FormScore^ frm = gcnew FormScore();
	//FormScore�����[�_���\��
	frm->ShowDialog();
}
};
}

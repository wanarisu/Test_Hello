#pragma once

namespace Hello {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureDice1;
	private: System::Windows::Forms::PictureBox^ pictureDise2;
	private: System::Windows::Forms::PictureBox^ pictureDice3;
	private: System::Windows::Forms::PictureBox^ pictureDice4;
	private: System::Windows::Forms::PictureBox^ pictureDice5;
	private: System::Windows::Forms::PictureBox^ pictureDice6;




	protected:



	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::RadioButton^ radioButtonKisu;
			System::Windows::Forms::RadioButton^ radioButtonGusu;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDise2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice6 = (gcnew System::Windows::Forms::PictureBox());
			radioButtonKisu = (gcnew System::Windows::Forms::RadioButton());
			radioButtonGusu = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDise2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(83, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(456, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"私と勝負しよう!";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(95, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(444, 86);
			this->button1->TabIndex = 1;
			this->button1->Text = L"スタート";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// radioButtonKisu
			// 
			radioButtonKisu->AutoSize = true;
			radioButtonKisu->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			radioButtonKisu->Location = System::Drawing::Point(95, 358);
			radioButtonKisu->Name = L"radioButtonKisu";
			radioButtonKisu->Size = System::Drawing::Size(209, 47);
			radioButtonKisu->TabIndex = 2;
			radioButtonKisu->TabStop = true;
			radioButtonKisu->Text = L"奇数にゃ!";
			radioButtonKisu->UseVisualStyleBackColor = true;
			// 
			// radioButtonGusu
			// 
			radioButtonGusu->AutoSize = true;
			radioButtonGusu->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			radioButtonGusu->Location = System::Drawing::Point(330, 358);
			radioButtonGusu->Name = L"radioButtonGusu";
			radioButtonGusu->Size = System::Drawing::Size(209, 47);
			radioButtonGusu->TabIndex = 3;
			radioButtonGusu->TabStop = true;
			radioButtonGusu->Text = L"偶数にゃ!";
			radioButtonGusu->UseVisualStyleBackColor = true;
			// 
			// pictureDice1
			// 
			this->pictureDice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice1.Image")));
			this->pictureDice1->Location = System::Drawing::Point(95, 439);
			this->pictureDice1->Name = L"pictureDice1";
			this->pictureDice1->Size = System::Drawing::Size(200, 200);
			this->pictureDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDice1->TabIndex = 4;
			this->pictureDice1->TabStop = false;
			// 
			// pictureDise2
			// 
			this->pictureDise2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDise2.Image")));
			this->pictureDise2->Location = System::Drawing::Point(301, 439);
			this->pictureDise2->Name = L"pictureDise2";
			this->pictureDise2->Size = System::Drawing::Size(200, 200);
			this->pictureDise2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDise2->TabIndex = 5;
			this->pictureDise2->TabStop = false;
			// 
			// pictureDice3
			// 
			this->pictureDice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice3.Image")));
			this->pictureDice3->Location = System::Drawing::Point(507, 439);
			this->pictureDice3->Name = L"pictureDice3";
			this->pictureDice3->Size = System::Drawing::Size(200, 200);
			this->pictureDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDice3->TabIndex = 6;
			this->pictureDice3->TabStop = false;
			// 
			// pictureDice4
			// 
			this->pictureDice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice4.Image")));
			this->pictureDice4->Location = System::Drawing::Point(95, 645);
			this->pictureDice4->Name = L"pictureDice4";
			this->pictureDice4->Size = System::Drawing::Size(200, 200);
			this->pictureDice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDice4->TabIndex = 7;
			this->pictureDice4->TabStop = false;
			// 
			// pictureDice5
			// 
			this->pictureDice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice5.Image")));
			this->pictureDice5->Location = System::Drawing::Point(301, 645);
			this->pictureDice5->Name = L"pictureDice5";
			this->pictureDice5->Size = System::Drawing::Size(200, 200);
			this->pictureDice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDice5->TabIndex = 8;
			this->pictureDice5->TabStop = false;
			// 
			// pictureDice6
			// 
			this->pictureDice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice6.Image")));
			this->pictureDice6->Location = System::Drawing::Point(507, 645);
			this->pictureDice6->Name = L"pictureDice6";
			this->pictureDice6->Size = System::Drawing::Size(200, 200);
			this->pictureDice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureDice6->TabIndex = 9;
			this->pictureDice6->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 979);
			this->Controls->Add(this->pictureDice6);
			this->Controls->Add(this->pictureDice5);
			this->Controls->Add(this->pictureDice4);
			this->Controls->Add(this->pictureDice3);
			this->Controls->Add(this->pictureDise2);
			this->Controls->Add(this->pictureDice1);
			this->Controls->Add(radioButtonGusu);
			this->Controls->Add(radioButtonKisu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"サイコロ予想ゲーム";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDise2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

	};
}

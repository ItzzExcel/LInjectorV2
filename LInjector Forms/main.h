#pragma once

namespace LInjectorForms {

	#include <Windows.h>
	#include <stdlib.h>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using KrnlAPI::KrnlApi;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: FastColoredTextBoxNS::FastColoredTextBox^ fastColoredTextBox1;




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

	private: System::ComponentModel::IContainer^ components;

	protected:
		KrnlAPI::KrnlApi krnlApi;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			krnlApi.Initialize();
			if (!krnlApi.IsInitialized())
			{
				krnlApi.Initialize();
			}

			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Button^ button4;
			System::Windows::Forms::Button^ button5;
			System::Windows::Forms::Button^ button6;
			System::Windows::Forms::Button^ button7;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->fastColoredTextBox1 = (gcnew FastColoredTextBoxNS::FastColoredTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			button4 = (gcnew System::Windows::Forms::Button());
			button5 = (gcnew System::Windows::Forms::Button());
			button6 = (gcnew System::Windows::Forms::Button());
			button7 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fastColoredTextBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			button4->BackColor = System::Drawing::Color::DarkSlateBlue;
			button4->FlatAppearance->BorderSize = 0;
			button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button4->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button4->ForeColor = System::Drawing::SystemColors::Control;
			button4->Location = System::Drawing::Point(3, 3);
			button4->Name = L"button4";
			button4->Size = System::Drawing::Size(75, 23);
			button4->TabIndex = 1;
			button4->Text = L"Inject";
			button4->UseVisualStyleBackColor = false;
			button4->Click += gcnew System::EventHandler(this, &main::button4_Click);
			// 
			// button5
			// 
			button5->BackColor = System::Drawing::Color::DarkSlateBlue;
			button5->FlatAppearance->BorderSize = 0;
			button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button5->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button5->ForeColor = System::Drawing::SystemColors::Control;
			button5->Location = System::Drawing::Point(165, 3);
			button5->Name = L"button5";
			button5->Size = System::Drawing::Size(75, 23);
			button5->TabIndex = 2;
			button5->Text = L"Open File";
			button5->UseVisualStyleBackColor = false;
			button5->Click += gcnew System::EventHandler(this, &main::button5_Click);
			// 
			// button6
			// 
			button6->BackColor = System::Drawing::Color::DarkSlateBlue;
			button6->FlatAppearance->BorderSize = 0;
			button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button6->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button6->ForeColor = System::Drawing::SystemColors::Control;
			button6->Location = System::Drawing::Point(246, 3);
			button6->Name = L"button6";
			button6->Size = System::Drawing::Size(75, 23);
			button6->TabIndex = 3;
			button6->Text = L"Kill Roblox";
			button6->UseVisualStyleBackColor = false;
			button6->Click += gcnew System::EventHandler(this, &main::button6_Click);
			// 
			// button7
			// 
			button7->BackColor = System::Drawing::Color::DarkSlateBlue;
			button7->FlatAppearance->BorderSize = 0;
			button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button7->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			button7->ForeColor = System::Drawing::SystemColors::Control;
			button7->Location = System::Drawing::Point(327, 3);
			button7->Name = L"button7";
			button7->Size = System::Drawing::Size(102, 23);
			button7->TabIndex = 4;
			button7->Text = L"Top Most";
			button7->UseVisualStyleBackColor = false;
			button7->Click += gcnew System::EventHandler(this, &main::button7_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->flowLayoutPanel2->Controls->Add(button4);
			this->flowLayoutPanel2->Controls->Add(this->button3);
			this->flowLayoutPanel2->Controls->Add(button5);
			this->flowLayoutPanel2->Controls->Add(button6);
			this->flowLayoutPanel2->Controls->Add(button7);
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 421);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(902, 32);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(84, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Execute";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &main::button3_Click);
			// 
			// fastColoredTextBox1
			// 
			this->fastColoredTextBox1->AutoCompleteBracketsList = gcnew cli::array< System::Char >(10) {
				'(', ')', '{', '}', '[', ']', '\"',
					'\"', '\'', '\''
			};
			this->fastColoredTextBox1->AutoIndentCharsPatterns = L"\r\n^\\s*[\\w\\.]+(\\s\\w+)\?\\s*(\?<range>=)\\s*(\?<range>.+)\r\n";
			this->fastColoredTextBox1->AutoScrollMinSize = System::Drawing::Size(185, 32);
			this->fastColoredTextBox1->BackBrush = nullptr;
			this->fastColoredTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->fastColoredTextBox1->BracketsHighlightStrategy = FastColoredTextBoxNS::BracketsHighlightStrategy::Strategy2;
			this->fastColoredTextBox1->CaretColor = System::Drawing::Color::White;
			this->fastColoredTextBox1->CharHeight = 12;
			this->fastColoredTextBox1->CharWidth = 7;
			this->fastColoredTextBox1->CommentPrefix = L"--";
			this->fastColoredTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->fastColoredTextBox1->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->fastColoredTextBox1->FoldingIndicatorColor = System::Drawing::Color::MediumPurple;
			this->fastColoredTextBox1->Font = (gcnew System::Drawing::Font(L"Anonymous Pro", 9.75F));
			this->fastColoredTextBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->fastColoredTextBox1->IndentBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->fastColoredTextBox1->IsReplaceMode = false;
			this->fastColoredTextBox1->Language = FastColoredTextBoxNS::Language::Lua;
			this->fastColoredTextBox1->LeftBracket = '(';
			this->fastColoredTextBox1->LeftBracket2 = '{';
			this->fastColoredTextBox1->LineNumberColor = System::Drawing::Color::MediumPurple;
			this->fastColoredTextBox1->Location = System::Drawing::Point(12, 38);
			this->fastColoredTextBox1->Name = L"fastColoredTextBox1";
			this->fastColoredTextBox1->Paddings = System::Windows::Forms::Padding(10);
			this->fastColoredTextBox1->RightBracket = ')';
			this->fastColoredTextBox1->RightBracket2 = '}';
			this->fastColoredTextBox1->SelectionColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->fastColoredTextBox1->ServiceColors = (cli::safe_cast<FastColoredTextBoxNS::ServiceColors^>(resources->GetObject(L"fastColoredTextBox1.ServiceColors")));
			this->fastColoredTextBox1->ServiceLinesColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->fastColoredTextBox1->Size = System::Drawing::Size(878, 377);
			this->fastColoredTextBox1->TabIndex = 2;
			this->fastColoredTextBox1->Text = L"print(\'Hello World\')";
			this->fastColoredTextBox1->Zoom = 100;
			this->fastColoredTextBox1->Load += gcnew System::EventHandler(this, &main::fastColoredTextBox1_Load);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(871, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(841, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"_";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// panel1
			// 
			this->panel1->AllowDrop = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(902, 31);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Anonymous Pro", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(128, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"LInjector | Windows Forms Release | v0.1 ALPHA";
			this->label1->Click += gcnew System::EventHandler(this, &main::label1_Click);
			// 
			// main
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(902, 453);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->fastColoredTextBox1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fastColoredTextBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {

	}
private: System::Void fastColoredTextBox1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Configurar el OpenFileDialog
	openFileDialog1->Filter = "Text files (*.txt; *.lua)|*.txt;*.lua|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::String^ script = System::IO::File::ReadAllText(openFileDialog1->FileName);
		
		fastColoredTextBox1->Clear();
		fastColoredTextBox1->Text = script;
	}
	else {
		
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	krnlApi.Initialize();
	krnlApi.Inject();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Windows::Forms::Form::TopMost == false) {
		System::Windows::Forms::Form::TopMost = true;
	}
	else {
		System::Windows::Forms::Form::TopMost = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	krnlApi.Execute(fastColoredTextBox1->Text);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	system("taskkill /f /im RobloxPlayerBeta.exe");
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

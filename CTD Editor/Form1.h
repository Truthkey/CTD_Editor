#pragma once


namespace CTDEditor {

	using namespace System;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

		String ^CTD;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
			 int filesize;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;



			 int infoblock;
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(320, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Original Text";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(320, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Edited Text";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(324, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(353, 134);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load CTD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(601, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 21);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(533, 163);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(324, 187);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(353, 134);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown6);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(15, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(284, 255);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Information";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(119, 197);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(61, 20);
			this->numericUpDown6->TabIndex = 9;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown6_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(119, 146);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(61, 20);
			this->numericUpDown4->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(116, 180);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Window Size Y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(116, 129);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Window Position Y";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(17, 197);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(61, 20);
			this->numericUpDown5->TabIndex = 9;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(17, 146);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(61, 20);
			this->numericUpDown3->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(14, 180);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Window Size X";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 129);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Window Position X";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(166, 38);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {256, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(61, 20);
			this->numericUpDown2->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(163, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Text size";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Font type";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Box type";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(23) {L"Normal", L"Window cut from the edges", L"Spiky window", 
				L"Tutorial", L"Window cutted from the edges", L"Custcene subtitle", L"Normal window with white text", L"Unknown", L"Unknown", 
				L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", 
				L"Unknown", L"Unknown", L"No window (glitchy)"});
			this->comboBox2->Location = System::Drawing::Point(17, 86);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(210, 21);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->Text = L"Nothing loaded";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"None", L"Unknown", L"Arrow Bottom", L"Arrow Top Left", 
				L"Arrow Top Right", L"Bubble Bottom Left", L"Bubble Bottom Right", L"Bubble Top Left", L"Bubble Top Right", L"Arrow Bottom Left", 
				L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Unknown", L"Arrowless", L"Unknown", 
				L"Unknown", L"Unknown", L"Arrow Top Center"});
			this->comboBox1->Location = System::Drawing::Point(17, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Nothing loaded";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Text Strings";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Info Blocks";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(178, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 328);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"KHBBS - CTD Editor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^dialog1 = gcnew OpenFileDialog();
				 dialog1->Filter = "CTD Files (*.ctd)|*.ctd|All Files (*.*)|*.*";
				 dialog1->Title = "Choose a CTD file";
				 dialog1->FileName = "";
				 if(dialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
				 {
					 CTD = dialog1->FileName;
					 button2->Enabled = true;
					 numericUpDown1->Enabled = true;

					 int offset = 0;
					 short max = 0;
					 short infos = 0;
					 infoblock = 0;

					 FileStream ^file = gcnew FileStream(CTD,FileMode::Open);
					 BinaryReader ^r = gcnew BinaryReader(file);
					 filesize = (int)file->Length;

					 // string amounts.
					 r->BaseStream->Seek(0xC,SeekOrigin::Begin);
					 infos = r->ReadUInt16();
					 max = r->ReadUInt16();
					 label5->Text = max.ToString();
					 label6->Text = infos.ToString();
					 numericUpDown1->Maximum = max;

					 r->BaseStream->Seek(0x14,SeekOrigin::Begin);
					 infoblock = r->ReadUInt32();
					 r->BaseStream->Seek(infoblock,SeekOrigin::Begin);
					 short winposx = r->ReadUInt16();
					 short winposy = r->ReadUInt16();
					 short winsizex = r->ReadUInt16();
					 short winsizey = r->ReadUInt16(); r->BaseStream->Seek(1,SeekOrigin::Current);
					 unsigned char text_type = r->ReadByte(); r->BaseStream->Seek(2,SeekOrigin::Current);
					 unsigned char font_size = r->ReadByte(); r->BaseStream->Seek(7,SeekOrigin::Current);
					 unsigned char box_type = r->ReadByte();


					 //Displaying info.
					 comboBox1->SelectedIndex = box_type;
					 numericUpDown2->Value = font_size;
					 comboBox2->SelectedIndex = text_type;
					 numericUpDown3->Value = winposx;
					 numericUpDown4->Value = winposy;
					 numericUpDown5->Value = winsizex;
					 numericUpDown6->Value = winsizey;


					 r->BaseStream->Seek(0x24,SeekOrigin::Begin);
					 offset = r->ReadUInt32();
					 r->BaseStream->Seek(offset,SeekOrigin::Begin);

					 for(;;)
					 {
						 richTextBox1->Text += r->ReadChar(); 
						 if(r->ReadChar() == 0)
							 break;

						 r->BaseStream->Seek(-1,SeekOrigin::Current);
					 }
					 richTextBox2->Text = richTextBox1->Text;

					 file->Close();
					 r->Close();
				 }	 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileStream ^file = gcnew FileStream(CTD,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(file,System::Text::Encoding::GetEncoding(437));
			 BinaryWriter ^w = gcnew BinaryWriter(file,System::Text::Encoding::GetEncoding(437));
			 String ^f = Path::GetFileName(CTD);

			 unsigned char padding = 0x0;
			 int offset = 0;
			 int extra_offset = 0;
			 int off_ex = 0;
			 short max = 0;
			 int value = (int)numericUpDown1->Value;

			 //Get String and replace characters.
			 String ^str = richTextBox2->Text;
			 int size1 = richTextBox1->Text->Length;
			 int size2 = str->Length;
			 unsigned int difference = size2 - size1;
			 array<unsigned char>^ buffer;
			 array<unsigned char>^ buffer_extra;

			 //Get extra info.
			 short winposx = (short)numericUpDown3->Value;
			 short winposy = (short)numericUpDown4->Value;
			 short winsizex = (short)numericUpDown5->Value;
			 short winsizey = (short)numericUpDown6->Value;
			 unsigned char text_type = comboBox1->SelectedIndex;
			 unsigned char font_size = (unsigned char)(short)numericUpDown2->Value;
			 unsigned char box_type = comboBox2->SelectedIndex;

			 //Read maximum amount of strings in CTD.
			 r->BaseStream->Seek(0xE,SeekOrigin::Begin);
			 max = r->ReadUInt16();
			 --max;

			 offset = 0;
			 extra_offset = 0;

			 /*Write extra info.
			 r->BaseStream->Seek(offset+4,SeekOrigin::Begin);
			 int blk = r->ReadUInt32();
			 r->BaseStream->Seek(infoblock +(0x20*blk),SeekOrigin::Begin);
			 w->Write(winposx);w->Write(winposy);w->Write(winsizex);w->Write(winsizex);
			 w->Seek(1,SeekOrigin::Current); w->Write(text_type); w->Seek(2,SeekOrigin::Current);
			 w->Write(font_size); w->Seek(7,SeekOrigin::Current); w->Write(box_type);*/

			 if(value == max)
			 {
				 r->BaseStream->Seek((0x24)+0xC*max,SeekOrigin::Begin);
				 offset = r->ReadUInt32();
				 if(size2+offset < filesize)
				 {
					 r->BaseStream->Seek(offset,SeekOrigin::Begin);
					 w->Write(richTextBox2->Text->ToCharArray());
				 }
				 else
					 System::Windows::Forms::MessageBox::Show("The text wasn't written because\nthe text exceeded the file size.");
			 }
			 else
			 {
				 // Get current string offset and next string offset.
				 r->BaseStream->Seek((0x24)+0xC*(value-1),SeekOrigin::Begin);
				 offset = r->ReadInt32();
				 r->BaseStream->Seek((0x24)+0xC*value,SeekOrigin::Begin);
				 extra_offset = r->ReadInt32();

				 // Copy next text to array.
				 r->BaseStream->Seek(extra_offset,SeekOrigin::Begin);
				 buffer = r->ReadBytes(filesize-extra_offset);

				 //Paste text difference offset.
				 r->BaseStream->Seek(extra_offset+difference,SeekOrigin::Begin);
				 w->Write(buffer);

				 //Paste new text.
				 r->BaseStream->Seek(offset,SeekOrigin::Begin);
				 w->Write(str->ToCharArray());
				 w->BaseStream->WriteByte(padding);

				 //Recalculate pointers.
				 for(int a=value;a<(max+1);++a)
				 {
					 r->BaseStream->Seek((0x24)+0xC*a,SeekOrigin::Begin);
					 off_ex = r->ReadUInt32();
					 if(size2 != size1)
						 off_ex += difference;

					 r->BaseStream->Seek((0x24)+0xC*a,SeekOrigin::Begin);
					 w->Write(off_ex);
				 }

				 difference = 0;
				 off_ex = 0;
			 }

			 r->BaseStream->Seek(0,SeekOrigin::Begin);
			 buffer_extra = r->ReadBytes(filesize);
			 file->Close();
			 r->Close();
			 w->Close();
			 File::Delete(CTD);

			 FileStream ^o = gcnew FileStream(CTD,FileMode::Create);
			 BinaryWriter ^wr = gcnew BinaryWriter(o);
			 wr->Write(buffer_extra);
			 o->Close();
			 wr->Close();
			 
			 button2->Enabled = false;
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 button2->Enabled = true;
			 richTextBox1->Text = "";
			 int offset = 0;
			 int value = (int)numericUpDown1->Value;
			 value--;
			 FileStream ^file = gcnew FileStream(CTD,FileMode::Open);
			 BinaryReader ^r = gcnew BinaryReader(file,System::Text::Encoding::ASCII);

			 r->BaseStream->Seek(0x14,SeekOrigin::Begin);
			 infoblock = r->ReadUInt32();
			 r->BaseStream->Seek(infoblock,SeekOrigin::Begin);
			 short winposx = r->ReadUInt16();
			 short winposy = r->ReadUInt16();
			 short winsizex = r->ReadUInt16();
			 short winsizey = r->ReadUInt16(); r->BaseStream->Seek(1,SeekOrigin::Current);
			 unsigned char text_type = r->ReadByte(); r->BaseStream->Seek(2,SeekOrigin::Current);
			 unsigned char font_size = r->ReadByte(); r->BaseStream->Seek(7,SeekOrigin::Current);
			 unsigned char box_type = r->ReadByte();

			 //Displaying info.
			 comboBox1->SelectedIndex = box_type;
			 numericUpDown2->Value = font_size;
			 comboBox2->SelectedIndex = text_type;
			 numericUpDown3->Value = winposx;
			 numericUpDown4->Value = winposy;
			 numericUpDown5->Value = winsizex;
			 numericUpDown6->Value = winsizey;

			 r->BaseStream->Seek((0x24)+0xC*value,SeekOrigin::Begin);
			 offset = r->ReadInt32();
			 r->BaseStream->Seek(offset,SeekOrigin::Begin);

			 unsigned char check = 0;
			 unsigned char check2 = 0;
			 for(;;)
			 {
				check = r->ReadByte();
				if(check == 0)
					 break;
				
				if(check == 0x99)
				{
					check2 = r->ReadByte();

					if(check2 == 0x9A)
						richTextBox1->Text += "à";
					else if(check2 == 0x9B)
						richTextBox1->Text += "á";
					else if(check2 == 0x9C)
						richTextBox1->Text += "â";
					else if(check2 == 0x9D)
						richTextBox1->Text += "ä";
					//else if(check2 == 0x9E)
						//richTextBox1->Text += "á";
					else if(check2 == 0x9F)
						richTextBox1->Text += "ç";
					else if(check2 == 0xA0)
						richTextBox1->Text += "è";
					else if(check2 == 0xA1)
						richTextBox1->Text += "é";
					else if(check2 == 0xA2)
						richTextBox1->Text += "ê";
					else if(check2 == 0xA3)
						richTextBox1->Text += "ë";
					else if(check2 == 0xA4)
						richTextBox1->Text += "ì";
					else if(check2 == 0xA5)
						richTextBox1->Text += "í";
					else if(check2 == 0xA6)
						richTextBox1->Text += "î";
					else if(check2 == 0xA7)
						richTextBox1->Text += "ï";
					else if(check2 == 0xA8)
						richTextBox1->Text += "ñ";
					else if(check2 == 0xA9)
						richTextBox1->Text += "ò";
					else if(check2 == 0xAA)
						richTextBox1->Text += "ó";
					else if(check2 == 0xAB)
						richTextBox1->Text += "ô";
					else if(check2 == 0xAC)
						richTextBox1->Text += "õ";
					else if(check2 == 0xAD)
						richTextBox1->Text += "ö";
					else if(check2 == 0xAE)
						richTextBox1->Text += "ù";
					else if(check2 == 0xAF)
						richTextBox1->Text += "ú";
					else if(check2 == 0xB0)
						richTextBox1->Text += "û";
					else if(check2 == 0xB1)
						richTextBox1->Text += "ü";
					//else if(check2 == 0xB2)
						//richTextBox1->Text += "û";
					else if(check2 == 0xB3)
						richTextBox1->Text += "¿";
					else if(check2 == 0xB4)
						richTextBox1->Text += "¡";

					//r->BaseStream->Seek(1,SeekOrigin::Current);
				}
				else
				{
					 r->BaseStream->Seek(-1,SeekOrigin::Current);
					 richTextBox1->Text += r->ReadChar();
				}
			 }
			 richTextBox2->Text = richTextBox1->Text;

			 file->Close();
			 r->Close();
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


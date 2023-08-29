#pragma once

namespace CppCLRWinFormsProject {

	#include "Suchmaske.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
		{
		public:
			Form1(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Form1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		protected:
		private: System::Windows::Forms::ToolStripMenuItem^ dateinToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ öffnenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ speichernToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ schließenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ bearbeitenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ allesMarkierenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ kopierenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ ausschneidenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ einfügenToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ extrasToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ suchenToolStripMenuItem;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->dateinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->öffnenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->speichernToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->schließenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->bearbeitenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->allesMarkierenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->kopierenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ausschneidenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->einfügenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->extrasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->suchenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->menuStrip1->SuspendLayout();
				this->SuspendLayout();
				// 
				// menuStrip1
				// 
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->dateinToolStripMenuItem,
						this->bearbeitenToolStripMenuItem, this->extrasToolStripMenuItem, this->toolStripMenuItem1
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(458, 24);
				this->menuStrip1->TabIndex = 0;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// dateinToolStripMenuItem
				// 
				this->dateinToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->öffnenToolStripMenuItem,
						this->speichernToolStripMenuItem, this->schließenToolStripMenuItem
				});
				this->dateinToolStripMenuItem->Name = L"dateinToolStripMenuItem";
				this->dateinToolStripMenuItem->Size = System::Drawing::Size(46, 20);
				this->dateinToolStripMenuItem->Text = L"Datei";
				// 
				// öffnenToolStripMenuItem
				// 
				this->öffnenToolStripMenuItem->Name = L"öffnenToolStripMenuItem";
				this->öffnenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->öffnenToolStripMenuItem->Text = L"Öffnen";
				this->öffnenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::öffnenToolStripMenuItem_Click);
				// 
				// speichernToolStripMenuItem
				// 
				this->speichernToolStripMenuItem->Name = L"speichernToolStripMenuItem";
				this->speichernToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->speichernToolStripMenuItem->Text = L"Speichern";
				this->speichernToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::speichernToolStripMenuItem_Click);
				// 
				// schließenToolStripMenuItem
				// 
				this->schließenToolStripMenuItem->Name = L"schließenToolStripMenuItem";
				this->schließenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->schließenToolStripMenuItem->Text = L"Schließen";
				this->schließenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::schließenToolStripMenuItem_Click);
				// 
				// bearbeitenToolStripMenuItem
				// 
				this->bearbeitenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->allesMarkierenToolStripMenuItem,
						this->kopierenToolStripMenuItem, this->ausschneidenToolStripMenuItem, this->einfügenToolStripMenuItem
				});
				this->bearbeitenToolStripMenuItem->Name = L"bearbeitenToolStripMenuItem";
				this->bearbeitenToolStripMenuItem->Size = System::Drawing::Size(75, 20);
				this->bearbeitenToolStripMenuItem->Text = L"Bearbeiten";
				// 
				// allesMarkierenToolStripMenuItem
				// 
				this->allesMarkierenToolStripMenuItem->Name = L"allesMarkierenToolStripMenuItem";
				this->allesMarkierenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->allesMarkierenToolStripMenuItem->Text = L"Alles markieren";
				this->allesMarkierenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::allesMarkierenToolStripMenuItem_Click);
				// 
				// kopierenToolStripMenuItem
				// 
				this->kopierenToolStripMenuItem->Name = L"kopierenToolStripMenuItem";
				this->kopierenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->kopierenToolStripMenuItem->Text = L"Kopieren";
				this->kopierenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kopierenToolStripMenuItem_Click);
				// 
				// ausschneidenToolStripMenuItem
				// 
				this->ausschneidenToolStripMenuItem->Name = L"ausschneidenToolStripMenuItem";
				this->ausschneidenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->ausschneidenToolStripMenuItem->Text = L"Ausschneiden";
				this->ausschneidenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ausschneidenToolStripMenuItem_Click);
				// 
				// einfügenToolStripMenuItem
				// 
				this->einfügenToolStripMenuItem->Name = L"einfügenToolStripMenuItem";
				this->einfügenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->einfügenToolStripMenuItem->Text = L"Einfügen";
				this->einfügenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::einfügenToolStripMenuItem_Click);
				// 
				// extrasToolStripMenuItem
				// 
				this->extrasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->suchenToolStripMenuItem });
				this->extrasToolStripMenuItem->Name = L"extrasToolStripMenuItem";
				this->extrasToolStripMenuItem->Size = System::Drawing::Size(50, 20);
				this->extrasToolStripMenuItem->Text = L"Extras";
				// 
				// suchenToolStripMenuItem
				// 
				this->suchenToolStripMenuItem->Name = L"suchenToolStripMenuItem";
				this->suchenToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->suchenToolStripMenuItem->Text = L"Suchen";
				this->suchenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::suchenToolStripMenuItem_Click);
				// 
				// toolStripMenuItem1
				// 
				this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->infoToolStripMenuItem });
				this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
				this->toolStripMenuItem1->Size = System::Drawing::Size(24, 20);
				this->toolStripMenuItem1->Text = L"\?";
				// 
				// infoToolStripMenuItem
				// 
				this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
				this->infoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->infoToolStripMenuItem->Text = L"Info";
				this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::infoToolStripMenuItem_Click);
				// 
				// textBox1
				// 
				this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->textBox1->Location = System::Drawing::Point(0, 28);
				this->textBox1->Margin = System::Windows::Forms::Padding(0);
				this->textBox1->Multiline = true;
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(458, 315);
				this->textBox1->TabIndex = 1;
			
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(458, 343);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->menuStrip1);
				this->Name = L"Form1";
				this->Text = L"DL Editor";
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
		private: System::Void suchenToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
			MeinTextEditor::Suchmaske^ sm = gcnew MeinTextEditor::Suchmaske(this->textBox1);
			sm->Show();
		}

		private: System::Void öffnenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			openFileDialog->Filter = "Text Dateien (*.txt)|*.txt";

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ filePath = openFileDialog->FileName;
				try {
					String^ fileText = File::ReadAllText(filePath);
					textBox1->Text = fileText;

				}
				catch (Exception^ ex) {
					MessageBox::Show("Fehler beim Öffnen der Datei: " + ex->Message, "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
		}
		private: System::Void speichernToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "Text Dateien (*.txt)|*.txt";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ filePath = saveFileDialog->FileName;
				try {
					File::WriteAllText(filePath, textBox1->Text);
					MessageBox::Show("Datei erfolgreich gespeichert.", "Gespeichert", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Fehler beim Speichern der Datei: " + ex->Message, "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		private: System::Void schließenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		
		private: System::Void allesMarkierenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->SelectAll();
		}

		private: System::Void kopierenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Copy();
		}

		private: System::Void ausschneidenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Cut();
		}

		private: System::Void einfügenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox1->Paste();
		}
		private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show(this, "Autor: Nadine Stamm", "Informationen", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	
};
}


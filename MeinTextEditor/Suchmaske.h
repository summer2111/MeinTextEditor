#pragma once
	


namespace MeinTextEditor {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace std;


	/// <summary>
	/// Zusammenfassung für Suchmaske
	/// </summary>
	public ref class Suchmaske : public System::Windows::Forms::Form
	{
	public:
		Suchmaske(TextBox^ text_box)
		{
			this->parentTextBox = text_box;
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Suchmaske()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: TextBox^ parentTextBox;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 20);
			this->textBox1->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(38, 38);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(199, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Groß- und Kleinschreibung beachten";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Suchen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Suchmaske::button1_Click);
			// 
			// Suchmaske
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(272, 96);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Suchmaske";
			this->Text = L"Suchmaske";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			bool caseSensitive = this->checkBox1->Checked;

			array<wchar_t>^ heuhaufen_chars = this->parentTextBox->Text->ToCharArray();
			array<wchar_t>^ nadel_chars = this->textBox1->Text->ToCharArray();

			int pos = -1;

			for (int i = 0; i < heuhaufen_chars->Length; i++) {
				int j = 0;
				wchar_t l = heuhaufen_chars[i + j];
				wchar_t r = nadel_chars[j];
				if (!caseSensitive) {
					l = wchar_t::ToLower(l);
					r = wchar_t::ToLower(r);
				}
				while (l == r) {
					if (j == nadel_chars->Length - 1) {
						pos = i;
						break;
					}
					
					j++;
					
					l = heuhaufen_chars[i + j];
					r = nadel_chars[j];
					if (!caseSensitive) {
						l = wchar_t::ToLower(l);
						r = wchar_t::ToLower(r);
					}
				}

				if (pos != -1) {
					break;
				}
			}

			if (pos == -1) {
				MessageBox::Show(this, "String '" + this->textBox1->Text + "' nicht gefunden", "Suche", MessageBoxButtons::OK, MessageBoxIcon::Information);
			} else {
				this->parentTextBox->Select(pos, nadel_chars->Length);
			}
			
			
			this->Close();
		}
	};
}

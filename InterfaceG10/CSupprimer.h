#pragma once

namespace InterfaceG10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CSupprimer
	/// </summary>
	public ref class CSupprimer : public System::Windows::Forms::Form
	{
	public:
		CSupprimer(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CSupprimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Introduisez le nom et prenom du Client a supprimer : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(376, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(668, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 70);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Valider la suppression ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// CSupprimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 473);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"CSupprimer";
			this->Text = L"CSupprimer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

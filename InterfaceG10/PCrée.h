#pragma once

namespace InterfaceG10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PCr�e
	/// </summary>
	public ref class PCr�e : public System::Windows::Forms::Form
	{
	public:
		PCr�e(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~PCr�e()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(220, 329);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(123, 26);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(220, 237);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 26);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Prenom : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Adresse :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(72, 332);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Date embauche :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(716, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 76);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Validation de la cr�ation";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PCr�e
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(930, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"PCr�e";
			this->Text = L"PCr�e";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}

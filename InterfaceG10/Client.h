#pragma once
#include"CAfficher.h"
#include"CCrée.h"
#include"CModifier.h"
#include"CSupprimer.h"
namespace InterfaceG10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
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
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(307, 295);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(490, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(669, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Crée";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Client::button4_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(875, 480);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Client";
			this->Text = L"Client";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CAfficher^ p = gcnew CAfficher;
		this->Hide();
		p->Show();
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		CModifier^ m = gcnew CModifier;
		this->Hide();
		m->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		CSupprimer^ ps = gcnew CSupprimer;
		this->Hide();
		ps->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		CCrée^ c = gcnew CCrée;
		this->Hide();
		c->Show();
	}
};
}

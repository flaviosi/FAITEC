#pragma once
#include <string>
#include "Automato.h"
#include <windows.h>
namespace AS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TesteAutomatoTorneira
	/// </summary>
	public ref class TesteAutomatoTorneira : public System::Windows::Forms::Form
	{
	public:
		TesteAutomatoTorneira(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Automato AF;
			Status = -1;
			af = AF.automato5();
			unsetImagemResultado();
			novoTeste->Enabled = false;
			proximo->Enabled = false;
			acionado = true;
		}
		int getStatus();
		void setStatus(int);
		void setImagemTorneira(string);
		void setImagemEstado(string);
		void unsetImagemResultado();
		void setImagemResultado(string);
		string getPalavra();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TesteAutomatoTorneira()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  resultado;
	protected:
	private: System::Windows::Forms::Button^  novoTeste;
	private: System::Windows::Forms::Button^  proximo;
	private: System::Windows::Forms::PictureBox^  boxAutomato;
	private: System::Windows::Forms::Button^  enviar;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::PictureBox^  boxImagemPorta;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		int Status;
		bool acionado = false;
		ponteiro af;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
			 ponteiro afAux;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TesteAutomatoTorneira::typeid));
			this->resultado = (gcnew System::Windows::Forms::PictureBox());
			this->novoTeste = (gcnew System::Windows::Forms::Button());
			this->proximo = (gcnew System::Windows::Forms::Button());
			this->boxAutomato = (gcnew System::Windows::Forms::PictureBox());
			this->enviar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->boxImagemPorta = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxAutomato))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxImagemPorta))->BeginInit();
			this->SuspendLayout();
			// 
			// resultado
			// 
			this->resultado->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resultado->BackColor = System::Drawing::Color::Transparent;
			this->resultado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resultado.Image")));
			this->resultado->Location = System::Drawing::Point(877, 467);
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(267, 74);
			this->resultado->TabIndex = 20;
			this->resultado->TabStop = false;
			// 
			// novoTeste
			// 
			this->novoTeste->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->novoTeste->BackColor = System::Drawing::Color::Lime;
			this->novoTeste->FlatAppearance->BorderSize = 0;
			this->novoTeste->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->novoTeste->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->novoTeste->ForeColor = System::Drawing::Color::White;
			this->novoTeste->Location = System::Drawing::Point(888, 402);
			this->novoTeste->Name = L"novoTeste";
			this->novoTeste->Size = System::Drawing::Size(104, 45);
			this->novoTeste->TabIndex = 19;
			this->novoTeste->Text = L"Novo Teste";
			this->novoTeste->UseVisualStyleBackColor = false;
			this->novoTeste->Click += gcnew System::EventHandler(this, &TesteAutomatoTorneira::novoTeste_Click);
			// 
			// proximo
			// 
			this->proximo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->proximo->BackColor = System::Drawing::Color::Lime;
			this->proximo->FlatAppearance->BorderSize = 0;
			this->proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->proximo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->proximo->ForeColor = System::Drawing::Color::White;
			this->proximo->Location = System::Drawing::Point(1036, 402);
			this->proximo->Name = L"proximo";
			this->proximo->Size = System::Drawing::Size(99, 45);
			this->proximo->TabIndex = 18;
			this->proximo->Text = L"Pr�ximo";
			this->proximo->UseVisualStyleBackColor = false;
			this->proximo->Click += gcnew System::EventHandler(this, &TesteAutomatoTorneira::proximo_Click);
			// 
			// boxAutomato
			// 
			this->boxAutomato->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->boxAutomato->BackColor = System::Drawing::Color::Transparent;
			this->boxAutomato->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxAutomato.Image")));
			this->boxAutomato->Location = System::Drawing::Point(781, 177);
			this->boxAutomato->Name = L"boxAutomato";
			this->boxAutomato->Size = System::Drawing::Size(383, 198);
			this->boxAutomato->TabIndex = 17;
			this->boxAutomato->TabStop = false;
			// 
			// enviar
			// 
			this->enviar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->enviar->BackColor = System::Drawing::Color::Lime;
			this->enviar->FlatAppearance->BorderSize = 0;
			this->enviar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->enviar->ForeColor = System::Drawing::Color::White;
			this->enviar->Location = System::Drawing::Point(303, 513);
			this->enviar->Name = L"enviar";
			this->enviar->Size = System::Drawing::Size(189, 43);
			this->enviar->TabIndex = 16;
			this->enviar->Text = L"Enviar";
			this->enviar->UseVisualStyleBackColor = false;
			this->enviar->Click += gcnew System::EventHandler(this, &TesteAutomatoTorneira::enviar_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::MintCream;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(303, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 52);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Colocar a m�o";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TesteAutomatoTorneira::button2_Click);
			// 
			// boxImagemPorta
			// 
			this->boxImagemPorta->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->boxImagemPorta->BackColor = System::Drawing::Color::Transparent;
			this->boxImagemPorta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxImagemPorta.Image")));
			this->boxImagemPorta->Location = System::Drawing::Point(187, 177);
			this->boxImagemPorta->Name = L"boxImagemPorta";
			this->boxImagemPorta->Size = System::Drawing::Size(438, 251);
			this->boxImagemPorta->TabIndex = 13;
			this->boxImagemPorta->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->label1->Location = System::Drawing::Point(406, -62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 39);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Automato da porta autom�tica";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(338, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(530, 39);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Aut�mato da torneira com sensor";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(87, 458);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 45);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TesteAutomatoTorneira::button4_Click);
			// 
			// TesteAutomatoTorneira
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1218, 598);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->novoTeste);
			this->Controls->Add(this->proximo);
			this->Controls->Add(this->boxAutomato);
			this->Controls->Add(this->enviar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->boxImagemPorta);
			this->Controls->Add(this->label1);
			this->Name = L"TesteAutomatoTorneira";
			this->Text = L"TesteAutomatoTorneira";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TesteAutomatoTorneira::TesteAutomatoTorneira_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxAutomato))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxImagemPorta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Automato AF;

				
				 if (acionado){
					 setImagemTorneira(AF.getDiretorio() + "images/automatoTorneira/torneiraFechadaComMao.png");
					 acionado = false;
				 }
				 else if (!acionado)
				 {
					 setImagemTorneira(AF.getDiretorio() + "images/automatoTorneira/torneiraFechadaSemMao.png");
					 acionado =true;
				 }
				 
	}
private: System::Void enviar_Click(System::Object^  sender, System::EventArgs^  e) {

			 afAux = af;
			 setImagemEstado(afAux->imagem);

			 unsetImagemResultado();
			 enviar->Enabled = false;
			 enviar->Text = "Em processo...";
			 novoTeste->Enabled = true;
			 proximo->Enabled = true;
			 button2->Enabled = false;
			 
}
private: System::Void novoTeste_Click(System::Object^  sender, System::EventArgs^  e) {
			 Automato automato;
			 afAux = af;
			 setImagemTorneira(automato.getDiretorio() + "images/automatoTorneira/torneiraFechadaSemMao.png");
			 setImagemEstado(afAux->imagemInicial);
			 unsetImagemResultado();
			 enviar->Text = "Enviar";
			 enviar->Enabled = true;
			 proximo->Enabled = false;
			 button2->Enabled = true;
			 acionado = true;
			 
}
private: System::Void proximo_Click(System::Object^  sender, System::EventArgs^  e) {
			 Automato automato;
			 string palavra = getPalavra();
			 int tamanho = palavra.size();
			 bool rejeita = true;



			 for (int j = 0; j < 10; j++){
				 if (afAux->transicoes[j].simboloAceito == palavra[0]){

					 afAux = afAux->transicoes[j].link;
					 setImagemEstado(afAux->imagem);
					 rejeita = false;
					 break;
				 }
			 }
			 if (rejeita || afAux->isFinal == false){
				 
				 setImagemTorneira(automato.getDiretorio() + "images/automatoTorneira/torneiraFechadaSemMao.png");
				 setImagemResultado(automato.getDiretorio() + "images/automatoPorta/resultadoFechado.png");
				 proximo->Enabled = false;
			 }
			 if (afAux->isFinal == true){

				 setImagemTorneira(automato.getDiretorio() + "images/automatoTorneira/torneiraAbertaComMao.png");
				 setImagemResultado(automato.getDiretorio() + "images/automatoPorta/resultadoAberto.png");
				 proximo->Enabled = false;
			 }
}

private: System::Void TesteAutomatoTorneira_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Status = 0;
			 this->Visible = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 0;
			 this->Visible = false;
}
};
}

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
	/// Summary for TesteAutomatoPorta
	/// </summary>
	public ref class TesteAutomatoPorta : public System::Windows::Forms::Form
	{
	public:
		TesteAutomatoPorta(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Automato AF;
			Status = -1;
			af = AF.automato3();
			unsetImagemResultado();
			novoTeste->Enabled = false;
			proximo->Enabled = false;
			frente = false;
			retaguarda = false;
		}
		int getStatus();
		void setStatus(int);
		void setImagemPorta(string);
		void setImagemEstado(string);
		void unsetImagemResultado();
		void setImagemResultado(string);
		string getPalavra();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TesteAutomatoPorta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  boxImagemPorta;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  enviar;


	private: System::Windows::Forms::PictureBox^  boxAutomato;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		System::ComponentModel::Container ^components;
		int Status;
		bool frente;
		bool retaguarda;
		ponteiro af;
		ponteiro afAux;
		

	private: System::Windows::Forms::Button^  novoTeste;
	private: System::Windows::Forms::Button^  proximo;

	private: System::Windows::Forms::PictureBox^  resultado;
	private: System::Windows::Forms::Button^  button4;

			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TesteAutomatoPorta::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->boxImagemPorta = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->enviar = (gcnew System::Windows::Forms::Button());
			this->boxAutomato = (gcnew System::Windows::Forms::PictureBox());
			this->novoTeste = (gcnew System::Windows::Forms::Button());
			this->proximo = (gcnew System::Windows::Forms::Button());
			this->resultado = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxImagemPorta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxAutomato))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(429, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aut�mato da porta autom�tica";
			// 
			// boxImagemPorta
			// 
			this->boxImagemPorta->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->boxImagemPorta->BackColor = System::Drawing::Color::Transparent;
			this->boxImagemPorta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxImagemPorta.Image")));
			this->boxImagemPorta->Location = System::Drawing::Point(149, 186);
			this->boxImagemPorta->Name = L"boxImagemPorta";
			this->boxImagemPorta->Size = System::Drawing::Size(669, 339);
			this->boxImagemPorta->TabIndex = 1;
			this->boxImagemPorta->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::MintCream;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(239, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Pessoa na retaguarda";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::MintCream;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(371, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Pessoa na frente";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::button2_Click);
			// 
			// enviar
			// 
			this->enviar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->enviar->BackColor = System::Drawing::Color::Lime;
			this->enviar->FlatAppearance->BorderSize = 0;
			this->enviar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->enviar->ForeColor = System::Drawing::Color::White;
			this->enviar->Location = System::Drawing::Point(263, 546);
			this->enviar->Name = L"enviar";
			this->enviar->Size = System::Drawing::Size(189, 43);
			this->enviar->TabIndex = 4;
			this->enviar->Text = L"Enviar";
			this->enviar->UseVisualStyleBackColor = false;
			this->enviar->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::button3_Click);
			// 
			// boxAutomato
			// 
			this->boxAutomato->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->boxAutomato->BackColor = System::Drawing::Color::Transparent;
			this->boxAutomato->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxAutomato.Image")));
			this->boxAutomato->Location = System::Drawing::Point(772, 186);
			this->boxAutomato->Name = L"boxAutomato";
			this->boxAutomato->Size = System::Drawing::Size(398, 286);
			this->boxAutomato->TabIndex = 6;
			this->boxAutomato->TabStop = false;
			// 
			// novoTeste
			// 
			this->novoTeste->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->novoTeste->BackColor = System::Drawing::Color::Lime;
			this->novoTeste->FlatAppearance->BorderSize = 0;
			this->novoTeste->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->novoTeste->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->novoTeste->ForeColor = System::Drawing::Color::White;
			this->novoTeste->Location = System::Drawing::Point(877, 433);
			this->novoTeste->Name = L"novoTeste";
			this->novoTeste->Size = System::Drawing::Size(104, 45);
			this->novoTeste->TabIndex = 9;
			this->novoTeste->Text = L"Novo Teste";
			this->novoTeste->UseVisualStyleBackColor = false;
			this->novoTeste->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::novoTeste_Click);
			// 
			// proximo
			// 
			this->proximo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->proximo->BackColor = System::Drawing::Color::Lime;
			this->proximo->FlatAppearance->BorderSize = 0;
			this->proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->proximo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proximo->ForeColor = System::Drawing::Color::White;
			this->proximo->Location = System::Drawing::Point(1027, 433);
			this->proximo->Name = L"proximo";
			this->proximo->Size = System::Drawing::Size(99, 45);
			this->proximo->TabIndex = 8;
			this->proximo->Text = L"Pr�ximo";
			this->proximo->UseVisualStyleBackColor = false;
			this->proximo->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::proximo_Click);
			// 
			// resultado
			// 
			this->resultado->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resultado->BackColor = System::Drawing::Color::Transparent;
			this->resultado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resultado.Image")));
			this->resultado->Location = System::Drawing::Point(877, 515);
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(267, 74);
			this->resultado->TabIndex = 11;
			this->resultado->TabStop = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(80, 473);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 45);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Voltar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TesteAutomatoPorta::button4_Click);
			// 
			// TesteAutomatoPorta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1301, 621);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->novoTeste);
			this->Controls->Add(this->proximo);
			this->Controls->Add(this->boxAutomato);
			this->Controls->Add(this->enviar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->boxImagemPorta);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"TesteAutomatoPorta";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TesteAutomatoPorta";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TesteAutomatoPorta::TesteAutomatoPorta_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TesteAutomatoPorta::TesteAutomatoPorta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxImagemPorta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxAutomato))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Automato AF;
				 if (retaguarda && !frente){
					 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaNinguem.jpg");
					 retaguarda = false;
				 }
				 else if (retaguarda && frente){
					 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaFrente.jpg");
					 retaguarda = false;
				 }
				 else if (!retaguarda && !frente){
					 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaRetaguarda.jpg");
					 retaguarda = true;
				 }
				 else if (!retaguarda && frente){
					 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaAmbos.jpg");
					 retaguarda = true;
				 }
				 
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Automato AF;
			 
			 if (!retaguarda && frente){
				 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaNinguem.jpg");
				 frente = false;
			 }
			 else if (retaguarda && frente){
				 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaRetaguarda.jpg");
				 frente = false;
			 }
			 else if (!retaguarda && !frente){
				 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaFrente.jpg");
				 frente = true;
			 }
			 else if(retaguarda && !frente){
				 setImagemPorta(AF.getDiretorio() + "images/automatoPorta/portaFechadaAmbos.jpg");
				 frente = true;
			 }
}
private: System::Void TesteAutomatoPorta_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 Status = 0;
			 this->Visible = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 afAux = af;
			 setImagemEstado(afAux->imagem);

			 unsetImagemResultado();
			 enviar->Enabled = false;
			 enviar->Text = "Em processo...";
			 novoTeste->Enabled = true;
			 proximo->Enabled = true;
			 button2->Enabled = false;
			 button1->Enabled = false;

			 
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
				 setImagemPorta(automato.getDiretorio() + "images/automatoPorta/portaFechadaNinguem.jpg");
				 setImagemResultado(automato.getDiretorio() + "images/automatoPorta/resultadoFechado.png");
				 proximo->Enabled = false;
			 }
			 if (afAux->isFinal == true){
				 setImagemPorta(automato.getDiretorio() + "images/automatoPorta/portaAbertaNinguem.jpg");
				 setImagemResultado(automato.getDiretorio() + "images/automatoPorta/resultadoAberto.png");
				 proximo->Enabled = false;
			 }

}
private: System::Void novoTeste_Click(System::Object^  sender, System::EventArgs^  e) {
			 Automato automato;
			 afAux = af;
			 setImagemPorta(automato.getDiretorio() + "images/automatoPorta/portaFechadaNinguem.jpg");
			 setImagemEstado(afAux->imagemInicial);
			 unsetImagemResultado();
			 enviar->Text = "Enviar";
			 enviar->Enabled = true;
			 proximo->Enabled = false;
			 button2->Enabled = true;
			 button1->Enabled = true;
			 frente = false;
			 retaguarda = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Status = 0;
			 this->Visible = false;
}
private: System::Void TesteAutomatoPorta_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

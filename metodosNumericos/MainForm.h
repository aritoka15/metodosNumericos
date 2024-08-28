#pragma once
#include <vector>

namespace metodosNumericos {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		System::Collections::Generic::List<float>^ valores;
	private: System::Windows::Forms::Label^ Resultado;

	private: float divisor;

	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			valores = gcnew System::Collections::Generic::List<float>(); // Inicializar la lista de valores
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ Resolver1;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::NumericUpDown^ GradoEleccion1;


	private: System::Windows::Forms::Button^ clearButton1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ DivisorLabel;
	private: System::Windows::Forms::TextBox^ divisorBox;
	private: System::Windows::Forms::Button^ SaveButton;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Resolver1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Resultado = (gcnew System::Windows::Forms::Label());
			this->GradoEleccion1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->clearButton1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->DivisorLabel = (gcnew System::Windows::Forms::Label());
			this->divisorBox = (gcnew System::Windows::Forms::TextBox());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GradoEleccion1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(507, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Metodos Numericos";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese el grado de la ecuacion";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// Resolver1
			// 
			this->Resolver1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Resolver1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Resolver1->Location = System::Drawing::Point(315, 519);
			this->Resolver1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Resolver1->Name = L"Resolver1";
			this->Resolver1->Size = System::Drawing::Size(169, 23);
			this->Resolver1->TabIndex = 4;
			this->Resolver1->Text = L"Iniciar procedimiento";
			this->Resolver1->UseVisualStyleBackColor = true;
			this->Resolver1->Click += gcnew System::EventHandler(this, &MainForm::Resolver1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Resultado, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(537, 88);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 67)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(503, 67);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// Resultado
			// 
			this->Resultado->AutoSize = true;
			this->Resultado->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Resultado->Location = System::Drawing::Point(3, 0);
			this->Resultado->Name = L"Resultado";
			this->Resultado->Size = System::Drawing::Size(119, 20);
			this->Resultado->TabIndex = 2;
			this->Resultado->Text = L"Resultado :";
			// 
			// GradoEleccion1
			// 
			this->GradoEleccion1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GradoEleccion1->Location = System::Drawing::Point(331, 82);
			this->GradoEleccion1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GradoEleccion1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->GradoEleccion1->Name = L"GradoEleccion1";
			this->GradoEleccion1->Size = System::Drawing::Size(116, 22);
			this->GradoEleccion1->TabIndex = 7;
			this->GradoEleccion1->ValueChanged += gcnew System::EventHandler(this, &MainForm::GradoEleccion1_ValueChanged);
			// 
			// clearButton1
			// 
			this->clearButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->clearButton1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton1->Location = System::Drawing::Point(1094, 295);
			this->clearButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->clearButton1->Name = L"clearButton1";
			this->clearButton1->Size = System::Drawing::Size(84, 23);
			this->clearButton1->TabIndex = 8;
			this->clearButton1->Text = L"Clear";
			this->clearButton1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.00062F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				24.99812F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.00063F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.00063F)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(53, 192);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.9996F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.9996F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.9996F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.9996F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(431, 290);
			this->tableLayoutPanel2->TabIndex = 10;
			// 
			// DivisorLabel
			// 
			this->DivisorLabel->AutoSize = true;
			this->DivisorLabel->Font = (gcnew System::Drawing::Font(L"MS Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DivisorLabel->Location = System::Drawing::Point(22, 134);
			this->DivisorLabel->Name = L"DivisorLabel";
			this->DivisorLabel->Size = System::Drawing::Size(179, 17);
			this->DivisorLabel->TabIndex = 11;
			this->DivisorLabel->Text = L"Coloque el divisor:";
			this->DivisorLabel->Click += gcnew System::EventHandler(this, &MainForm::DivisorLabel_Click);
			// 
			// divisorBox
			// 
			this->divisorBox->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divisorBox->Location = System::Drawing::Point(209, 133);
			this->divisorBox->Name = L"divisorBox";
			this->divisorBox->Size = System::Drawing::Size(100, 22);
			this->divisorBox->TabIndex = 12;
			this->divisorBox->TextChanged += gcnew System::EventHandler(this, &MainForm::divisorBox_TextChanged);
			// 
			// SaveButton
			// 
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"MS Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveButton->Location = System::Drawing::Point(77, 519);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(200, 23);
			this->SaveButton->TabIndex = 13;
			this->SaveButton->Text = L"Guardar valores";
			this->SaveButton->UseVisualStyleBackColor = true;
			this->SaveButton->Click += gcnew System::EventHandler(this, &MainForm::SaveButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1215, 562);
			this->Controls->Add(this->SaveButton);
			this->Controls->Add(this->divisorBox);
			this->Controls->Add(this->DivisorLabel);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->clearButton1);
			this->Controls->Add(this->GradoEleccion1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Resolver1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"Metodos Numericos";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GradoEleccion1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


private: System::Void Resolver1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Comprobación de que la lista de valores y el divisor estén inicializados
	if (valores == nullptr || valores->Count == 0) {
		MessageBox::Show("Por favor, ingrese los coeficientes.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Verificar si el divisor es un número válido
	if (divisor == 0) {
		MessageBox::Show("El divisor no puede ser 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Inicializamos el primer valor
	float resultado = valores[0];

	// Comenzamos la división sintética
	for (int i = 1; i < valores->Count; i++) {
		resultado = resultado * divisor + valores[i];
	}

	// Verificamos el resultado
	if (resultado == 0) {
		//agrega resultado en una textbox
		TextBox^ textBox = gcnew TextBox();
		textBox->Size = System::Drawing::Size(150, 50);
		textBox->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12));
		textBox->Text = "El divisor es raiz";
		// ... (other textbox properties)
		tableLayoutPanel1->Controls->Add(textBox);
		//acaba agregado de resultado
		MessageBox::Show("El divisor es raíz", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		// Lógica para colorear en verde
	}
	else {
		//agrega resultado en una textbox
		TextBox^ textBox = gcnew TextBox();
		textBox->Size = System::Drawing::Size(100, 30);
		textBox->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12));
		textBox->Text = "El divisor no es raiz";
		// ... (other textbox properties)
		tableLayoutPanel1->Controls->Add(textBox);
		//acaba agregado de resultado
		MessageBox::Show("El divisor NO es raíz", "Resultado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		// Lógica para colorear en rojo
	}
}

private: System::Void mostrarCoeficientes_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void GradoEleccion1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// NumericUpDown control named GradoEleccion1
	{
		tableLayoutPanel2->Controls->Clear();

		int selectedValue = (int)GradoEleccion1->Value;
		selectedValue++;

		for (int i = 0; i < selectedValue; i++) {
			TextBox^ textBox = gcnew TextBox();
			// ... (other textbox properties)
			tableLayoutPanel2->Controls->Add(textBox);



		}


		int currentTextBoxCount = tableLayoutPanel2->Controls->Count;
		if (currentTextBoxCount > selectedValue) {
			for (int i = currentTextBoxCount - 1; i >= selectedValue; i--) {
				tableLayoutPanel2->Controls->RemoveAt(i);
			}
		}

	} 
} 
private: System::Void DivisorLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   

private: System::Void divisorBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (divisorBox != nullptr) {
		try {
			// Intentar convertir el texto a float
			float valor = float::Parse(divisorBox->Text);

			// Guardar el valor en la variable 'divisor'
			divisor = valor;

		}
		catch (FormatException^ ex) {
			// Si no es un número válido, puedes manejarlo aquí
			// Por ejemplo, mostrar un mensaje o resetear la caja de texto
			MessageBox::Show("Por favor, ingrese un número válido.", "Error de formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
			divisorBox->Clear(); // Limpiar el contenido de la caja de texto
		}
	}
}

private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

	// Iterar sobre los controles en tableLayoutPanel2
	for (int i = 0; i < tableLayoutPanel2->Controls->Count; i++) {
		TextBox^ textBox = dynamic_cast<TextBox^>(tableLayoutPanel2->Controls[i]);
		if (textBox != nullptr) {
			try {
				// Convertir el texto de la caja de texto en un float
				float valor = float::Parse(textBox->Text);
				valores->Add(valor);
			}
			catch (FormatException^ ex) {
				// Manejar el error en caso de que el valor no sea un número válido
				MessageBox::Show("Por favor ingrese un número válido.", "Error de formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
}
};
};


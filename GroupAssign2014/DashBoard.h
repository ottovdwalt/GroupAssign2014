#pragma once

namespace GroupAssign2014 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	public:
		DashBoard(void)
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
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStripDashboard;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  assetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ticketsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  usersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  maintenanceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  systemUsersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControlDashboard;
	private: System::Windows::Forms::TabPage^  tabTickets;
	private: System::Windows::Forms::TabPage^  tabAssets;
	private: System::Windows::Forms::TabPage^  btnUserCancel;



	private: System::Windows::Forms::ListView^  lvwTickets;
	private: System::Windows::Forms::ColumnHeader^  clmTicketRef;
	private: System::Windows::Forms::ColumnHeader^  clmTicketDate;
	private: System::Windows::Forms::ColumnHeader^  clmTicketsAssetRef;

	private: System::Windows::Forms::ColumnHeader^  clmTicketDescription;
	private: System::Windows::Forms::TextBox^  txtDescription;
	private: System::Windows::Forms::Label^  lblDescription;
	private: System::Windows::Forms::TextBox^  txtAssetRef;
	private: System::Windows::Forms::Label^  lblAssetRef;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::ListView^  lvwAssets;
	private: System::Windows::Forms::ColumnHeader^  clmAssetsAssetRef;
	private: System::Windows::Forms::ColumnHeader^  clmAssetType;
	private: System::Windows::Forms::ColumnHeader^  clmMake;
	private: System::Windows::Forms::ColumnHeader^  clmModel;
	private: System::Windows::Forms::ColumnHeader^  clmSerialNr;
	private: System::Windows::Forms::ColumnHeader^  clmStorage;
	private: System::Windows::Forms::ColumnHeader^  clmRAMQ;

	private: System::Windows::Forms::ColumnHeader^  clmProcessor;
	private: System::Windows::Forms::ListView^  lvwUsers;
	private: System::Windows::Forms::ColumnHeader^  clmNetworkUserName;
	private: System::Windows::Forms::ColumnHeader^  clmUserFirstName;
	private: System::Windows::Forms::ColumnHeader^  clmUserLastName;
	private: System::Windows::Forms::ColumnHeader^  clmDepartment;
	private: System::Windows::Forms::ColumnHeader^  clmLocation;
	private: System::Windows::Forms::ComboBox^  cmbRAMModule;
	private: System::Windows::Forms::Label^  lblTimes;
	private: System::Windows::Forms::NumericUpDown^  nudQuantityModules;
	private: System::Windows::Forms::Label^  lblRAM;
	private: System::Windows::Forms::ComboBox^  cmbStorage;
	private: System::Windows::Forms::Label^  lblStorage;
	private: System::Windows::Forms::TextBox^  txtSerialNumber;
	private: System::Windows::Forms::Label^  lblSerialNumber;
	private: System::Windows::Forms::ComboBox^  cmbModel;
	private: System::Windows::Forms::Label^  lblModel;
	private: System::Windows::Forms::ComboBox^  cmbMake;
	private: System::Windows::Forms::Label^  lblMake;
	private: System::Windows::Forms::ComboBox^  cmbAssetType;
	private: System::Windows::Forms::Label^  lblAssetType;
	private: System::Windows::Forms::ComboBox^  cmbProcessor;
	private: System::Windows::Forms::Label^  lblProcessor;
	private: System::Windows::Forms::ColumnHeader^  clmRAMModule;


	private: System::Windows::Forms::Button^  btnAssetSave;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtFirstName;
private: System::Windows::Forms::TextBox^  txtLastName;
private: System::Windows::Forms::ComboBox^  cmbLocation;
private: System::Windows::Forms::Label^  lblLocation;
private: System::Windows::Forms::ComboBox^  cmbDepartment;
private: System::Windows::Forms::Label^  lblDepartment;

private: System::Windows::Forms::Button^  btnUserSave;




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
			this->menuStripDashboard = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ticketsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->assetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maintenanceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->systemUsersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControlDashboard = (gcnew System::Windows::Forms::TabControl());
			this->tabTickets = (gcnew System::Windows::Forms::TabPage());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->txtAssetRef = (gcnew System::Windows::Forms::TextBox());
			this->lblAssetRef = (gcnew System::Windows::Forms::Label());
			this->lvwTickets = (gcnew System::Windows::Forms::ListView());
			this->clmTicketRef = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmTicketDate = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmTicketsAssetRef = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmTicketDescription = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabAssets = (gcnew System::Windows::Forms::TabPage());
			this->btnAssetSave = (gcnew System::Windows::Forms::Button());
			this->cmbProcessor = (gcnew System::Windows::Forms::ComboBox());
			this->lblProcessor = (gcnew System::Windows::Forms::Label());
			this->cmbRAMModule = (gcnew System::Windows::Forms::ComboBox());
			this->lblTimes = (gcnew System::Windows::Forms::Label());
			this->nudQuantityModules = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblRAM = (gcnew System::Windows::Forms::Label());
			this->cmbStorage = (gcnew System::Windows::Forms::ComboBox());
			this->lblStorage = (gcnew System::Windows::Forms::Label());
			this->txtSerialNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblSerialNumber = (gcnew System::Windows::Forms::Label());
			this->cmbModel = (gcnew System::Windows::Forms::ComboBox());
			this->lblModel = (gcnew System::Windows::Forms::Label());
			this->cmbMake = (gcnew System::Windows::Forms::ComboBox());
			this->lblMake = (gcnew System::Windows::Forms::Label());
			this->cmbAssetType = (gcnew System::Windows::Forms::ComboBox());
			this->lblAssetType = (gcnew System::Windows::Forms::Label());
			this->lvwAssets = (gcnew System::Windows::Forms::ListView());
			this->clmAssetsAssetRef = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmAssetType = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmMake = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmModel = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmSerialNr = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmStorage = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmRAMQ = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmRAMModule = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmProcessor = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnUserCancel = (gcnew System::Windows::Forms::TabPage());
			this->btnUserSave = (gcnew System::Windows::Forms::Button());
			this->cmbLocation = (gcnew System::Windows::Forms::ComboBox());
			this->lblLocation = (gcnew System::Windows::Forms::Label());
			this->cmbDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->lblDepartment = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lvwUsers = (gcnew System::Windows::Forms::ListView());
			this->clmNetworkUserName = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmUserFirstName = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmUserLastName = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmDepartment = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmLocation = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStripDashboard->SuspendLayout();
			this->tabControlDashboard->SuspendLayout();
			this->tabTickets->SuspendLayout();
			this->tabAssets->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQuantityModules))->BeginInit();
			this->btnUserCancel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStripDashboard
			// 
			this->menuStripDashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->menuStripDashboard->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->ticketsToolStripMenuItem, this->assetToolStripMenuItem, this->usersToolStripMenuItem, this->maintenanceToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStripDashboard->Location = System::Drawing::Point(0, 0);
			this->menuStripDashboard->Name = L"menuStripDashboard";
			this->menuStripDashboard->Size = System::Drawing::Size(930, 24);
			this->menuStripDashboard->TabIndex = 0;
			this->menuStripDashboard->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->exitToolStripMenuItem->Text = L"&Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &DashBoard::exitToolStripMenuItem_Click);
			// 
			// ticketsToolStripMenuItem
			// 
			this->ticketsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem1,
					this->editToolStripMenuItem1, this->deleteToolStripMenuItem1
			});
			this->ticketsToolStripMenuItem->Name = L"ticketsToolStripMenuItem";
			this->ticketsToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->ticketsToolStripMenuItem->Text = L"&Tickets";
			// 
			// addToolStripMenuItem1
			// 
			this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
			this->addToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->addToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->addToolStripMenuItem1->Text = L"Add";
			// 
			// editToolStripMenuItem1
			// 
			this->editToolStripMenuItem1->Name = L"editToolStripMenuItem1";
			this->editToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->editToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->editToolStripMenuItem1->Text = L"Edit";
			// 
			// deleteToolStripMenuItem1
			// 
			this->deleteToolStripMenuItem1->Name = L"deleteToolStripMenuItem1";
			this->deleteToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->deleteToolStripMenuItem1->Size = System::Drawing::Size(149, 22);
			this->deleteToolStripMenuItem1->Text = L"Delete";
			// 
			// assetToolStripMenuItem
			// 
			this->assetToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem,
					this->editToolStripMenuItem, this->deleteToolStripMenuItem
			});
			this->assetToolStripMenuItem->Name = L"assetToolStripMenuItem";
			this->assetToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->assetToolStripMenuItem->Text = L"&Assets";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->addToolStripMenuItem->Text = L"Add";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// usersToolStripMenuItem
			// 
			this->usersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem2,
					this->editToolStripMenuItem2, this->deleteToolStripMenuItem2
			});
			this->usersToolStripMenuItem->Name = L"usersToolStripMenuItem";
			this->usersToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->usersToolStripMenuItem->Text = L"&Users";
			// 
			// addToolStripMenuItem2
			// 
			this->addToolStripMenuItem2->Name = L"addToolStripMenuItem2";
			this->addToolStripMenuItem2->Size = System::Drawing::Size(107, 22);
			this->addToolStripMenuItem2->Text = L"Add";
			// 
			// editToolStripMenuItem2
			// 
			this->editToolStripMenuItem2->Name = L"editToolStripMenuItem2";
			this->editToolStripMenuItem2->Size = System::Drawing::Size(107, 22);
			this->editToolStripMenuItem2->Text = L"Edit";
			// 
			// deleteToolStripMenuItem2
			// 
			this->deleteToolStripMenuItem2->Name = L"deleteToolStripMenuItem2";
			this->deleteToolStripMenuItem2->Size = System::Drawing::Size(107, 22);
			this->deleteToolStripMenuItem2->Text = L"Delete";
			// 
			// maintenanceToolStripMenuItem
			// 
			this->maintenanceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->systemUsersToolStripMenuItem });
			this->maintenanceToolStripMenuItem->Name = L"maintenanceToolStripMenuItem";
			this->maintenanceToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->maintenanceToolStripMenuItem->Text = L"&Maintenance";
			// 
			// systemUsersToolStripMenuItem
			// 
			this->systemUsersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addToolStripMenuItem3,
					this->editToolStripMenuItem3, this->deleteToolStripMenuItem3
			});
			this->systemUsersToolStripMenuItem->Name = L"systemUsersToolStripMenuItem";
			this->systemUsersToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->systemUsersToolStripMenuItem->Text = L"System Users";
			// 
			// addToolStripMenuItem3
			// 
			this->addToolStripMenuItem3->Name = L"addToolStripMenuItem3";
			this->addToolStripMenuItem3->Size = System::Drawing::Size(107, 22);
			this->addToolStripMenuItem3->Text = L"Add";
			// 
			// editToolStripMenuItem3
			// 
			this->editToolStripMenuItem3->Name = L"editToolStripMenuItem3";
			this->editToolStripMenuItem3->Size = System::Drawing::Size(107, 22);
			this->editToolStripMenuItem3->Text = L"Edit";
			// 
			// deleteToolStripMenuItem3
			// 
			this->deleteToolStripMenuItem3->Name = L"deleteToolStripMenuItem3";
			this->deleteToolStripMenuItem3->Size = System::Drawing::Size(107, 22);
			this->deleteToolStripMenuItem3->Text = L"Delete";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// tabControlDashboard
			// 
			this->tabControlDashboard->Controls->Add(this->tabTickets);
			this->tabControlDashboard->Controls->Add(this->tabAssets);
			this->tabControlDashboard->Controls->Add(this->btnUserCancel);
			this->tabControlDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControlDashboard->Location = System::Drawing::Point(0, 24);
			this->tabControlDashboard->Name = L"tabControlDashboard";
			this->tabControlDashboard->SelectedIndex = 0;
			this->tabControlDashboard->Size = System::Drawing::Size(930, 343);
			this->tabControlDashboard->TabIndex = 1;
			// 
			// tabTickets
			// 
			this->tabTickets->BackColor = System::Drawing::Color::SteelBlue;
			this->tabTickets->Controls->Add(this->btnCreate);
			this->tabTickets->Controls->Add(this->txtDescription);
			this->tabTickets->Controls->Add(this->lblDescription);
			this->tabTickets->Controls->Add(this->txtAssetRef);
			this->tabTickets->Controls->Add(this->lblAssetRef);
			this->tabTickets->Controls->Add(this->lvwTickets);
			this->tabTickets->Location = System::Drawing::Point(4, 22);
			this->tabTickets->Name = L"tabTickets";
			this->tabTickets->Padding = System::Windows::Forms::Padding(3);
			this->tabTickets->Size = System::Drawing::Size(922, 317);
			this->tabTickets->TabIndex = 0;
			this->tabTickets->Text = L"Tickets";
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(466, 267);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(75, 23);
			this->btnCreate->TabIndex = 5;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(143, 226);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(277, 75);
			this->txtDescription->TabIndex = 4;
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->Location = System::Drawing::Point(52, 229);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(60, 13);
			this->lblDescription->TabIndex = 3;
			this->lblDescription->Text = L"Description";
			// 
			// txtAssetRef
			// 
			this->txtAssetRef->Location = System::Drawing::Point(143, 190);
			this->txtAssetRef->Name = L"txtAssetRef";
			this->txtAssetRef->Size = System::Drawing::Size(100, 20);
			this->txtAssetRef->TabIndex = 2;
			// 
			// lblAssetRef
			// 
			this->lblAssetRef->AutoSize = true;
			this->lblAssetRef->Location = System::Drawing::Point(26, 193);
			this->lblAssetRef->Name = L"lblAssetRef";
			this->lblAssetRef->Size = System::Drawing::Size(86, 13);
			this->lblAssetRef->TabIndex = 1;
			this->lblAssetRef->Text = L"Asset Reference";
			// 
			// lvwTickets
			// 
			this->lvwTickets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->clmTicketRef, this->clmTicketDate,
					this->clmTicketsAssetRef, this->clmTicketDescription
			});
			this->lvwTickets->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvwTickets->FullRowSelect = true;
			this->lvwTickets->GridLines = true;
			this->lvwTickets->Location = System::Drawing::Point(3, 3);
			this->lvwTickets->Name = L"lvwTickets";
			this->lvwTickets->Size = System::Drawing::Size(916, 175);
			this->lvwTickets->TabIndex = 0;
			this->lvwTickets->UseCompatibleStateImageBehavior = false;
			this->lvwTickets->View = System::Windows::Forms::View::Details;
			// 
			// clmTicketRef
			// 
			this->clmTicketRef->Text = L"Ticket Reference";
			this->clmTicketRef->Width = 102;
			// 
			// clmTicketDate
			// 
			this->clmTicketDate->Text = L"Date";
			this->clmTicketDate->Width = 100;
			// 
			// clmTicketsAssetRef
			// 
			this->clmTicketsAssetRef->Text = L"Asset Reference";
			this->clmTicketsAssetRef->Width = 99;
			// 
			// clmTicketDescription
			// 
			this->clmTicketDescription->Text = L"Description";
			this->clmTicketDescription->Width = 242;
			// 
			// tabAssets
			// 
			this->tabAssets->BackColor = System::Drawing::Color::SteelBlue;
			this->tabAssets->Controls->Add(this->btnAssetSave);
			this->tabAssets->Controls->Add(this->cmbProcessor);
			this->tabAssets->Controls->Add(this->lblProcessor);
			this->tabAssets->Controls->Add(this->cmbRAMModule);
			this->tabAssets->Controls->Add(this->lblTimes);
			this->tabAssets->Controls->Add(this->nudQuantityModules);
			this->tabAssets->Controls->Add(this->lblRAM);
			this->tabAssets->Controls->Add(this->cmbStorage);
			this->tabAssets->Controls->Add(this->lblStorage);
			this->tabAssets->Controls->Add(this->txtSerialNumber);
			this->tabAssets->Controls->Add(this->lblSerialNumber);
			this->tabAssets->Controls->Add(this->cmbModel);
			this->tabAssets->Controls->Add(this->lblModel);
			this->tabAssets->Controls->Add(this->cmbMake);
			this->tabAssets->Controls->Add(this->lblMake);
			this->tabAssets->Controls->Add(this->cmbAssetType);
			this->tabAssets->Controls->Add(this->lblAssetType);
			this->tabAssets->Controls->Add(this->lvwAssets);
			this->tabAssets->Location = System::Drawing::Point(4, 22);
			this->tabAssets->Name = L"tabAssets";
			this->tabAssets->Padding = System::Windows::Forms::Padding(3);
			this->tabAssets->Size = System::Drawing::Size(922, 317);
			this->tabAssets->TabIndex = 1;
			this->tabAssets->Text = L"Assets";
			// 
			// btnAssetSave
			// 
			this->btnAssetSave->Location = System::Drawing::Point(801, 272);
			this->btnAssetSave->Name = L"btnAssetSave";
			this->btnAssetSave->Size = System::Drawing::Size(75, 23);
			this->btnAssetSave->TabIndex = 17;
			this->btnAssetSave->Text = L"Save";
			this->btnAssetSave->UseVisualStyleBackColor = true;
			// 
			// cmbProcessor
			// 
			this->cmbProcessor->FormattingEnabled = true;
			this->cmbProcessor->Location = System::Drawing::Point(681, 203);
			this->cmbProcessor->Name = L"cmbProcessor";
			this->cmbProcessor->Size = System::Drawing::Size(195, 21);
			this->cmbProcessor->TabIndex = 16;
			// 
			// lblProcessor
			// 
			this->lblProcessor->AutoSize = true;
			this->lblProcessor->Location = System::Drawing::Point(621, 207);
			this->lblProcessor->Name = L"lblProcessor";
			this->lblProcessor->Size = System::Drawing::Size(54, 13);
			this->lblProcessor->TabIndex = 15;
			this->lblProcessor->Text = L"Processor";
			// 
			// cmbRAMModule
			// 
			this->cmbRAMModule->FormattingEnabled = true;
			this->cmbRAMModule->Location = System::Drawing::Point(417, 274);
			this->cmbRAMModule->Name = L"cmbRAMModule";
			this->cmbRAMModule->Size = System::Drawing::Size(121, 21);
			this->cmbRAMModule->TabIndex = 14;
			// 
			// lblTimes
			// 
			this->lblTimes->AutoSize = true;
			this->lblTimes->Location = System::Drawing::Point(397, 279);
			this->lblTimes->Name = L"lblTimes";
			this->lblTimes->Size = System::Drawing::Size(14, 13);
			this->lblTimes->TabIndex = 13;
			this->lblTimes->Text = L"X";
			// 
			// nudQuantityModules
			// 
			this->nudQuantityModules->Location = System::Drawing::Point(358, 275);
			this->nudQuantityModules->Name = L"nudQuantityModules";
			this->nudQuantityModules->Size = System::Drawing::Size(33, 20);
			this->nudQuantityModules->TabIndex = 12;
			// 
			// lblRAM
			// 
			this->lblRAM->AutoSize = true;
			this->lblRAM->Location = System::Drawing::Point(321, 279);
			this->lblRAM->Name = L"lblRAM";
			this->lblRAM->Size = System::Drawing::Size(31, 13);
			this->lblRAM->TabIndex = 11;
			this->lblRAM->Text = L"RAM";
			// 
			// cmbStorage
			// 
			this->cmbStorage->FormattingEnabled = true;
			this->cmbStorage->Location = System::Drawing::Point(358, 239);
			this->cmbStorage->Name = L"cmbStorage";
			this->cmbStorage->Size = System::Drawing::Size(180, 21);
			this->cmbStorage->TabIndex = 10;
			// 
			// lblStorage
			// 
			this->lblStorage->AutoSize = true;
			this->lblStorage->Location = System::Drawing::Point(308, 242);
			this->lblStorage->Name = L"lblStorage";
			this->lblStorage->Size = System::Drawing::Size(44, 13);
			this->lblStorage->TabIndex = 9;
			this->lblStorage->Text = L"Storage";
			// 
			// txtSerialNumber
			// 
			this->txtSerialNumber->Location = System::Drawing::Point(358, 204);
			this->txtSerialNumber->Name = L"txtSerialNumber";
			this->txtSerialNumber->Size = System::Drawing::Size(180, 20);
			this->txtSerialNumber->TabIndex = 8;
			// 
			// lblSerialNumber
			// 
			this->lblSerialNumber->AutoSize = true;
			this->lblSerialNumber->Location = System::Drawing::Point(279, 207);
			this->lblSerialNumber->Name = L"lblSerialNumber";
			this->lblSerialNumber->Size = System::Drawing::Size(73, 13);
			this->lblSerialNumber->TabIndex = 7;
			this->lblSerialNumber->Text = L"Serial Number";
			// 
			// cmbModel
			// 
			this->cmbModel->FormattingEnabled = true;
			this->cmbModel->Location = System::Drawing::Point(82, 274);
			this->cmbModel->Name = L"cmbModel";
			this->cmbModel->Size = System::Drawing::Size(144, 21);
			this->cmbModel->TabIndex = 6;
			// 
			// lblModel
			// 
			this->lblModel->AutoSize = true;
			this->lblModel->Location = System::Drawing::Point(40, 277);
			this->lblModel->Name = L"lblModel";
			this->lblModel->Size = System::Drawing::Size(36, 13);
			this->lblModel->TabIndex = 5;
			this->lblModel->Text = L"Model";
			// 
			// cmbMake
			// 
			this->cmbMake->FormattingEnabled = true;
			this->cmbMake->Location = System::Drawing::Point(82, 237);
			this->cmbMake->Name = L"cmbMake";
			this->cmbMake->Size = System::Drawing::Size(144, 21);
			this->cmbMake->TabIndex = 4;
			// 
			// lblMake
			// 
			this->lblMake->AutoSize = true;
			this->lblMake->Location = System::Drawing::Point(42, 240);
			this->lblMake->Name = L"lblMake";
			this->lblMake->Size = System::Drawing::Size(34, 13);
			this->lblMake->TabIndex = 3;
			this->lblMake->Text = L"Make";
			// 
			// cmbAssetType
			// 
			this->cmbAssetType->FormattingEnabled = true;
			this->cmbAssetType->Location = System::Drawing::Point(82, 203);
			this->cmbAssetType->Name = L"cmbAssetType";
			this->cmbAssetType->Size = System::Drawing::Size(144, 21);
			this->cmbAssetType->TabIndex = 2;
			// 
			// lblAssetType
			// 
			this->lblAssetType->AutoSize = true;
			this->lblAssetType->Location = System::Drawing::Point(16, 206);
			this->lblAssetType->Name = L"lblAssetType";
			this->lblAssetType->Size = System::Drawing::Size(60, 13);
			this->lblAssetType->TabIndex = 1;
			this->lblAssetType->Text = L"Asset Type";
			// 
			// lvwAssets
			// 
			this->lvwAssets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->clmAssetsAssetRef,
					this->clmAssetType, this->clmMake, this->clmModel, this->clmSerialNr, this->clmStorage, this->clmRAMQ, this->clmRAMModule, this->clmProcessor
			});
			this->lvwAssets->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvwAssets->FullRowSelect = true;
			this->lvwAssets->GridLines = true;
			this->lvwAssets->Location = System::Drawing::Point(3, 3);
			this->lvwAssets->Name = L"lvwAssets";
			this->lvwAssets->Size = System::Drawing::Size(916, 175);
			this->lvwAssets->TabIndex = 0;
			this->lvwAssets->UseCompatibleStateImageBehavior = false;
			this->lvwAssets->View = System::Windows::Forms::View::Details;
			// 
			// clmAssetsAssetRef
			// 
			this->clmAssetsAssetRef->Text = L"Asset Reference";
			this->clmAssetsAssetRef->Width = 101;
			// 
			// clmAssetType
			// 
			this->clmAssetType->Text = L"Asset Type";
			this->clmAssetType->Width = 100;
			// 
			// clmMake
			// 
			this->clmMake->Text = L"Make";
			this->clmMake->Width = 99;
			// 
			// clmModel
			// 
			this->clmModel->Text = L"Model";
			this->clmModel->Width = 111;
			// 
			// clmSerialNr
			// 
			this->clmSerialNr->Text = L"Serial Number";
			this->clmSerialNr->Width = 120;
			// 
			// clmStorage
			// 
			this->clmStorage->Text = L"Storage";
			this->clmStorage->Width = 86;
			// 
			// clmRAMQ
			// 
			this->clmRAMQ->Text = L"RAM Quantity";
			this->clmRAMQ->Width = 81;
			// 
			// clmRAMModule
			// 
			this->clmRAMModule->Text = L"RAM Module";
			this->clmRAMModule->Width = 93;
			// 
			// clmProcessor
			// 
			this->clmProcessor->Text = L"Processor";
			this->clmProcessor->Width = 109;
			// 
			// btnUserCancel
			// 
			this->btnUserCancel->BackColor = System::Drawing::Color::SteelBlue;
			this->btnUserCancel->Controls->Add(this->btnUserSave);
			this->btnUserCancel->Controls->Add(this->cmbLocation);
			this->btnUserCancel->Controls->Add(this->lblLocation);
			this->btnUserCancel->Controls->Add(this->cmbDepartment);
			this->btnUserCancel->Controls->Add(this->lblDepartment);
			this->btnUserCancel->Controls->Add(this->txtLastName);
			this->btnUserCancel->Controls->Add(this->label2);
			this->btnUserCancel->Controls->Add(this->txtFirstName);
			this->btnUserCancel->Controls->Add(this->label1);
			this->btnUserCancel->Controls->Add(this->txtUsername);
			this->btnUserCancel->Controls->Add(this->lblUsername);
			this->btnUserCancel->Controls->Add(this->lvwUsers);
			this->btnUserCancel->Location = System::Drawing::Point(4, 22);
			this->btnUserCancel->Name = L"btnUserCancel";
			this->btnUserCancel->Padding = System::Windows::Forms::Padding(3);
			this->btnUserCancel->Size = System::Drawing::Size(922, 317);
			this->btnUserCancel->TabIndex = 2;
			this->btnUserCancel->Text = L"Users";
			// 
			// btnUserSave
			// 
			this->btnUserSave->Location = System::Drawing::Point(506, 282);
			this->btnUserSave->Name = L"btnUserSave";
			this->btnUserSave->Size = System::Drawing::Size(75, 23);
			this->btnUserSave->TabIndex = 11;
			this->btnUserSave->Text = L"Save";
			this->btnUserSave->UseVisualStyleBackColor = true;
			// 
			// cmbLocation
			// 
			this->cmbLocation->FormattingEnabled = true;
			this->cmbLocation->Location = System::Drawing::Point(427, 242);
			this->cmbLocation->Name = L"cmbLocation";
			this->cmbLocation->Size = System::Drawing::Size(154, 21);
			this->cmbLocation->TabIndex = 10;
			// 
			// lblLocation
			// 
			this->lblLocation->AutoSize = true;
			this->lblLocation->Location = System::Drawing::Point(354, 245);
			this->lblLocation->Name = L"lblLocation";
			this->lblLocation->Size = System::Drawing::Size(48, 13);
			this->lblLocation->TabIndex = 9;
			this->lblLocation->Text = L"Location";
			// 
			// cmbDepartment
			// 
			this->cmbDepartment->FormattingEnabled = true;
			this->cmbDepartment->Location = System::Drawing::Point(427, 201);
			this->cmbDepartment->Name = L"cmbDepartment";
			this->cmbDepartment->Size = System::Drawing::Size(154, 21);
			this->cmbDepartment->TabIndex = 8;
			// 
			// lblDepartment
			// 
			this->lblDepartment->AutoSize = true;
			this->lblDepartment->Location = System::Drawing::Point(344, 207);
			this->lblDepartment->Name = L"lblDepartment";
			this->lblDepartment->Size = System::Drawing::Size(62, 13);
			this->lblDepartment->TabIndex = 7;
			this->lblDepartment->Text = L"Department";
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(141, 284);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(116, 20);
			this->txtLastName->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 287);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Last Name";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(140, 243);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(117, 20);
			this->txtFirstName->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(140, 201);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(117, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(24, 204);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(98, 13);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Network Username";
			// 
			// lvwUsers
			// 
			this->lvwUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->clmNetworkUserName,
					this->clmUserFirstName, this->clmUserLastName, this->clmDepartment, this->clmLocation
			});
			this->lvwUsers->Dock = System::Windows::Forms::DockStyle::Top;
			this->lvwUsers->FullRowSelect = true;
			this->lvwUsers->GridLines = true;
			this->lvwUsers->Location = System::Drawing::Point(3, 3);
			this->lvwUsers->Name = L"lvwUsers";
			this->lvwUsers->Size = System::Drawing::Size(916, 175);
			this->lvwUsers->TabIndex = 0;
			this->lvwUsers->UseCompatibleStateImageBehavior = false;
			this->lvwUsers->View = System::Windows::Forms::View::Details;
			// 
			// clmNetworkUserName
			// 
			this->clmNetworkUserName->Text = L"Username";
			this->clmNetworkUserName->Width = 76;
			// 
			// clmUserFirstName
			// 
			this->clmUserFirstName->Text = L"First Name";
			this->clmUserFirstName->Width = 104;
			// 
			// clmUserLastName
			// 
			this->clmUserLastName->Text = L"Last Name";
			this->clmUserLastName->Width = 136;
			// 
			// clmDepartment
			// 
			this->clmDepartment->Text = L"Department";
			this->clmDepartment->Width = 146;
			// 
			// clmLocation
			// 
			this->clmLocation->Text = L"Location";
			this->clmLocation->Width = 147;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(930, 367);
			this->Controls->Add(this->tabControlDashboard);
			this->Controls->Add(this->menuStripDashboard);
			this->MainMenuStrip = this->menuStripDashboard;
			this->Name = L"DashBoard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStripDashboard->ResumeLayout(false);
			this->menuStripDashboard->PerformLayout();
			this->tabControlDashboard->ResumeLayout(false);
			this->tabTickets->ResumeLayout(false);
			this->tabTickets->PerformLayout();
			this->tabAssets->ResumeLayout(false);
			this->tabAssets->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQuantityModules))->EndInit();
			this->btnUserCancel->ResumeLayout(false);
			this->btnUserCancel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Windows::Forms::DialogResult antwoord;
				 antwoord = MessageBox::Show("You are about to exit the system.  Are you sure?", "Exit?", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				 if (antwoord == Windows::Forms::DialogResult::Yes)
					 this->Close();
	}

};
}

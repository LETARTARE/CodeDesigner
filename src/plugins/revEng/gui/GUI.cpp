///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  6 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

#include "res/gui/collapse.xpm"
#include "res/gui/scriptimport.xpm"

///////////////////////////////////////////////////////////////////////////

_RevEngPanel::_RevEngPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	this->SetExtraStyle( wxWS_EX_BLOCK_EVENTS );

	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );

	m_splitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter->Connect( wxEVT_IDLE, wxIdleEventHandler( _RevEngPanel::m_splitterOnIdle ), NULL, this );

	m_panelFiles = new wxPanel( m_splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* panelSizerFiles;
	panelSizerFiles = new wxFlexGridSizer( 0, 1, 0, 0 );
	panelSizerFiles->AddGrowableCol( 0 );
	panelSizerFiles->AddGrowableRow( 2 );
	panelSizerFiles->SetFlexibleDirection( wxBOTH );
	panelSizerFiles->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1 = new wxStaticText( m_panelFiles, wxID_ANY, _("Choose source files:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	panelSizerFiles->Add( m_staticText1, 0, wxTOP|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* buttonSizer;
	buttonSizer = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAddFiles = new wxButton( m_panelFiles, IDB_ADDFILES, _("Add files"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonSizer->Add( m_buttonAddFiles, 1, wxALL, 5 );

	m_buttonRemoveFiles = new wxButton( m_panelFiles, IDB_REMOVEFILES, _("Remove selected"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonSizer->Add( m_buttonRemoveFiles, 1, wxTOP|wxBOTTOM|wxRIGHT, 5 );


	panelSizerFiles->Add( buttonSizer, 0, wxEXPAND, 5 );

	wxArrayString m_checkListFilesChoices;
	m_checkListFiles = new wxCheckListBox( m_panelFiles, wxID_ANY, wxDefaultPosition, wxSize( -1,100 ), m_checkListFilesChoices, wxLB_ALWAYS_SB|wxLB_MULTIPLE );
	m_checkListFiles->SetToolTip( _("Files to be parsed by CTAGS.") );
	m_checkListFiles->SetMinSize( wxSize( -1,100 ) );

	m_menuFiles = new wxMenu();
	wxMenuItem* menuFilesAdd;
	menuFilesAdd = new wxMenuItem( m_menuFiles, IDM_FILES_ADD, wxString( _("Add files") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesAdd );

	wxMenuItem* menuFilesRemove;
	menuFilesRemove = new wxMenuItem( m_menuFiles, IDM_FILES_REMOVE, wxString( _("Remove selected files") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesRemove );

	wxMenuItem* menuFilesRemoveAllFiles;
	menuFilesRemoveAllFiles = new wxMenuItem( m_menuFiles, IDM_FILES_REMOVE_ALL, wxString( _("Remove all files") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesRemoveAllFiles );

	m_menuFiles->AppendSeparator();

	wxMenuItem* menuFilesSelectAll;
	menuFilesSelectAll = new wxMenuItem( m_menuFiles, IDM_FILES_SELECTALL, wxString( _("Select all") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesSelectAll );

	wxMenuItem* menuFilesDeselectAll;
	menuFilesDeselectAll = new wxMenuItem( m_menuFiles, IDM_FILES_DESELECTALL, wxString( _("Deselect all") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesDeselectAll );

	m_menuFiles->AppendSeparator();

	wxMenuItem* menuFilesCheckAll;
	menuFilesCheckAll = new wxMenuItem( m_menuFiles, IDM_FILES_CHECKALL, wxString( _("Check all") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesCheckAll );

	wxMenuItem* menuFilesUncheckAll;
	menuFilesUncheckAll = new wxMenuItem( m_menuFiles, IDM_FILES_UNCHECKALL, wxString( _("Uncheck all") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuFiles->Append( menuFilesUncheckAll );

	m_checkListFiles->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( _RevEngPanel::m_checkListFilesOnContextMenu ), NULL, this );

	panelSizerFiles->Add( m_checkListFiles, 1, wxEXPAND|wxBOTTOM, 5 );

	m_staticText3 = new wxStaticText( m_panelFiles, wxID_ANY, _("Identifiers:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	panelSizerFiles->Add( m_staticText3, 0, wxALL, 5 );

	m_textIdentifiers = new wxTextCtrl( m_panelFiles, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,50 ), wxTE_MULTILINE );
	m_textIdentifiers->SetMaxLength( 0 );
	m_textIdentifiers->SetToolTip( _("Specifies a list of identifiers which are to be specially handled by CTAGS while parsing C and C++ source files.") );
	m_textIdentifiers->SetMinSize( wxSize( -1,50 ) );

	panelSizerFiles->Add( m_textIdentifiers, 0, wxEXPAND|wxBOTTOM, 5 );

	m_buttonParse = new wxButton( m_panelFiles, IDB_PARSE, _("Parse checked files"), wxDefaultPosition, wxDefaultSize, 0 );
	panelSizerFiles->Add( m_buttonParse, 1, wxALL|wxEXPAND, 5 );


	m_panelFiles->SetSizer( panelSizerFiles );
	m_panelFiles->Layout();
	panelSizerFiles->Fit( m_panelFiles );
	m_panelSymbols = new wxPanel( m_splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* panelSizerSymbols;
	panelSizerSymbols = new wxFlexGridSizer( 0, 1, 0, 0 );
	panelSizerSymbols->AddGrowableCol( 0 );
	panelSizerSymbols->AddGrowableRow( 2 );
	panelSizerSymbols->SetFlexibleDirection( wxBOTH );
	panelSizerSymbols->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2 = new wxStaticText( m_panelSymbols, wxID_ANY, _("Found symbols:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	panelSizerSymbols->Add( m_staticText2, 0, wxTOP|wxRIGHT|wxLEFT, 5 );

	m_toolBarSymbols = new wxToolBar( m_panelSymbols, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL );
	m_toolExpand = m_toolBarSymbols->AddTool( IDT_SYMBOLS_EXPANDALL, _("Expand/Collapse All"), wxBitmap( collapse_xpm ), wxNullBitmap, wxITEM_NORMAL, _("Expand/collapse all tree items"), wxEmptyString, NULL );

	m_toolBarSymbols->AddSeparator();

	m_toolImportSymbols = m_toolBarSymbols->AddTool( IDT_SYMBOLS_IMPORT, _("Import symbols"), wxBitmap( scriptimport_xpm ), wxNullBitmap, wxITEM_NORMAL, _("Import selected symbols"), wxEmptyString, NULL );

	m_checkBoxMembers = new wxCheckBox( m_toolBarSymbols, wxID_ANY, _("Members "), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxMembers->SetToolTip( _("Import class members") );

	m_toolBarSymbols->AddControl( m_checkBoxMembers );
	m_checkBoxBodies = new wxCheckBox( m_toolBarSymbols, wxID_ANY, _("Bodies "), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxBodies->SetToolTip( _("Import function bodies") );

	m_toolBarSymbols->AddControl( m_checkBoxBodies );
	m_toolBarSymbols->Realize();

	panelSizerSymbols->Add( m_toolBarSymbols, 0, wxEXPAND, 5 );

	m_treeSymbols = new wxTreeCtrl( m_panelSymbols, wxID_ANY, wxDefaultPosition, wxSize( -1,100 ), wxTR_DEFAULT_STYLE|wxTR_MULTIPLE );
	m_treeSymbols->SetMinSize( wxSize( -1,100 ) );

	m_menuSymbols = new wxMenu();
	wxMenuItem* menuSymbolsClassDiagram;
	menuSymbolsClassDiagram = new wxMenuItem( m_menuSymbols, IDM_SYMBOLS_IMPORT, wxString( _("Import selected symbols") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuSymbols->Append( menuSymbolsClassDiagram );

	m_menuSymbols->AppendSeparator();

	wxMenuItem* menuSymbolsRemoveAll;
	menuSymbolsRemoveAll = new wxMenuItem( m_menuSymbols, IDM_SYMBOLS_REMOVE_ALL, wxString( _("Remove all symbols") ) , wxEmptyString, wxITEM_NORMAL );
	m_menuSymbols->Append( menuSymbolsRemoveAll );

	m_treeSymbols->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( _RevEngPanel::m_treeSymbolsOnContextMenu ), NULL, this );

	panelSizerSymbols->Add( m_treeSymbols, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );


	m_panelSymbols->SetSizer( panelSizerSymbols );
	m_panelSymbols->Layout();
	panelSizerSymbols->Fit( m_panelSymbols );
	m_splitter->SplitHorizontally( m_panelFiles, m_panelSymbols, 0 );
	mainSizer->Add( m_splitter, 1, wxEXPAND, 5 );


	this->SetSizer( mainSizer );
	this->Layout();
	mainSizer->Fit( this );

	// Connect Events
	m_buttonAddFiles->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnAddFilesClick ), NULL, this );
	m_buttonRemoveFiles->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnRemoveFilesClick ), NULL, this );
	m_buttonRemoveFiles->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateRemoveFiles ), NULL, this );
	this->Connect( menuFilesAdd->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnAddFilesClick ) );
	this->Connect( menuFilesRemove->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveFilesClick ) );
	this->Connect( menuFilesRemove->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateRemoveFiles ) );
	this->Connect( menuFilesRemoveAllFiles->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveAllFilesClick ) );
	this->Connect( menuFilesSelectAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnSelectAllFilesClick ) );
	this->Connect( menuFilesDeselectAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnDeselectAllFilesClick ) );
	this->Connect( menuFilesCheckAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnCheckAllFilesClick ) );
	this->Connect( menuFilesUncheckAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnUncheckAllFilesClick ) );
	m_buttonParse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnParseClick ), NULL, this );
	m_buttonParse->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateParse ), NULL, this );
	this->Connect( m_toolExpand->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( _RevEngPanel::OnExpandTreeClick ) );
	this->Connect( m_toolImportSymbols->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( _RevEngPanel::OnImportSymbolsClick ) );
	this->Connect( menuSymbolsClassDiagram->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnImportSymbolsClick ) );
	this->Connect( menuSymbolsRemoveAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveAllSymbolsClick ) );
}

_RevEngPanel::~_RevEngPanel()
{
	// Disconnect Events
	m_buttonAddFiles->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnAddFilesClick ), NULL, this );
	m_buttonRemoveFiles->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnRemoveFilesClick ), NULL, this );
	m_buttonRemoveFiles->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateRemoveFiles ), NULL, this );
	this->Disconnect( IDM_FILES_ADD, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnAddFilesClick ) );
	this->Disconnect( IDM_FILES_REMOVE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveFilesClick ) );
	this->Disconnect( IDM_FILES_REMOVE, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateRemoveFiles ) );
	this->Disconnect( IDM_FILES_REMOVE_ALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveAllFilesClick ) );
	this->Disconnect( IDM_FILES_SELECTALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnSelectAllFilesClick ) );
	this->Disconnect( IDM_FILES_DESELECTALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnDeselectAllFilesClick ) );
	this->Disconnect( IDM_FILES_CHECKALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnCheckAllFilesClick ) );
	this->Disconnect( IDM_FILES_UNCHECKALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnUncheckAllFilesClick ) );
	m_buttonParse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( _RevEngPanel::OnParseClick ), NULL, this );
	m_buttonParse->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( _RevEngPanel::OnUpdateParse ), NULL, this );
	this->Disconnect( m_toolExpand->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( _RevEngPanel::OnExpandTreeClick ) );
	this->Disconnect( m_toolImportSymbols->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( _RevEngPanel::OnImportSymbolsClick ) );
	this->Disconnect( IDM_SYMBOLS_IMPORT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnImportSymbolsClick ) );
	this->Disconnect( IDM_SYMBOLS_REMOVE_ALL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( _RevEngPanel::OnRemoveAllSymbolsClick ) );

	delete m_menuFiles;
	delete m_menuSymbols;
}

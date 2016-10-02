#include </home/carson/Desktop/Hackathon/textfield.h>
#include <wx/wxprec.h>
#include <wx/wx.h>

MyTextfield::MyTextfield( const wxString& title , const wxPoint& pos , const wxSize& size ):wxFrame( NULL , wxID_ANY , title , pos , size ) {
	
	wxMenu *menuFile = new wxMenu;
    	menuFile->AppendSeparator();
    	menuFile->Append(wxID_EXIT);
    	
	wxMenu *menuHelp = new wxMenu;
    	menuHelp->Append(wxID_ABOUT);
    	
	wxMenuBar *menuBar = new wxMenuBar;
    	menuBar->Append( menuFile, "&File" );
    	menuBar->Append( menuHelp, "&Help" );
    	
	SetMenuBar( menuBar );
}

void MyTextfield::OnExit(wxCommandEvent& event) {
    Close( true );
}

void MyTextfield::OnAbout(wxCommandEvent& event) {
    wxMessageBox( "This is a ide to assist you in coding in several different languages.",
                  "About Phase 1 UI", wxOK | wxICON_INFORMATION );
}

wxBEGIN_EVENT_TABLE(MyTextfield, wxFrame)
    EVT_MENU(wxID_EXIT,  MyFrame::OnExit)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
wxEND_EVENT_TABLE()

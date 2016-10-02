#include <UI.h>
#include <iostream>
#include <string>
#include <wx/wx.h>
#include <wx/textctrl.h>

using namespace std;

string code = "";

void MyCode::OnKeyPress(wxKeyEvent& e) {

    	int a = e.GetKeyCode();
	code += string( 1 , (char)a );

	//parse( code ); // This is Eric's function that he hasn't written yet.
	
	MyCode::Highlight( (wxString)code );

	
	e.Skip();
}

void MyCode::Highlight( wxString cde ) {

	cout << "Hello" <<endl;
}


BEGIN_EVENT_TABLE(MyCode, wxTextCtrl)
	EVT_CHAR(MyCode::OnKeyPress)
END_EVENT_TABLE()


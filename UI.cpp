#include </home/carson/Desktop/Hackathon/UI.h>

bool MyApp::OnInit() {
	
	  wxFrame* frame    = new wxFrame( NULL , wxID_ANY , "Stuff", wxPoint(1000,750) , wxSize(2000,1000) );
	  MyCode *text  = new MyCode( frame , wxID_ANY , wxEmptyString , wxPoint(1000,750) , wxSize(2000,1000) , wxTE_MULTILINE );
	  
	  frame->Show(true);    
	  return true;
}

wxIMPLEMENT_APP(MyApp);

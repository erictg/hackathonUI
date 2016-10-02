#ifndef TEXTFIELD_H
#define TEXTFIELD_H

#include <wx/wx.h>

class MyTextfield: public wxFrame {

   public:
      MyTextfield(const wxString& title, const wxPoint& pos, const wxSize& size);
   
   private:
      void OnExit(wxCommandEvent& event); // This will close the window
      void OnAbout(wxCommandEvent& event); // This will open a description window
      wxDECLARE_EVENT_TABLE();
};

#endif


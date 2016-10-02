#ifndef UI_H
#define UI_H

#include <string>
#include "wx/textctrl.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

using namespace std;

class MyApp : public wxApp {
	public:
		virtual bool OnInit();  
};

class MyCode : public wxTextCtrl {
  
	public:
		MyCode(wxWindow* parent,wxWindowID id , wxString str , wxPoint pos , wxSize size , long a):wxTextCtrl(parent,id,str,pos,size,a) {  } 
  
		void OnKeyPress(wxKeyEvent& e);
		void Highlight( wxString cde );

	private:
		/*string Keywords[] = {"alignas","alignof","and","and_eq","asm","atomic_cancel","atomic_commit","atomic_noexcept","auto","bitand","bitor","bool","break","case","catch","char",
		"char16_t","char32_t","class","compl","concept","const","constexpr","const_cast","continue","decltype","default","delete","do","double","dynamic_cast","else","enum",
		"explicit","export","extern","false","float","for","friend","goto","if","inline","int","import","long","module","mutable","namespace","new","noexcept","not","not_eq",
		"nullptr","operator","or","or_eq","private","protected","public","register","reinterpret_cast","requires","return","short","signed","sizeof","static","static_assert",
		"static_cast","struct","switch","synchronized","template","this","thread_local","throw","true","try","typedef","typeid","typename","union","unsigned","using","virtual",
		"void","volatile","wchar_t","while","xor","xor_eq"};*/
		int a;
		DECLARE_EVENT_TABLE() 
};



#endif

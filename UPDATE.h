#ifndef UPDATE_H
#define UPDATE_H

#include <wx/wx.h>

class Update : public wxEvent {
	public:
		Update( wxWindow* win = (wxWindow*) NULL);
		wxEvent* Clone() const {return new Update(*this);}

		DECLARE_DYNAMIC_CLASS( Update )
};

typedef void (wxEvtHandler::*update)(Update&);

BEGIN_DECLARE_EVENT_TYPES()
	DECLARE_EVENT_TYPE( EVT_Update , 1 )
END_DECLARE_EVENT_TYPES()

#define EVT_Update(func)
	DECLARE_EVENT_TABLE_ENTRY( EVT_Update , -1 , -1 , (wxObjectEventFunction)(update) & func , (wxObject *) NULL),

#endif // This is for UPDATE_H

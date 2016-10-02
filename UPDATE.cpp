#include <Update.h>

IMPLEMENT_DYNAMIC_CLASS( Update , wxEvent )
DEFINE_EVENT_TYPE( EVT_Update )

Update::Update( wxWindow* win ) {
	
	SetEventType( EVT_Update );
	SetEventObject( win );
}

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button4Click(TObject *Sender)
{
Mainmenu->Show();
Mainmenu->Visible=true;
Form11->Visible=false;
Form11->Close();
}
//---------------------------------------------------------------------------

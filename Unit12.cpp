//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit12.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm12::Button4Click(TObject *Sender)
{
Mainmenu->Show();
Mainmenu->Visible=true;
Form12->Visible=false;
Form12->Close();
}
//---------------------------------------------------------------------------
 
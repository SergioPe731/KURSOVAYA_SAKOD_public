//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button4Click(TObject *Sender)
{
Form8->Visible=false;
Mainmenu->Show();
Mainmenu->Visible=true;
Form8->Close();
}
//---------------------------------------------------------------------------


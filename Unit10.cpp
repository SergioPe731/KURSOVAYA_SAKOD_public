//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Button4Click(TObject *Sender)
{
Mainmenu->Show();
Mainmenu->Visible=true;
Form10->Visible=false;
Form10->Close();
}
//---------------------------------------------------------------------------
 
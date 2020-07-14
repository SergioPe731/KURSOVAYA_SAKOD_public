//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TForm7::Button4Click(TObject *Sender)
{
Mainmenu->Visible=true;
Mainmenu->Show();
Form7->Close();
}
//---------------------------------------------------------------------------


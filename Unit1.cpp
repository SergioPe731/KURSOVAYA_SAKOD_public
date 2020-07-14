//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFirstForm *FirstForm;
//---------------------------------------------------------------------------
__fastcall TFirstForm::TFirstForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFirstForm::BitBtn1Click(TObject *Sender)
{
Mainmenu->Visible=true;
Mainmenu->Show();
FirstForm->Visible=false;
}
//---------------------------------------------------------------------------




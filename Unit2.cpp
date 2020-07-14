//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
 TMainmenu *Mainmenu;
//---------------------------------------------------------------------------
__fastcall TMainmenu::TMainmenu(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------


void __fastcall TMainmenu::BitBtn2Click(TObject *Sender)
{
 ByzantGenerals->Visible=true;
 ByzantGenerals->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------
void __fastcall TMainmenu::BitBtn1Click(TObject *Sender)
{
 Realmutex->Visible=true;
 Realmutex->Show();
 Mainmenu->Close();        
}

void __fastcall TMainmenu::BitBtn3Click(TObject *Sender)
{
 ClockSyn->Visible=true;
 ClockSyn->Enabled=true;
 ClockSyn->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainmenu::BitBtn4Click(TObject *Sender)
{
 Form10->Visible=true;
 Form10->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainmenu::BitBtn5Click(TObject *Sender)
{
 Form11->Visible=true;
 Form11->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainmenu::BitBtn6Click(TObject *Sender)
{
 Form12->Visible=true;
 Form12->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------


void __fastcall TMainmenu::Button4Click(TObject *Sender)
{
 ByzantGenerals->Visible=true;
 ByzantGenerals->Show();
 Mainmenu->Close();
}
//---------------------------------------------------------------------------


void __fastcall TMainmenu::B1Click(TObject *Sender)
{
Form7->Visible=true;
Form7->Enabled=true;
Form7->Show();
Mainmenu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainmenu::B2Click(TObject *Sender)
{
Form8->Visible=true;
Form8->Enabled=true;
Form8->Show();
Mainmenu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainmenu::B3Click(TObject *Sender)
{
Form9->Visible=true;
Form9->Enabled=true;
Form9->Show();
Mainmenu->Close();
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TClockSyn *ClockSyn;
//---------------------------------------------------------------------------
__fastcall TClockSyn::TClockSyn(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int E;
int D;
int k=0, k1=0;
int TimClock1[3];
int TimClock2[3];
int Ta1=0; int Ta2=0; int Tb1=0; int Tb2=0;

void __fastcall TClockSyn::BitBtn1Click(TObject *Sender)
{
 k=0; k1=0;
 m1->Visible=false;  m2->Visible=false;
 m3->Visible=false; m4->Visible=false;
 m5->Visible=false; m6->Visible=false;
 TimClock1[0]=StrToInt(Edit1->Text);
 TimClock1[1]=StrToInt(Edit2->Text);
 TimClock2[0]=StrToInt(Edit3->Text);
 TimClock2[1]=StrToInt(Edit4->Text);
 D=StrToInt(Edit5->Text);
 Timer2->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TClockSyn::Timer1Timer(TObject *Sender)
{
 TimClock1[0]=StrToInt(Edit1->Text);
 TimClock1[1]=StrToInt(Edit2->Text);
 TimClock2[0]=StrToInt(Edit3->Text);
 TimClock2[1]=StrToInt(Edit4->Text);
 TimClock1[1]++;   TimClock2[1]++;
 if (TimClock1[1]>=60)
 {
   TimClock1[1]=0;
   TimClock1[0]++;
   if (TimClock1[0]>=24)
      TimClock1[0]=0;
 }
 if (TimClock2[1]>=60)
 {
   TimClock2[1]=0;
   TimClock2[0]++;
   if (TimClock2[0]>=24)
      TimClock2[0]=0;
 }
  Edit1->Text=IntToStr(TimClock1[0]);
  Edit2->Text=IntToStr(TimClock1[1]);
  Edit3->Text=IntToStr(TimClock2[0]);
  Edit4->Text=IntToStr(TimClock2[1]);
}
//---------------------------------------------------------------------------
void __fastcall TClockSyn::Timer2Timer(TObject *Sender)
{
 k++;
 if (k==D)
 {
  k=0;
  k1++;
 }
 if (k1==0)  {
 Button1->Enabled=true;
 m1->Visible=true;
 Ta1=TimClock1[0]*60+TimClock1[1];
 }
 else if (k1==1)
 {
  Button1->Enabled=false;
  Button2->Enabled=true;
  m2->Visible=true;
  m3->Visible=true;
  Tb1=TimClock2[0]*60+TimClock2[1];
 }
 else if (k1==2)
 {
  Button2->Enabled=false;
  Button3->Enabled=true;
  m4->Visible=true;
  m5->Visible=true;
  Ta2=TimClock1[0]*60+TimClock1[1];
 }
 else if (k1==3)
 {
  Button3->Enabled=false;
  m5->Visible=true;
  m6->Visible=true;
  E=(2*Tb1-Ta2-Ta1)/2;
  int l=TimClock2[0]*60+TimClock2[1];
  l=l-E;
  TimClock2[0]=l/60;
  TimClock2[1]=l%60;
  Edit3->Text=IntToStr(TimClock2[0]);
  Edit4->Text=IntToStr(TimClock2[1]);
  Timer2->Enabled=false;
 }
}
//---------------------------------------------------------------------------


void __fastcall TClockSyn::Button4Click(TObject *Sender)
{
Mainmenu->Show();
Mainmenu->Visible=true;
Timer1->Enabled=false;
Timer2->Enabled=false;
ClockSyn->Close();
}
//---------------------------------------------------------------------------


void __fastcall TClockSyn::Image1Click(TObject *Sender)
{
Timer1->Enabled=true;        
}
//---------------------------------------------------------------------------


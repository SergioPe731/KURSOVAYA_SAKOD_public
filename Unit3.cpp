//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRealmutex *Realmutex;
unsigned short int k=0;
//---------------------------------------------------------------------------
__fastcall TRealmutex::TRealmutex(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------









bool Offon = false;
void __fastcall TRealmutex::Timer1Timer(TObject *Sender)
{
k++;
bool f=false;
if (k==1)
{
 Label1->Caption="Выполняется";
 Label1->Color=clGreen;
 Label2->Caption="Выполняется";
 Label2->Color=clGreen;
A1->Enabled=true;
B1->Enabled=true;
Edit1->Enabled=true;
Edit1->Text="25";
}
if (k==2)
{
A2->Enabled=true;
B2->Enabled=true;
A1->Enabled=false;
B1->Enabled=false;
Edit1->Enabled=false;
Buf1->Caption="25";
Buf2->Caption="25";
}
if (k==3)
{
A3->Enabled=true;
B3->Enabled=true;
A2->Enabled=false;
B2->Enabled=false;
sv1->Caption="Захвачен пр.1";
sv5->Caption="Захвачен пр.2";
}
if (k==4)
{
A4->Enabled=true;
B4->Enabled=true;
A3->Enabled=false;
B3->Enabled=false;
FlashData->Cells[0][0]=Buf1->Caption;
FlashData->Cells[4][0]=Buf2->Caption;
}
if (k==5)
{
A5->Enabled=true;
B5->Enabled=true;
A4->Enabled=false;
B4->Enabled=false;
sv1->Caption="";
sv5->Caption="";
}
if (k==6)
{
A6->Enabled=true;
B6->Enabled=true;
A5->Enabled=false;
B5->Enabled=false;
Edit1->Enabled=true;
Edit1->Text="22";
}
if (k==7)
{
A7->Enabled=true;
B7->Enabled=true;
A6->Enabled=false;
B6->Enabled=false;
Edit1->Enabled=false;
Buf1->Caption="21";
Buf2->Caption="21";
}
if (k==8)
{
A8->Enabled=true;
B8->Enabled=true;
A7->Enabled=false;
B7->Enabled=false;
FlashData->Cells[1][0]=Buf1->Caption;
FlashData->Cells[3][0]=Buf2->Caption;
}
if (k==9)
{
A9->Enabled=true;
B9->Enabled=true;
A8->Enabled=false;
B8->Enabled=false;
Edit1->Enabled=true;
Edit1->Text="60";
Buf2->Caption=FlashData->Cells[4][0];
}
if (k==10)
{
A10->Enabled=true;
B10->Enabled=true;
A9->Enabled=false;
B9->Enabled=false;
FlashData->Cells[2][0]=Buf2->Caption;
Buf1->Caption=Edit1->Text;
Edit1->Enabled=false;
}
if (k==11)
{
A11->Enabled=true;
B11->Enabled=true;
A10->Enabled=false;
B10->Enabled=false;
Edit1->Enabled=true;
Edit1->Text="14";
sv2->Caption="Захвачен пр.1";
}
if (k==12)
{
A12->Enabled=true;
B12->Enabled=true;
A11->Enabled=false;
B11->Enabled=false;
Edit1->Enabled=false;
int B = StrToInt(FlashData->Cells[2][0]);
int buf = StrToInt(Buf1->Caption);
 if (buf<B)
  f=true;
}
if (k==13)
{
A13->Enabled=true;
B13->Enabled=true;
A12->Enabled=false;
B12->Enabled=false;
Label2->Caption="Заблокирован";
Label2->Color=clRed;
 if (f)
  FlashData->Cells[1][0]=Buf1->Caption;
 //FlashData->Cells[4][0]=Buf2->Caption;
}
if (k==14)
{
A14->Enabled=true;
//B14->Enabled=true;
A13->Enabled=false;
//B13->Enabled=false;
Buf1->Caption=FlashData->Cells[1][0];
}
if (k==15)
{
A15->Enabled=true;
//B15->Enabled=true;
A14->Enabled=false;
sv2->Caption="";
//B14->Enabled=false;
}
if (k==16)
{
A16->Enabled=true;
B14->Enabled=true;
A15->Enabled=false;
FlashData->Cells[2][0]=Buf1->Caption;
B13->Enabled=false;
Label2->Caption="Выполняется";
sv2->Caption="Захвачен пр.2";
Label2->Color=clGreen;
int B=StrToInt(FlashData->Cells[2][0]);
int buf=StrToInt(Buf2->Caption);
if (buf<B)
 f=true;
else
 f=false;
}
if (k==17)
{
A17->Enabled=true;
B15->Enabled=true;
A16->Enabled=false;
Edit1->Enabled=true;
Edit1->Text="31";
B14->Enabled=false;
 if (f)
  FlashData->Cells[1][0]=Buf2->Caption;
}
if (k==18)
{
A18->Enabled=true;
B16->Enabled=true;
A17->Enabled=false;
B15->Enabled=false;
Buf1->Caption=Edit1->Text;
Edit1->Enabled=false;
sv2->Caption="";
}
if (k==19)
{
A19->Enabled=true;
B17->Enabled=true;
A18->Enabled=false;
B16->Enabled=false;
FlashData->Cells[4][0]=Buf2->Caption;
sv3->Caption="Захвачен пр.1";
}
if (k==20)
{
A20->Enabled=true;
B18->Enabled=true;
A19->Enabled=false;
B17->Enabled=false;
Label2->Caption="Заблокирован";
Label2->Color=clRed;
B20->Enabled=false;
int C = StrToInt(FlashData->Cells[2][0]);
int buf = StrToInt(Buf1->Caption);
if (buf<C)
   f=true;
    else
   f=false;
}
if (k==21)
{
A21->Enabled=true;
A20->Enabled=false;
  if (f)
   FlashData->Cells[2][0]=Buf1->Caption;
}
if (k==22)
{
A22->Enabled=true;
A21->Enabled=false;
sv3->Caption="";
}
if (k==23)
{
A22->Enabled=false;
Label2->Caption="Выполняется";
sv3->Caption="Захвачен пр.2";
Label2->Color=clGreen;
B19->Enabled=true;
B18->Enabled=false;
Label1->Caption="Процесс завершён";
Label1->Color=clWindow;
int buf = StrToInt(Buf2->Caption);
int C = StrToInt(FlashData->Cells[2][0]);
 if (buf<C)
  f=true;
  else
  f=false;
}
if (k==24)
{
 if (f)
  FlashData->Cells[2][0]=Buf2->Caption;
 B20->Enabled=true;
 B19->Enabled=false;
}
if (k==25)
{
 B21->Enabled=true;
 B20->Enabled=false;
   sv3->Caption="";
}
if (k==26)
{
  B22->Enabled=true;
  B21->Enabled=false;
  FlashData->Cells[4][0]=Buf2->Caption;
}
if (k==27)
{
 B22->Enabled=false;
 Label2->Caption="Процесс завершён";
 Label2->Color=clWindow;
}
if (k==28)
{
  Timer1->Enabled=false;
  Play->Caption="Включить демонстрацию";
  k=0;
  Offon=false;
  for (int i=0; i<5; i++)
   FlashData->Cells[i][0]="";
}
}
//---------------------------------------------------------------------------
void __fastcall TRealmutex::PlayClick(TObject *Sender)
{ if (!Offon)
  { Offon=true;
   Timer1->Enabled=true;
   Label1->Caption="Выполняется";
   Label1->Color=clGreen;
   Label2->Caption="Выполняется";
   Label2->Color=clGreen;
   Play->Caption="Завершить демонстрацию";
  }
 else if (Offon)
  {Offon=false;
   Timer1->Enabled=false;
   k=0;
   Label1->Caption="Не запущен";
   Label1->Color=clSkyBlue;
   Label2->Caption="Не запущен";
   Label2->Color=clSkyBlue;
   Play->Caption="Включить демонстрацию";
   A1->Enabled=false;  B1->Enabled=false;
   A2->Enabled=false;  B2->Enabled=false;
   A3->Enabled=false;  B3->Enabled=false;
   A4->Enabled=false;  B4->Enabled=false;
   A5->Enabled=false;  B5->Enabled=false;
   A6->Enabled=false;  B6->Enabled=false;
   A7->Enabled=false;  B7->Enabled=false;
   A8->Enabled=false;  B8->Enabled=false;
   A9->Enabled=false;  B9->Enabled=false;
   A10->Enabled=false; B10->Enabled=false;
   A11->Enabled=false; B11->Enabled=false;
   A12->Enabled=false; B12->Enabled=false;
   A13->Enabled=false; B13->Enabled=false;
   A14->Enabled=false; B14->Enabled=false;
   A15->Enabled=false; B15->Enabled=false;
   A16->Enabled=false; B16->Enabled=false;
   A17->Enabled=false; B17->Enabled=false;
   A18->Enabled=false; B18->Enabled=false;
   A19->Enabled=false; B19->Enabled=false;
   A20->Enabled=false; B20->Enabled=false;
   A21->Enabled=false; B21->Enabled=false;
   A22->Enabled=false; B22->Enabled=false;
   for (int i=0; i<5; i++)
     FlashData->Cells[i][0]="";
  }

}
//---------------------------------------------------------------------------








void __fastcall TRealmutex::Button1Click(TObject *Sender)
{
Makevr->Visible=true;
Makevr->Show();
}
//---------------------------------------------------------------------------

void __fastcall TRealmutex::Button6Click(TObject *Sender)
{
  Realmutex->Close();
  Mainmenu->Show();
}
//---------------------------------------------------------------------------


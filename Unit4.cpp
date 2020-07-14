//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMakevr *Makevr;

//---------------------------------------------------------------------------
__fastcall TMakevr::TMakevr(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


AnsiString  Commarr[15]={"Ввести", "Записать в A", "Записать в B",
"Записать в C", "Захватить A", "Захватить B", "Захватить C",
"Вывести", "Освободить A", "Освободить B", "Освободить C",
 "Считать из A", "Считать из B", "Считать из C", ""};
int Procarr[3][10]={14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14};
int i1=0, i2=0, i3=0;
int k=0, k1=0, k2=0, k3=0;
bool l1=false, l2=false, l3=false;
int a=0, b=0, c=0;
void showcom (int ind, int pr, TEdit *E)
{
if (pr==1)
{
  if (ind==0)
   E->Text=Commarr[Procarr[0][0]];
  else if (ind==1)
   E->Text=Commarr[Procarr[0][1]];
  else if (ind==2)
   E->Text=Commarr[Procarr[0][2]];
  else if (ind==3)
   E->Text=Commarr[Procarr[0][3]];
  else if (ind==4)
   E->Text=Commarr[Procarr[0][4]];
  else if (ind==5)
   E->Text=Commarr[Procarr[0][5]];
  else if (ind==6)
   E->Text=Commarr[Procarr[0][6]];
  else if (ind==7)
   E->Text=Commarr[Procarr[0][7]];
  else if (ind==8)
   E->Text=Commarr[Procarr[0][8]];
  else if (ind==9)
   E->Text=Commarr[Procarr[0][9]];
}
 if (pr==2)
{
  if (ind==0)
   E->Text=Commarr[Procarr[1][0]];
  else if (ind==1)
   E->Text=Commarr[Procarr[1][1]];
  else if (ind==2)
   E->Text=Commarr[Procarr[1][2]];
  else if (ind==3)
   E->Text=Commarr[Procarr[1][3]];
  else if (ind==4)
   E->Text=Commarr[Procarr[1][4]];
  else if (ind==5)
   E->Text=Commarr[Procarr[1][5]];
  else if (ind==6)
   E->Text=Commarr[Procarr[1][6]];
  else if (ind==7)
   E->Text=Commarr[Procarr[1][7]];
  else if (ind==8)
   E->Text=Commarr[Procarr[1][8]];
  else if (ind==9)
   E->Text=Commarr[Procarr[1][9]];
}

if (pr==3)
{
  if (ind==0)
   E->Text=Commarr[Procarr[2][0]];
  else if (ind==1)
   E->Text=Commarr[Procarr[2][1]];
  else if (ind==2)
   E->Text=Commarr[Procarr[2][2]];
  else if (ind==3)
   E->Text=Commarr[Procarr[2][3]];
  else if (ind==4)
   E->Text=Commarr[Procarr[2][4]];
  else if (ind==5)
   E->Text=Commarr[Procarr[2][5]];
  else if (ind==6)
   E->Text=Commarr[Procarr[2][6]];
  else if (ind==7)
   E->Text=Commarr[Procarr[2][7]];
  else if (ind==8)
   E->Text=Commarr[Procarr[2][8]];
  else if (ind==9)
   E->Text=Commarr[Procarr[2][9]];
}
}
 void f1 (TEdit *E, TLabel *b)
 {
  b->Caption=E->Text;
 }
 void f2 (TStringGrid *Tabl, TLabel *b, bool &p, int &elem, int ind)
 {
    if (elem==ind || elem==0)
      p=true;
    else
      p=false;
    if (p)
      Tabl->Cells[0][0]=b->Caption;
 }
 void f3 (TStringGrid *Tabl, TLabel *b, bool &p, int &elem, int ind)
 {
  if (elem==ind || elem==0)
      p=true;
    else
      p=false;
 if (p)
     Tabl->Cells[1][0]=b->Caption;
 }
 void f4 (TStringGrid *Tabl, TLabel *b, bool &p, int &elem, int ind)
 {
   if (elem==ind || elem==0)
      p=true;
    else
      p=false;
  if (p)
     Tabl->Cells[2][0]=b->Caption;
 }
 void f5_6_7 (int &elem, int ind, bool &p)
 {  if (elem==ind || elem==0)  {
       elem=ind;   p=true; }
    else
       p=false;
 }
 void f8 (TLabel *b, TEdit *E)
 {
  E->Text=b->Caption;
 }
  void f9_10_11 (int &elem, int ind, bool &p)
 {
   if (elem==ind || elem==0) {
    elem=0;  p=true; }
   else
       p=false;
 }
  void f12 ( TLabel *b, TStringGrid *Tabl, bool &p,  int &elem, int ind)
 {  if (elem==ind || elem==0) {
        b->Caption=Tabl->Cells[0][0];
        p=true; }
    else
       p=false;
 }
  void f13 ( TLabel *b, TStringGrid *Tabl, bool &p,  int &elem, int ind)
 {     if (elem==ind || elem==0)  {
          b->Caption=Tabl->Cells[1][0];
          p=true; }
     else
       p=false;
 }
  void f14 ( TLabel *b, TStringGrid *Tabl, bool &p,  int &elem, int ind)
 {      if (elem==ind || elem==0) {
          b->Caption=Tabl->Cells[2][0];
          p=true; }
     else
       p=false;
 }

void __fastcall TMakevr::A1Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0)
 {
  Edit1->Text=(A1->Caption)+".";
  Procarr[0][0]=0;
 }
else if ((Edit2->Text).Pos(".")==0)
 {
  Edit2->Text=(A1->Caption)+".";
  Procarr[0][1]=0;
 }
else if ((Edit3->Text).Pos(".")==0)
{
  Edit3->Text=(A1->Caption)+".";
  Procarr[0][2]=0;
}
else if ((Edit4->Text).Pos(".")==0)
{
  Edit4->Text=(A1->Caption)+".";
  Procarr[0][3]=0;
}
else if ((Edit5->Text).Pos(".")==0)
{
  Edit5->Text=(A1->Caption)+".";
  Procarr[0][4]=0;
}
else if ((Edit6->Text).Pos(".")==0)
{
  Edit6->Text=(A1->Caption)+".";
  Procarr[0][5]=0;
}
else if ((Edit7->Text).Pos(".")==0)
{
  Edit7->Text=(A1->Caption)+".";
  Procarr[0][6]=0;
}
else if ((Edit8->Text).Pos(".")==0)
{
  Edit8->Text=(A1->Caption)+".";
  Procarr[0][7]=0;
}
else if ((Edit9->Text).Pos(".")==0)
{
  Edit9->Text=(A1->Caption)+".";
  Procarr[0][8]=0;
}
else if ((Edit10->Text).Pos(".")==0)
{
  Edit10->Text=(A1->Caption)+".";
  Procarr[0][9]=0;
}
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A2Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0)  {
  Edit1->Text=(A2->Caption)+".";
  Procarr[0][0]=1;
  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A2->Caption)+".";
  Procarr[0][1]=1;
  }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A2->Caption)+".";
  Procarr[0][2]=1;
  }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A2->Caption)+".";
  Procarr[0][3]=1;
  }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A2->Caption)+".";
  Procarr[0][4]=1;
  }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A2->Caption)+".";
  Procarr[0][5]=1;
  }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A2->Caption)+".";
  Procarr[0][6]=1;
  }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A2->Caption)+".";
  Procarr[0][7]=1;
  }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A2->Caption)+".";
  Procarr[0][8]=1;
  }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A2->Caption)+".";
  Procarr[0][9]=1;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A3Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0)  {
  Edit1->Text=(A3->Caption)+".";
  Procarr[0][0]=2;  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A3->Caption)+".";
  Procarr[0][1]=2;
  }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A3->Caption)+".";
   Procarr[0][2]=2;
   }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A3->Caption)+".";
   Procarr[0][3]=2;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A3->Caption)+".";
   Procarr[0][4]=2;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A3->Caption)+".";
   Procarr[0][5]=2;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A3->Caption)+".";
   Procarr[0][6]=2;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A3->Caption)+".";
   Procarr[0][7]=2;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A3->Caption)+".";
   Procarr[0][8]=2;
   }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A3->Caption)+".";
   Procarr[0][9]=2;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A4Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A4->Caption)+".";
   Procarr[0][0]=3;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A4->Caption)+".";
   Procarr[0][1]=3;
   }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A4->Caption)+".";
   Procarr[0][2]=3;
   }
else if ((Edit4->Text).Pos(".")==0)  {
  Edit4->Text=(A4->Caption)+".";
   Procarr[0][3]=3;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A4->Caption)+".";
   Procarr[0][4]=3;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A4->Caption)+".";
   Procarr[0][5]=3;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A4->Caption)+".";
   Procarr[0][6]=3;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A4->Caption)+".";
   Procarr[0][7]=3;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A4->Caption)+".";
   Procarr[0][8]=3;
   }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A4->Caption)+".";
   Procarr[0][9]=3;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A5Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A5->Caption)+".";
   Procarr[0][0]=4;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A5->Caption)+".";
   Procarr[0][1]=4;
   }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A5->Caption)+".";
   Procarr[0][2]=4;
   }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A5->Caption)+".";
   Procarr[0][3]=4;
   }
else if ((Edit5->Text).Pos(".")==0)  {
  Edit5->Text=(A5->Caption)+".";
   Procarr[0][4]=4;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A5->Caption)+".";
   Procarr[0][5]=4;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A5->Caption)+".";
   Procarr[0][6]=4;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A5->Caption)+".";
   Procarr[0][7]=4;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A5->Caption)+".";
   Procarr[0][8]=4;
   }
else if ((Edit10->Text).Pos(".")==0)  {
  Edit10->Text=(A5->Caption)+".";
   Procarr[0][9]=4;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A6Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A6->Caption)+".";
   Procarr[0][0]=5;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A6->Caption)+".";
   Procarr[0][1]=5;
   }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A6->Caption)+".";
   Procarr[0][2]=5;
   }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A6->Caption)+".";
   Procarr[0][3]=5;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A6->Caption)+".";
   Procarr[0][4]=5;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A6->Caption)+".";
   Procarr[0][5]=5;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A6->Caption)+".";
   Procarr[0][6]=5;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A6->Caption)+".";
   Procarr[0][7]=5;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A6->Caption)+".";
   Procarr[0][8]=5;
   }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A6->Caption)+".";
   Procarr[0][9]=5;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A7Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A7->Caption)+".";
   Procarr[0][0]=6;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A7->Caption)+".";
   Procarr[0][1]=6;
   }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A7->Caption)+".";
  Procarr[0][2]=6;
  }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A7->Caption)+".";
  Procarr[0][3]=6;
  }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A7->Caption)+".";
  Procarr[0][4]=6;
  }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A7->Caption)+".";
  Procarr[0][5]=6;
  }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A7->Caption)+".";
  Procarr[0][6]=6;
  }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A7->Caption)+".";
  Procarr[0][7]=6;
  }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A7->Caption)+".";
  Procarr[0][8]=6;
  }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A7->Caption)+".";
  Procarr[0][9]=6;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A8Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A8->Caption)+".";
  Procarr[0][0]=7;
  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A8->Caption)+".";
  Procarr[0][1]=7;
  }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A8->Caption)+".";
  Procarr[0][2]=7;
  }
else if ((Edit4->Text).Pos(".")==0)  {
  Edit4->Text=(A8->Caption)+".";
   Procarr[0][3]=7;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A8->Caption)+".";
   Procarr[0][4]=7;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A8->Caption)+".";
   Procarr[0][5]=7;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A8->Caption)+".";
   Procarr[0][6]=7;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A8->Caption)+".";
   Procarr[0][7]=7;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A8->Caption)+".";
   Procarr[0][8]=7;
   }
else if ((Edit10->Text).Pos(".")==0)  {
  Edit10->Text=(A8->Caption)+".";
   Procarr[0][9]=7;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A9Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A9->Caption)+".";
   Procarr[0][0]=8;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A9->Caption)+".";
    Procarr[0][1]=8;
    }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A9->Caption)+".";
    Procarr[0][2]=8;
    }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A9->Caption)+".";
    Procarr[0][3]=8;
    }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A9->Caption)+".";
    Procarr[0][4]=8;
    }
else if ((Edit6->Text).Pos(".")==0)  {
  Edit6->Text=(A9->Caption)+".";
    Procarr[0][5]=8;
    }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A9->Caption)+".";
    Procarr[0][6]=8;
    }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A9->Caption)+".";
    Procarr[0][7]=8;
    }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A9->Caption)+".";
    Procarr[0][8]=8;
    }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A9->Caption)+".";
    Procarr[0][9]=8;
    }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A10Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A10->Caption)+".";
    Procarr[0][0]=9;
    }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A10->Caption)+".";
    Procarr[0][1]=9;
    }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A10->Caption)+".";
    Procarr[0][2]=9;
    }
else if ((Edit4->Text).Pos(".")==0)  {
  Edit4->Text=(A10->Caption)+".";
   Procarr[0][3]=9;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A10->Caption)+".";
   Procarr[0][4]=9;
   }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A10->Caption)+".";
   Procarr[0][5]=9;
   }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A10->Caption)+".";
   Procarr[0][6]=9;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A10->Caption)+".";
   Procarr[0][7]=9;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A10->Caption)+".";
   Procarr[0][8]=9;
   }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A10->Caption)+".";
   Procarr[0][9]=9;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A11Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0)  {
  Edit1->Text=(A11->Caption)+".";
   Procarr[0][0]=10;
   }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A11->Caption)+".";
  Procarr[0][1]=10;
  }
else if ((Edit3->Text).Pos(".")==0)  {
  Edit3->Text=(A11->Caption)+".";
  Procarr[0][2]=10;
  }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A11->Caption)+".";
  Procarr[0][3]=10;
  }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A11->Caption)+".";
  Procarr[0][4]=10;
  }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A11->Caption)+".";
  Procarr[0][5]=10;
  }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A11->Caption)+".";
  Procarr[0][6]=10;
  }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A11->Caption)+".";
  Procarr[0][7]=10;
  }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A11->Caption)+".";
  Procarr[0][8]=10;
  }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A11->Caption)+".";
  Procarr[0][9]=10;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A12Click(TObject *Sender)
{
 if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A12->Caption)+".";
  Procarr[0][0]=11;
  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A12->Caption)+".";
  Procarr[0][1]=11;
  }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A12->Caption)+".";
  Procarr[0][2]=11;
  }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A12->Caption)+".";
  Procarr[0][3]=11;
  }
else if ((Edit5->Text).Pos(".")==0)  {
  Edit5->Text=(A12->Caption)+".";
  Procarr[0][4]=11;
  }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A12->Caption)+".";
  Procarr[0][5]=11;
  }
else if ((Edit7->Text).Pos(".")==0) {
  Edit7->Text=(A12->Caption)+".";
  Procarr[0][6]=11;
  }
else if ((Edit8->Text).Pos(".")==0)  {
  Edit8->Text=(A12->Caption)+".";
  Procarr[0][7]=11;
  }
else if ((Edit9->Text).Pos(".")==0)  {
  Edit9->Text=(A12->Caption)+".";
  Procarr[0][8]=11;
  }
else if ((Edit10->Text).Pos(".")==0)  {
  Edit10->Text=(A12->Caption)+".";
  Procarr[0][9]=11;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A13Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0)  {
  Edit1->Text=(A13->Caption)+".";
  Procarr[0][0]=12;
  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A13->Caption)+".";
  Procarr[0][1]=12;
  }
else if ((Edit3->Text).Pos(".")==0){
  Edit3->Text=(A13->Caption)+".";
  Procarr[0][2]=12;
  }
else if ((Edit4->Text).Pos(".")==0) {
  Edit4->Text=(A13->Caption)+".";
  Procarr[0][3]=12;
  }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A13->Caption)+".";
  Procarr[0][4]=12;
  }
else if ((Edit6->Text).Pos(".")==0) {
  Edit6->Text=(A13->Caption)+".";
  Procarr[0][5]=12;
  }
else if ((Edit7->Text).Pos(".")==0){
  Edit7->Text=(A13->Caption)+".";
  Procarr[0][6]=12;
  }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A13->Caption)+".";
  Procarr[0][7]=12;
  }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A13->Caption)+".";
  Procarr[0][8]=12;
  }
else if ((Edit10->Text).Pos(".")==0) {
  Edit10->Text=(A13->Caption)+".";
  Procarr[0][9]=12;
  }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::A14Click(TObject *Sender)
{
if ((Edit1->Text).Pos(".")==0) {
  Edit1->Text=(A14->Caption)+".";
  Procarr[0][0]=13;
  }
else if ((Edit2->Text).Pos(".")==0) {
  Edit2->Text=(A14->Caption)+".";
  Procarr[0][1]=13;
  }
else if ((Edit3->Text).Pos(".")==0) {
  Edit3->Text=(A14->Caption)+".";
   Procarr[0][2]=13;
   }
else if ((Edit4->Text).Pos(".")==0){
  Edit4->Text=(A14->Caption)+".";
   Procarr[0][3]=13;
   }
else if ((Edit5->Text).Pos(".")==0) {
  Edit5->Text=(A14->Caption)+".";
   Procarr[0][4]=13;
   }
else if ((Edit6->Text).Pos(".")==0){
  Edit6->Text=(A14->Caption)+".";
   Procarr[0][5]=13;
   }
else if ((Edit7->Text).Pos(".")==0)  {
  Edit7->Text=(A14->Caption)+".";
   Procarr[0][6]=13;
   }
else if ((Edit8->Text).Pos(".")==0) {
  Edit8->Text=(A14->Caption)+".";
   Procarr[0][7]=13;
   }
else if ((Edit9->Text).Pos(".")==0) {
  Edit9->Text=(A14->Caption)+".";
   Procarr[0][8]=13;
   }
else if ((Edit10->Text).Pos(".")==0)  {
  Edit10->Text=(A14->Caption)+".";
   Procarr[0][9]=13;
   }
}
//---------------------------------------------------------------------------
void __fastcall TMakevr::B1Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)  {
  Edit11->Text=(B1->Caption)+".";
   Procarr[1][0]=0;
   }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B1->Caption)+".";
  Procarr[1][1]=0;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B1->Caption)+".";
  Procarr[1][2]=0;
  }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B1->Caption)+".";
  Procarr[1][3]=0;
  }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B1->Caption)+".";
  Procarr[1][4]=0;
  }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B1->Caption)+".";
  Procarr[1][5]=0;
  }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B1->Caption)+".";
  Procarr[1][6]=0;
  }
else if ((Edit18->Text).Pos(".")==0) {
  Edit18->Text=(B1->Caption)+".";
  Procarr[1][7]=0;
  }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B1->Caption)+".";
  Procarr[1][8]=0;
  }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B1->Caption)+".";
  Procarr[1][9]=0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B2Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)  {
  Edit11->Text=(B2->Caption)+".";
  Procarr[1][0]=1;
  }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B2->Caption)+".";
  Procarr[1][1]=1;
  }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B2->Caption)+".";
  Procarr[1][2]=1;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B2->Caption)+".";
  Procarr[1][3]=1;
  }
else if ((Edit15->Text).Pos(".")==0) {
  Edit15->Text=(B2->Caption)+".";
  Procarr[1][4]=1;
  }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B2->Caption)+".";
  Procarr[1][5]=1;
  }
else if ((Edit17->Text).Pos(".")==0){
  Edit17->Text=(B2->Caption)+".";
  Procarr[1][6]=1;
  }
else if ((Edit18->Text).Pos(".")==0) {
  Edit18->Text=(B2->Caption)+".";
  Procarr[1][7]=1;
  }
else if ((Edit19->Text).Pos(".")==0) {
  Edit19->Text=(B2->Caption)+".";
  Procarr[1][8]=1;
  }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B2->Caption)+".";
  Procarr[1][9]=1;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B3Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B3->Caption)+".";
  Procarr[1][0]=2;
  }
else if ((Edit12->Text).Pos(".")==0){
  Edit12->Text=(B3->Caption)+".";
  Procarr[1][1]=2;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B3->Caption)+".";
  Procarr[1][2]=2;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B3->Caption)+".";
  Procarr[1][3]=2;
  }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B3->Caption)+".";
  Procarr[1][4]=2;
  }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B3->Caption)+".";
  Procarr[1][5]=2;
  }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B3->Caption)+".";
  Procarr[1][6]=2;
  }
else if ((Edit18->Text).Pos(".")==0)  {
  Edit18->Text=(B3->Caption)+".";
  Procarr[1][7]=2;
  }
else if ((Edit19->Text).Pos(".")==0) {
  Edit19->Text=(B3->Caption)+".";
  Procarr[1][8]=2;
  }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B3->Caption)+".";
  Procarr[1][9]=2;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B4Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B4->Caption)+".";
  Procarr[1][0]=3;
  }
else if ((Edit12->Text).Pos(".")==0)  {
  Edit12->Text=(B4->Caption)+".";
    Procarr[1][1]=3;
    }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B4->Caption)+".";
    Procarr[1][2]=3;
    }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B4->Caption)+".";
    Procarr[1][3]=3;
    }
else if ((Edit15->Text).Pos(".")==0){
  Edit15->Text=(B4->Caption)+".";
    Procarr[1][4]=3;
    }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B4->Caption)+".";
    Procarr[1][5]=3;
    }
else if ((Edit17->Text).Pos(".")==0) {
  Edit17->Text=(B4->Caption)+".";
    Procarr[1][6]=3;
    }
else if ((Edit18->Text).Pos(".")==0) {
  Edit18->Text=(B4->Caption)+".";
    Procarr[1][7]=3;
    }
else if ((Edit19->Text).Pos(".")==0) {
  Edit19->Text=(B4->Caption)+".";
    Procarr[1][8]=3;
    }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B4->Caption)+".";
    Procarr[1][9]=3;
    }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B5Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)  {
  Edit11->Text=(B5->Caption)+".";
    Procarr[1][0]=4;
    }
else if ((Edit12->Text).Pos(".")==0)  {
  Edit12->Text=(B5->Caption)+".";
  Procarr[1][1]=4;
  }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B5->Caption)+".";
  Procarr[1][2]=4;
  }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B5->Caption)+".";
  Procarr[1][3]=4;
  }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B5->Caption)+".";
  Procarr[1][4]=4;
  }
else if ((Edit16->Text).Pos(".")==0)  {
  Edit16->Text=(B5->Caption)+".";
  Procarr[1][5]=4;
  }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B5->Caption)+".";
  Procarr[1][6]=4;
  }
else if ((Edit18->Text).Pos(".")==0)   {
  Edit18->Text=(B5->Caption)+".";
  Procarr[1][7]=4;
  }
else if ((Edit19->Text).Pos(".")==0)   {
  Edit19->Text=(B5->Caption)+".";
  Procarr[1][8]=4;
  }
else if ((Edit20->Text).Pos(".")==0)  {
  Edit20->Text=(B5->Caption)+".";
  Procarr[1][9]=4;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B6Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B6->Caption)+".";
  Procarr[1][0]=5;
  }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B6->Caption)+".";
  Procarr[1][1]=5;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B6->Caption)+".";
  Procarr[1][2]=5;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B6->Caption)+".";
  Procarr[1][3]=5;
  }
else if ((Edit15->Text).Pos(".")==0) {
  Edit15->Text=(B6->Caption)+".";
  Procarr[1][4]=5;
  }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B6->Caption)+".";
  Procarr[1][5]=5;
  }
else if ((Edit17->Text).Pos(".")==0) {
  Edit17->Text=(B6->Caption)+".";
  Procarr[1][6]=5;
  }
else if ((Edit18->Text).Pos(".")==0) {
  Edit18->Text=(B6->Caption)+".";
  Procarr[1][7]=5;
  }
else if ((Edit19->Text).Pos(".")==0) {
  Edit19->Text=(B6->Caption)+".";
  Procarr[1][8]=5;
  }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B6->Caption)+".";
  Procarr[1][9]=5;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B7Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B7->Caption)+".";
  Procarr[1][0]=6;
  }
else if ((Edit12->Text).Pos(".")==0)  {
  Edit12->Text=(B7->Caption)+".";
  Procarr[1][1]=6;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B7->Caption)+".";
  Procarr[1][2]=6;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B7->Caption)+".";
  Procarr[1][3]=6;
  }
else if ((Edit15->Text).Pos(".")==0) {
  Edit15->Text=(B7->Caption)+".";
  Procarr[1][4]=6;
  }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B7->Caption)+".";
  Procarr[1][5]=6;
  }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B7->Caption)+".";
  Procarr[1][6]=6;
  }
else if ((Edit18->Text).Pos(".")==0)   {
  Edit18->Text=(B7->Caption)+".";
  Procarr[1][7]=6;
  }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B7->Caption)+".";
  Procarr[1][8]=6;
  }
else if ((Edit20->Text).Pos(".")==0)  {
  Edit20->Text=(B7->Caption)+".";
  Procarr[1][9]=6;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B8Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)  {
  Edit11->Text=(B8->Caption)+".";
  Procarr[1][0]=7;
  }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B8->Caption)+".";
  Procarr[1][1]=7;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B8->Caption)+".";
  Procarr[1][2]=7;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B8->Caption)+".";
  Procarr[1][3]=7;
  }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B8->Caption)+".";
  Procarr[1][4]=7;
  }
else if ((Edit16->Text).Pos(".")==0)  {
  Edit16->Text=(B8->Caption)+".";
  Procarr[1][5]=7;
  }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B8->Caption)+".";
  Procarr[1][6]=7;
  }
else if ((Edit18->Text).Pos(".")==0)   {
  Edit18->Text=(B8->Caption)+".";
  Procarr[1][7]=7;
  }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B8->Caption)+".";
  Procarr[1][8]=7;
  }
else if ((Edit20->Text).Pos(".")==0)  {
  Edit20->Text=(B8->Caption)+".";
  Procarr[1][9]=7;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B9Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B9->Caption)+".";
  Procarr[1][0]=8;
  }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B9->Caption)+".";
  Procarr[1][1]=8;
  }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B9->Caption)+".";
  Procarr[1][2]=8;
  }
else if ((Edit14->Text).Pos(".")==0) {
  Edit14->Text=(B9->Caption)+".";
  Procarr[1][3]=8;
  }
else if ((Edit15->Text).Pos(".")==0) {
  Edit15->Text=(B9->Caption)+".";
   Procarr[1][4]=8;
   }
else if ((Edit16->Text).Pos(".")==0) {
  Edit16->Text=(B9->Caption)+".";
   Procarr[1][5]=8;
   }
else if ((Edit17->Text).Pos(".")==0) {
  Edit17->Text=(B9->Caption)+".";
   Procarr[1][6]=8;
   }
else if ((Edit18->Text).Pos(".")==0) {
  Edit18->Text=(B9->Caption)+".";
   Procarr[1][7]=8;
   }
else if ((Edit19->Text).Pos(".")==0) {
  Edit19->Text=(B9->Caption)+".";
   Procarr[1][8]=8;
   }
else if ((Edit20->Text).Pos(".")==0) {
  Edit20->Text=(B9->Caption)+".";
   Procarr[1][9]=8;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B10Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B10->Caption)+".";
   Procarr[1][0]=9;
   }
else if ((Edit12->Text).Pos(".")==0)  {
  Edit12->Text=(B10->Caption)+".";
   Procarr[1][1]=9;
   }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B10->Caption)+".";
   Procarr[1][2]=9;
   }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B10->Caption)+".";
   Procarr[1][3]=9;
   }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B10->Caption)+".";
   Procarr[1][4]=9;
   }
else if ((Edit16->Text).Pos(".")==0)  {
  Edit16->Text=(B10->Caption)+".";
   Procarr[1][5]=9;
   }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B10->Caption)+".";
   Procarr[1][6]=9;
   }
else if ((Edit18->Text).Pos(".")==0)  {
  Edit18->Text=(B10->Caption)+".";
   Procarr[1][7]=9;
   }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B10->Caption)+".";
   Procarr[1][8]=9;
   }
else if ((Edit20->Text).Pos(".")==0)   {
  Edit20->Text=(B10->Caption)+".";
   Procarr[1][9]=9;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B11Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B11->Caption)+".";
   Procarr[1][0]=10;
   }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B11->Caption)+".";
     Procarr[1][1]=10;
     }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B11->Caption)+".";
     Procarr[1][2]=10;
     }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B11->Caption)+".";
     Procarr[1][3]=10;
     }
else if ((Edit15->Text).Pos(".")==0) {
  Edit15->Text=(B11->Caption)+".";
     Procarr[1][4]=10;
     }
else if ((Edit16->Text).Pos(".")==0)  {
  Edit16->Text=(B11->Caption)+".";
     Procarr[1][5]=10;
     }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B11->Caption)+".";
     Procarr[1][6]=10;
     }
else if ((Edit18->Text).Pos(".")==0)  {
  Edit18->Text=(B11->Caption)+".";
     Procarr[1][7]=10;
     }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B11->Caption)+".";
     Procarr[1][8]=10;
     }
else if ((Edit20->Text).Pos(".")==0)  {
  Edit20->Text=(B11->Caption)+".";
     Procarr[1][9]=10;
     }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B12Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0) {
  Edit11->Text=(B12->Caption)+".";
     Procarr[1][0]=11;
     }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B12->Caption)+".";
   Procarr[1][1]=11;
   }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B12->Caption)+".";
   Procarr[1][2]=11;
   }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B12->Caption)+".";
   Procarr[1][3]=11;
   }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B12->Caption)+".";
   Procarr[1][4]=11;
   }
else if ((Edit16->Text).Pos(".")==0)  {
  Edit16->Text=(B12->Caption)+".";
   Procarr[1][5]=11;
   }
else if ((Edit17->Text).Pos(".")==0)  {
  Edit17->Text=(B12->Caption)+".";
   Procarr[1][6]=11;
   }
else if ((Edit18->Text).Pos(".")==0)  {
  Edit18->Text=(B12->Caption)+".";
   Procarr[1][7]=11;
   }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B12->Caption)+".";
   Procarr[1][8]=11;
   }
else if ((Edit20->Text).Pos(".")==0)  {
  Edit20->Text=(B12->Caption)+".";
   Procarr[1][9]=11;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B13Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)  {
  Edit11->Text=(B13->Caption)+".";
   Procarr[1][0]=12;
   }
else if ((Edit12->Text).Pos(".")==0) {
  Edit12->Text=(B13->Caption)+".";
   Procarr[1][1]=12;
   }
else if ((Edit13->Text).Pos(".")==0) {
  Edit13->Text=(B13->Caption)+".";
   Procarr[1][2]=12;
    }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B13->Caption)+".";
  Procarr[1][3]=12;
  }
else if ((Edit15->Text).Pos(".")==0)  {
  Edit15->Text=(B13->Caption)+".";
  Procarr[1][4]=12;
  }
else if ((Edit16->Text).Pos(".")==0)   {
  Edit16->Text=(B13->Caption)+".";
  Procarr[1][5]=12;
  }
else if ((Edit17->Text).Pos(".")==0)   {
  Edit17->Text=(B13->Caption)+".";
  Procarr[1][6]=12;
  }
else if ((Edit18->Text).Pos(".")==0)   {
  Edit18->Text=(B13->Caption)+".";
  Procarr[1][7]=12;
  }
else if ((Edit19->Text).Pos(".")==0)   {
  Edit19->Text=(B13->Caption)+".";
  Procarr[1][8]=12;
  }
else if ((Edit20->Text).Pos(".")==0)   {
  Edit20->Text=(B13->Caption)+".";
  Procarr[1][9]=12;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::B14Click(TObject *Sender)
{
if ((Edit11->Text).Pos(".")==0)   {
  Edit11->Text=(B14->Caption)+".";
  Procarr[1][0]=13;
  }
else if ((Edit12->Text).Pos(".")==0)  {
  Edit12->Text=(B14->Caption)+".";
  Procarr[1][1]=13;
  }
else if ((Edit13->Text).Pos(".")==0)  {
  Edit13->Text=(B14->Caption)+".";
  Procarr[1][2]=13;
  }
else if ((Edit14->Text).Pos(".")==0)  {
  Edit14->Text=(B14->Caption)+".";
  Procarr[1][3]=13;
  }
else if ((Edit15->Text).Pos(".")==0)   {
  Edit15->Text=(B14->Caption)+".";
  Procarr[1][4]=13;
  }
else if ((Edit16->Text).Pos(".")==0)   {
  Edit16->Text=(B14->Caption)+".";
  Procarr[1][5]=13;
  }
else if ((Edit17->Text).Pos(".")==0)   {
  Edit17->Text=(B14->Caption)+".";
  Procarr[1][6]=13;
  }
else if ((Edit18->Text).Pos(".")==0)  {
  Edit18->Text=(B14->Caption)+".";
  Procarr[1][7]=13;
  }
else if ((Edit19->Text).Pos(".")==0)  {
  Edit19->Text=(B14->Caption)+".";
  Procarr[1][8]=13;
  }
else if ((Edit20->Text).Pos(".")==0)   {
  Edit20->Text=(B14->Caption)+".";
  Procarr[1][9]=13;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C1Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)  {
  Edit21->Text=(C1->Caption)+".";
  Procarr[2][0]=0;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C1->Caption)+".";
  Procarr[2][1]=0;
  }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C1->Caption)+".";
  Procarr[2][2]=0;
  }
else if ((Edit24->Text).Pos(".")==0) {
  Edit24->Text=(C1->Caption)+".";
  Procarr[2][3]=0;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C1->Caption)+".";
  Procarr[2][4]=0;
  }
else if ((Edit26->Text).Pos(".")==0)   {
  Edit26->Text=(C1->Caption)+".";
  Procarr[2][5]=0;
  }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C1->Caption)+".";
  Procarr[2][6]=0;
  }
else if ((Edit28->Text).Pos(".")==0)   {
  Edit28->Text=(C1->Caption)+".";
  Procarr[2][7]=0;
  }
else if ((Edit29->Text).Pos(".")==0)    {
  Edit29->Text=(C1->Caption)+".";
  Procarr[2][8]=0;
  }
else if ((Edit30->Text).Pos(".")==0)    {
  Edit30->Text=(C1->Caption)+".";
  Procarr[2][9]=0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C2Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)  {
  Edit21->Text=(C2->Caption)+".";
  Procarr[2][0]=1;
  }
else if ((Edit22->Text).Pos(".")==0)  {
  Edit22->Text=(C2->Caption)+".";
  Procarr[2][1]=1;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C2->Caption)+".";
  Procarr[2][2]=1;
  }
else if ((Edit24->Text).Pos(".")==0)  {
  Edit24->Text=(C2->Caption)+".";
  Procarr[2][3]=1;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C2->Caption)+".";
  Procarr[2][4]=1;
  }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C2->Caption)+".";
  Procarr[2][5]=1;
  }
else if ((Edit27->Text).Pos(".")==0)   {
  Edit27->Text=(C2->Caption)+".";
  Procarr[2][6]=1;
  }
else if ((Edit28->Text).Pos(".")==0)   {
  Edit28->Text=(C2->Caption)+".";
  Procarr[2][7]=1;
  }
else if ((Edit29->Text).Pos(".")==0)    {
  Edit29->Text=(C2->Caption)+".";
  Procarr[2][8]=1;
  }
else if ((Edit30->Text).Pos(".")==0)   {
  Edit30->Text=(C2->Caption)+".";
  Procarr[2][9]=1;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C3Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)    {
  Edit21->Text=(C3->Caption)+".";
  Procarr[2][0]=2;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C3->Caption)+".";
   Procarr[2][1]=2;
   }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C3->Caption)+".";
   Procarr[2][2]=2;
   }
else if ((Edit24->Text).Pos(".")==0)   {
  Edit24->Text=(C3->Caption)+".";
   Procarr[2][3]=2;
   }
else if ((Edit25->Text).Pos(".")==0)   {
  Edit25->Text=(C3->Caption)+".";
   Procarr[2][4]=2;
   }
else if ((Edit26->Text).Pos(".")==0)    {
  Edit26->Text=(C3->Caption)+".";
   Procarr[2][5]=2;
   }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C3->Caption)+".";
   Procarr[2][6]=2;
   }
else if ((Edit28->Text).Pos(".")==0)   {
  Edit28->Text=(C3->Caption)+".";
   Procarr[2][7]=2;
   }
else if ((Edit29->Text).Pos(".")==0)    {
  Edit29->Text=(C3->Caption)+".";
   Procarr[2][8]=2;
   }
else if ((Edit30->Text).Pos(".")==0)    {
  Edit30->Text=(C3->Caption)+".";
   Procarr[2][9]=2;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C4Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0) {
  Edit21->Text=(C4->Caption)+".";
   Procarr[2][0]=3;
   }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C4->Caption)+".";
  Procarr[2][1]=3;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C4->Caption)+".";
  Procarr[2][2]=3;
  }
else if ((Edit24->Text).Pos(".")==0)   {
  Edit24->Text=(C4->Caption)+".";
  Procarr[2][3]=3;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C4->Caption)+".";
  Procarr[2][4]=3;
  }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C4->Caption)+".";
  Procarr[2][5]=3;
  }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C4->Caption)+".";
  Procarr[2][6]=3;
  }
else if ((Edit28->Text).Pos(".")==0)  {
  Edit28->Text=(C4->Caption)+".";
  Procarr[2][7]=3;
  }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C4->Caption)+".";
  Procarr[2][8]=3;
  }
else if ((Edit30->Text).Pos(".")==0)  {
  Edit30->Text=(C4->Caption)+".";
  Procarr[2][9]=3;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C5Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)  {
  Edit21->Text=(C5->Caption)+".";
  Procarr[2][0]=4;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C5->Caption)+".";
  Procarr[2][1]=4;
  }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C5->Caption)+".";
  Procarr[2][2]=4;
  }
else if ((Edit24->Text).Pos(".")==0)  {
  Edit24->Text=(C5->Caption)+".";
  Procarr[2][3]=4;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C5->Caption)+".";
  Procarr[2][4]=4;
  }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C5->Caption)+".";
  Procarr[2][5]=4;
  }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C5->Caption)+".";
  Procarr[2][6]=4;
  }
else if ((Edit28->Text).Pos(".")==0)  {
  Edit28->Text=(C5->Caption)+".";
  Procarr[2][7]=4;
  }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C5->Caption)+".";
  Procarr[2][8]=4;
  }
else if ((Edit30->Text).Pos(".")==0)   {
  Edit30->Text=(C5->Caption)+".";
  Procarr[2][9]=4;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C6Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0) {
  Edit21->Text=(C6->Caption)+".";
  Procarr[2][0]=5;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C6->Caption)+".";
   Procarr[2][1]=5;
   }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C6->Caption)+".";
   Procarr[2][2]=5;
   }
else if ((Edit24->Text).Pos(".")==0) {
  Edit24->Text=(C6->Caption)+".";
   Procarr[2][3]=5;
   }
else if ((Edit25->Text).Pos(".")==0) {
  Edit25->Text=(C6->Caption)+".";
   Procarr[2][4]=5;
   }
else if ((Edit26->Text).Pos(".")==0) {
  Edit26->Text=(C6->Caption)+".";
   Procarr[2][5]=5;
   }
else if ((Edit27->Text).Pos(".")==0) {
  Edit27->Text=(C6->Caption)+".";
   Procarr[2][6]=5;
   }
else if ((Edit28->Text).Pos(".")==0) {
  Edit28->Text=(C6->Caption)+".";
   Procarr[2][7]=5;
   }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C6->Caption)+".";
   Procarr[2][8]=5;
   }
else if ((Edit30->Text).Pos(".")==0)  {
  Edit30->Text=(C6->Caption)+".";
   Procarr[2][9]=5;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C7Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)   {
  Edit21->Text=(C7->Caption)+".";
   Procarr[2][0]=6;
   }
else if ((Edit22->Text).Pos(".")==0)  {
  Edit22->Text=(C7->Caption)+".";
  Procarr[2][1]=6;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C7->Caption)+".";
  Procarr[2][2]=6;
  }
else if ((Edit24->Text).Pos(".")==0)   {
  Edit24->Text=(C7->Caption)+".";
  Procarr[2][3]=6;
  }
else if ((Edit25->Text).Pos(".")==0)   {
  Edit25->Text=(C7->Caption)+".";
  Procarr[2][4]=6;
  }
else if ((Edit26->Text).Pos(".")==0)   {
  Edit26->Text=(C7->Caption)+".";
  Procarr[2][5]=6;
  }
else if ((Edit27->Text).Pos(".")==0)   {
  Edit27->Text=(C7->Caption)+".";
  Procarr[2][6]=6;
  }
else if ((Edit28->Text).Pos(".")==0)   {
  Edit28->Text=(C7->Caption)+".";
  Procarr[2][7]=6;
  }
else if ((Edit29->Text).Pos(".")==0)   {
  Edit29->Text=(C7->Caption)+".";
  Procarr[2][8]=6;
  }
else if ((Edit30->Text).Pos(".")==0)   {
  Edit30->Text=(C7->Caption)+".";
  Procarr[2][9]=6;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C8Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0) {
  Edit21->Text=(C8->Caption)+".";
  Procarr[2][0]=7;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C8->Caption)+".";
  Procarr[2][1]=7;
  }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C8->Caption)+".";
  Procarr[2][2]=7;
  }
else if ((Edit24->Text).Pos(".")==0) {
  Edit24->Text=(C8->Caption)+".";
  Procarr[2][3]=7;
  }
else if ((Edit25->Text).Pos(".")==0) {
  Edit25->Text=(C8->Caption)+".";
  Procarr[2][4]=7;
  }
else if ((Edit26->Text).Pos(".")==0) {
  Edit26->Text=(C8->Caption)+".";
  Procarr[2][5]=7;
  }
else if ((Edit27->Text).Pos(".")==0) {
  Edit27->Text=(C8->Caption)+".";
  Procarr[2][6]=7;
  }
else if ((Edit28->Text).Pos(".")==0) {
  Edit28->Text=(C8->Caption)+".";
  Procarr[2][7]=7;
  }
else if ((Edit29->Text).Pos(".")==0) {
  Edit29->Text=(C8->Caption)+".";
  Procarr[2][8]=7;
  }
else if ((Edit30->Text).Pos(".")==0) {
  Edit30->Text=(C8->Caption)+".";
  Procarr[2][9]=7;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C9Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)    {
  Edit21->Text=(C9->Caption)+".";
  Procarr[2][0]=8;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C9->Caption)+".";
  Procarr[2][1]=8;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C9->Caption)+".";
  Procarr[2][2]=8;
  }
else if ((Edit24->Text).Pos(".")==0)  {
  Edit24->Text=(C9->Caption)+".";
  Procarr[2][3]=8;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C9->Caption)+".";
  Procarr[2][4]=8;
  }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C9->Caption)+".";
  Procarr[2][5]=8;
  }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C9->Caption)+".";
  Procarr[2][6]=8;
  }
else if ((Edit28->Text).Pos(".")==0)  {
  Edit28->Text=(C9->Caption)+".";
  Procarr[2][7]=8;
  }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C9->Caption)+".";
  Procarr[2][8]=8;
  }
else if ((Edit30->Text).Pos(".")==0)  {
  Edit30->Text=(C9->Caption)+".";
  Procarr[2][9]=8;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C10Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)   {
  Edit21->Text=(C10->Caption)+".";
  Procarr[2][0]=9;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C10->Caption)+".";
  Procarr[2][1]=9;
  }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C10->Caption)+".";
  Procarr[2][2]=9;
  }
else if ((Edit24->Text).Pos(".")==0) {
  Edit24->Text=(C10->Caption)+".";
  Procarr[2][3]=9;
  }
else if ((Edit25->Text).Pos(".")==0) {
  Edit25->Text=(C10->Caption)+".";
  Procarr[2][4]=9;
  }
else if ((Edit26->Text).Pos(".")==0) {
  Edit26->Text=(C10->Caption)+".";
  Procarr[2][5]=9;
  }
else if ((Edit27->Text).Pos(".")==0) {
  Edit27->Text=(C10->Caption)+".";
  Procarr[2][6]=9;
  }
else if ((Edit28->Text).Pos(".")==0) {
  Edit28->Text=(C10->Caption)+".";
  Procarr[2][7]=9;
  }
else if ((Edit29->Text).Pos(".")==0) {
  Edit29->Text=(C10->Caption)+".";
  Procarr[2][8]=9;
  }
else if ((Edit30->Text).Pos(".")==0) {
  Edit30->Text=(C10->Caption)+".";
  Procarr[2][9]=9;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C11Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)  {
  Edit21->Text=(C11->Caption)+".";
  Procarr[2][0]=10;
  }
else if ((Edit22->Text).Pos(".")==0)  {
  Edit22->Text=(C11->Caption)+".";
  Procarr[2][1]=10;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C11->Caption)+".";
  Procarr[2][2]=10;
  }
else if ((Edit24->Text).Pos(".")==0)  {
  Edit24->Text=(C11->Caption)+".";
  Procarr[2][3]=10;
  }
else if ((Edit25->Text).Pos(".")==0)  {
  Edit25->Text=(C11->Caption)+".";
  Procarr[2][4]=10;
  }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C11->Caption)+".";
  Procarr[2][5]=10;
  }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C11->Caption)+".";
  Procarr[2][6]=10;
  }
else if ((Edit28->Text).Pos(".")==0)  {
  Edit28->Text=(C11->Caption)+".";
  Procarr[2][7]=10;
  }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C11->Caption)+".";
  Procarr[2][8]=10;
  }
else if ((Edit30->Text).Pos(".")==0)  {
  Edit30->Text=(C11->Caption)+".";
  Procarr[2][9]=10;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C12Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)  {
  Edit21->Text=(C12->Caption)+".";
  Procarr[2][0]=11;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C12->Caption)+".";
  Procarr[2][1]=11;
  }
else if ((Edit23->Text).Pos(".")==0)  {
  Edit23->Text=(C12->Caption)+".";
   Procarr[2][2]=11;
   }
else if ((Edit24->Text).Pos(".")==0)  {
  Edit24->Text=(C12->Caption)+".";
   Procarr[2][3]=11;
   }
else if ((Edit25->Text).Pos(".")==0)   {
  Edit25->Text=(C12->Caption)+".";
   Procarr[2][4]=11;
   }
else if ((Edit26->Text).Pos(".")==0)  {
  Edit26->Text=(C12->Caption)+".";
   Procarr[2][5]=11;
   }
else if ((Edit27->Text).Pos(".")==0)  {
  Edit27->Text=(C12->Caption)+".";
   Procarr[2][6]=11;
   }
else if ((Edit28->Text).Pos(".")==0)  {
  Edit28->Text=(C12->Caption)+".";
   Procarr[2][7]=11;
   }
else if ((Edit29->Text).Pos(".")==0)  {
  Edit29->Text=(C12->Caption)+".";
   Procarr[2][8]=11;
   }
else if ((Edit30->Text).Pos(".")==0)  {
  Edit30->Text=(C12->Caption)+".";
   Procarr[2][9]=11;
   }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C13Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)     {
  Edit21->Text=(C13->Caption)+".";
   Procarr[2][0]=12;
   }
else if ((Edit22->Text).Pos(".")==0)  {
  Edit22->Text=(C13->Caption)+".";
  Procarr[2][1]=12;
  }
else if ((Edit23->Text).Pos(".")==0)   {
  Edit23->Text=(C13->Caption)+".";
  Procarr[2][2]=12;
  }
else if ((Edit24->Text).Pos(".")==0)   {
  Edit24->Text=(C13->Caption)+".";
  Procarr[2][3]=12;
  }
else if ((Edit25->Text).Pos(".")==0)   {
  Edit25->Text=(C13->Caption)+".";
  Procarr[2][4]=12;
  }
else if ((Edit26->Text).Pos(".")==0)   {
  Edit26->Text=(C13->Caption)+".";
  Procarr[2][5]=12;
  }
else if ((Edit27->Text).Pos(".")==0)   {
  Edit27->Text=(C13->Caption)+".";
  Procarr[2][6]=12;
  }
else if ((Edit28->Text).Pos(".")==0)   {
  Edit28->Text=(C13->Caption)+".";
  Procarr[2][7]=12;
  }
else if ((Edit29->Text).Pos(".")==0)   {
  Edit29->Text=(C13->Caption)+".";
  Procarr[2][8]=12;
  }
else if ((Edit30->Text).Pos(".")==0)   {
  Edit30->Text=(C13->Caption)+".";
  Procarr[2][9]=12;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::C14Click(TObject *Sender)
{
if ((Edit21->Text).Pos(".")==0)   {
  Edit21->Text=(C14->Caption)+".";
  Procarr[2][0]=13;
  }
else if ((Edit22->Text).Pos(".")==0) {
  Edit22->Text=(C14->Caption)+".";
  Procarr[2][1]=13;
  }
else if ((Edit23->Text).Pos(".")==0) {
  Edit23->Text=(C14->Caption)+".";
  Procarr[2][2]=13;
  }
else if ((Edit24->Text).Pos(".")==0) {
  Edit24->Text=(C14->Caption)+".";
  Procarr[2][3]=13;
  }
else if ((Edit25->Text).Pos(".")==0) {
  Edit25->Text=(C14->Caption)+".";
  Procarr[2][4]=13;
  }
else if ((Edit26->Text).Pos(".")==0) {
  Edit26->Text=(C14->Caption)+".";
  Procarr[2][5]=13;
  }
else if ((Edit27->Text).Pos(".")==0) {
  Edit27->Text=(C14->Caption)+".";
  Procarr[2][6]=13;
  }
else if ((Edit28->Text).Pos(".")==0) {
  Edit28->Text=(C14->Caption)+".";
  Procarr[2][7]=13;
  }
else if ((Edit29->Text).Pos(".")==0) {
  Edit29->Text=(C14->Caption)+".";
  Procarr[2][8]=13;
  }
else if ((Edit30->Text).Pos(".")==0) {
  Edit30->Text=(C14->Caption)+".";
  Procarr[2][9]=13;
  }
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::Button1Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
Edit7->Text="";
Edit8->Text="";
Edit9->Text="";
Edit10->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::Button2Click(TObject *Sender)
{
Edit11->Text="";
Edit12->Text="";
Edit13->Text="";
Edit14->Text="";
Edit15->Text="";
Edit16->Text="";
Edit17->Text="";
Edit18->Text="";
Edit19->Text="";
Edit20->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::Button3Click(TObject *Sender)
{
Edit21->Text="";
Edit22->Text="";
Edit23->Text="";
Edit24->Text="";
Edit25->Text="";
Edit26->Text="";
Edit27->Text="";
Edit28->Text="";
Edit29->Text="";
Edit30->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::Button4Click(TObject *Sender)
{
k=0;
P1->Caption=" ";
P2->Caption=" ";
P3->Caption=" ";
a=0; b=0; c=0;
Timer1->Enabled=true;
Edit1->Color=clWindow;
Edit11->Color=clWindow;
Edit21->Color=clWindow;
Edit1->Text="";
Edit1->Enabled=true;
Edit2->Text="";
Edit2->Enabled=false;
Edit2->Visible=false;
Edit3->Text="";
Edit3->Enabled=false;
Edit3->Visible=false;
Edit4->Text="";
Edit4->Enabled=false;
Edit4->Visible=false;
Edit5->Text="";
Edit5->Enabled=false;
Edit5->Visible=false;
Edit6->Text="";
Edit6->Enabled=false;
Edit6->Visible=false;
Edit7->Text="";
Edit7->Enabled=false;
Edit7->Visible=false;
Edit8->Text="";
Edit8->Enabled=false;
Edit8->Visible=false;
Edit9->Text="";
Edit9->Enabled=false;
Edit9->Visible=false;
Edit10->Text="";
Edit10->Enabled=false;
Edit10->Visible=false;
Edit11->Text="";
Edit11->Enabled=true;
Edit11->Visible=true;
Edit12->Text="";
Edit12->Enabled=false;
Edit12->Visible=false;
Edit13->Text="";
Edit13->Enabled=false;
Edit13->Visible=false;
Edit14->Text="";
Edit14->Enabled=false;
Edit14->Visible=false;
Edit15->Text="";
Edit15->Enabled=false;
Edit15->Visible=false;
Edit16->Text="";
Edit16->Enabled=false;
Edit16->Visible=false;
Edit17->Text="";
Edit17->Enabled=false;
Edit17->Visible=false;
Edit18->Text="";
Edit18->Enabled=false;
Edit18->Visible=false;
Edit19->Text="";
Edit19->Enabled=false;
Edit19->Visible=false;
Edit20->Text="";
Edit20->Enabled=false;
Edit20->Visible=false;
Edit21->Text="";
Edit21->Enabled=true;
Edit21->Visible=true;
Edit22->Text="";
Edit22->Enabled=false;
Edit22->Visible=false;
Edit23->Text="";
Edit23->Enabled=false;
Edit23->Visible=false;
Edit24->Text="";
Edit24->Enabled=false;
Edit24->Visible=false;
Edit25->Text="";
Edit25->Enabled=false;
Edit25->Visible=false;
Edit26->Text="";
Edit26->Enabled=false;
Edit26->Visible=false;
Edit27->Text="";
Edit27->Enabled=false;
Edit27->Visible=false;
Edit27->Text="";
Edit28->Enabled=false;
Edit28->Visible=false;
Edit29->Text="";
Edit29->Enabled=false;
Edit29->Visible=false;
Edit30->Text="";
Edit30->Enabled=false;
Edit30->Visible=false;
i1=0; i2=0; i3=0;
l1=true; l2=true; l3=true;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TMakevr::Button5Click(TObject *Sender)
{
l1=false;  l2=false;  l3=false;
Timer1->Enabled=false;
Edit1->Color=clWindow;
Edit11->Color=clWindow;
Edit21->Color=clWindow;
P1->Caption=" ";
P2->Caption=" ";
P3->Caption=" ";
Edit2->Visible=true;
 Edit2->Enabled=true;
 Edit3->Visible=true;
 Edit3->Enabled=true;
 Edit4->Visible=true;
 Edit4->Enabled=true;
 Edit5->Visible=true;
 Edit5->Enabled=true;
 Edit6->Visible=true;
 Edit6->Enabled=true;
 Edit7->Visible=true;
 Edit7->Enabled=true;
 Edit8->Visible=true;
 Edit8->Enabled=true;
 Edit9->Visible=true;
 Edit9->Enabled=true;
 Edit10->Visible=true;
 Edit10->Enabled=true;
 Edit12->Visible=true;
 Edit12->Enabled=true;
 Edit13->Visible=true;
 Edit13->Enabled=true;
 Edit14->Visible=true;
 Edit14->Enabled=true;
 Edit15->Visible=true;
 Edit15->Enabled=true;
 Edit16->Visible=true;
 Edit16->Enabled=true;
 Edit17->Visible=true;
 Edit17->Enabled=true;
 Edit18->Visible=true;
 Edit18->Enabled=true;
 Edit19->Visible=true;
 Edit19->Enabled=true;
 Edit20->Visible=true;
 Edit20->Enabled=true;
 Edit21->Visible=true;
 Edit21->Enabled=true;
 Edit22->Visible=true;
 Edit22->Enabled=true;
 Edit23->Visible=true;
 Edit23->Enabled=true;
 Edit24->Visible=true;
 Edit24->Enabled=true;
 Edit25->Visible=true;
 Edit25->Enabled=true;
 Edit26->Visible=true;
 Edit26->Enabled=true;
 Edit27->Visible=true;
 Edit27->Enabled=true;
 Edit28->Visible=true;
 Edit28->Enabled=true;
 Edit29->Visible=true;
 Edit29->Enabled=true;
 Edit30->Visible=true;
 Edit30->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TMakevr::Timer1Timer(TObject *Sender)
{
if (i1==20)
{
 P1->Caption="Завершён";
 Edit1->Color=clGreen;
goto m1;
}
showcom (i1, 1, Edit1);
if (Procarr[0][i1]==0)
{
 f1(Edit, buf1);
}
else if (Procarr[0][i1]==1)
{
  f2(FlashData, buf1, l1, a, 1);
}
else if (Procarr[0][i1]==2)
{
   f3(FlashData, buf1, l1, b, 1);
}
else if (Procarr[0][i1]==3)
{
    f4(FlashData, buf1, l1, c, 1);
}
else if (Procarr[0][i1]==4)
{
   f5_6_7(a, 1, l1);
}
else if (Procarr[0][i1]==5)
{
    f5_6_7(b, 1, l1);
}
else if (Procarr[0][i1]==6)
{
    f5_6_7(c, 1, l1);
}
else if (Procarr[0][i1]==7)
{
    f8(buf1, Edit);
}
else if (Procarr[0][i1]==8)
{
    f9_10_11(a, 1, l1);
}
else if (Procarr[0][i1]==9)
{
    f9_10_11(b, 1, l1);
}
else if (Procarr[0][i1]==10)
{
    f9_10_11(c, 1, l1);
}
else if (Procarr[0][i1]==11)
{
    f12(buf1, FlashData, l1, a, 1);
}
else if (Procarr[0][i1]==12)
{
    f13(buf1, FlashData, l1, b, 1);
}
else if (Procarr[0][i1]==13)
{
    f14(buf1, FlashData, l1, c, 1);
}
if (l1)
{
 i1++;
 Edit1->Color=clWindow;
  P1->Caption=" ";
}
else
{
 Edit1->Color=clRed;
 P1->Caption="Заблокирован";
}
m1:

if (i2==20)
{
 P2->Caption="Завершён";
 Edit11->Color=clGreen;
goto m2;
}
showcom (i2, 2, Edit11);
if (Procarr[1][i2]==0)
{
 f1(Edit, buf2);
}
 else if (Procarr[1][i2]==1)
{
  f2(FlashData, buf2, l2, a, 2);
}

else if (Procarr[1][i2]==2)
{
   f3(FlashData, buf2, l2, b, 2);
}
else if (Procarr[1][i2]==3)
{
    f4(FlashData, buf2, l2, c, 2);
}
else if (Procarr[1][i2]==4)
{
    f5_6_7(a, 2, l2);
}
else if (Procarr[1][i2]==5)
{
    f5_6_7(b, 2, l2);
}
else if (Procarr[1][i2]==6)
{
    f5_6_7(c, 2, l2);
}
else if (Procarr[1][i2]==7)
{
    f8(buf2, Edit);
}
else if (Procarr[1][i2]==8)
{
    f9_10_11(a, 2, l2);
}
else if (Procarr[1][i2]==9)
{
    f9_10_11(b, 2, l2);
}
else if (Procarr[1][i2]==10)
{
    f9_10_11(c, 2, l2);
}
else if (Procarr[1][i2]==11)
{
    f12(buf2, FlashData, l2, a, 2);
}
else if (Procarr[1][i2]==12)
{
    f13(buf2, FlashData, l2, b, 2);
}
else if (Procarr[1][i2]==13)
{
    f14(buf2, FlashData, l2, c, 2);
}
 if (l2)
 {
  i2++;
   Edit11->Color=clWindow;
    P2->Caption=" ";
 }
 else
 {
 Edit11->Color=clRed;
 P2->Caption="Заблокирован";
 }

m2:

if (i3==20)
{
 P3->Caption="Завершён";
 Edit21->Color=clGreen;
goto m3;
}
showcom (i3, 3, Edit21);
if (Procarr[2][i3]==0)
{
 f1(Edit, buf3);
}
else if (Procarr[2][i3]==1)
{
  f2(FlashData, buf3, l3, a, 3);
}
else if (Procarr[2][i3]==2)
{
   f3(FlashData, buf3, l3, b, 3);
}
else if (Procarr[2][i3]==3)
{
    f4(FlashData, buf3, l3, c, 3);
}
else if (Procarr[2][i3]==4)
{
    f5_6_7(a, 3, l3);
}
else if (Procarr[2][i3]==5)
{
    f5_6_7(b, 3, l3);
}
else if (Procarr[2][i3]==6)
{
    f5_6_7(c, 3, l3);
}
else if (Procarr[2][i3]==7)
{
    f8(buf3, Edit);
}
else if (Procarr[2][i3]==8)
{
    f9_10_11(a, 3, l3);
}
else if (Procarr[2][i3]==9)
{
    f9_10_11(b, 3, l3);
}
else if (Procarr[2][i3]==10)
{
    f9_10_11(c, 3, l3);
}
else if (Procarr[2][i3]==11)
{
    f12(buf3, FlashData, l3, a, 3);
}
else if (Procarr[2][i3]==12)
{
    f13(buf3, FlashData, l3, b, 3);
}
else if (Procarr[2][i3]==13)
{
    f14(buf3, FlashData, l3, c, 3);
}
 if (l3)
 {
  i3++;
  Edit21->Color=clWindow;
  P3->Caption=" ";
 }
 else
 {
 Edit21->Color=clRed;
 P3->Caption="Заблокирован";
 }
m3:
k++;

if (i1==20 && i2==20 && i3==20)
{
 k=0;
 Timer1->Enabled=false;
 Edit1->Text="";
 Edit11->Text="";
 Edit21->Text="";
 i1=0; i2=0; i3=0;
 Edit2->Visible=true;
 Edit2->Enabled=true;
 Edit3->Visible=true;
 Edit3->Enabled=true;
 Edit4->Visible=true;
 Edit4->Enabled=true;
 Edit5->Visible=true;
 Edit5->Enabled=true;
 Edit6->Visible=true;
 Edit6->Enabled=true;
 Edit7->Visible=true;
 Edit7->Enabled=true;
 Edit8->Visible=true;
 Edit8->Enabled=true;
 Edit9->Visible=true;
 Edit9->Enabled=true;
 Edit10->Visible=true;
 Edit10->Enabled=true;
 Edit12->Visible=true;
 Edit12->Enabled=true;
 Edit13->Visible=true;
 Edit13->Enabled=true;
 Edit14->Visible=true;
 Edit14->Enabled=true;
 Edit15->Visible=true;
 Edit15->Enabled=true;
 Edit16->Visible=true;
 Edit16->Enabled=true;
 Edit17->Visible=true;
 Edit17->Enabled=true;
 Edit18->Visible=true;
 Edit18->Enabled=true;
 Edit19->Visible=true;
 Edit19->Enabled=true;
 Edit20->Visible=true;
 Edit20->Enabled=true;
 Edit21->Visible=true;
 Edit21->Enabled=true;
 Edit22->Visible=true;
 Edit22->Enabled=true;
 Edit23->Visible=true;
 Edit23->Enabled=true;
 Edit24->Visible=true;
 Edit24->Enabled=true;
 Edit25->Visible=true;
 Edit25->Enabled=true;
 Edit26->Visible=true;
 Edit26->Enabled=true;
 Edit27->Visible=true;
 Edit27->Enabled=true;
 Edit28->Visible=true;
 Edit28->Enabled=true;
 Edit29->Visible=true;
 Edit29->Enabled=true;
 Edit30->Visible=true;
 Edit30->Enabled=true;
}
}
void __fastcall TMakevr::Button6Click(TObject *Sender)
{
    Mainmenu->Show();
    Makevr->Close();
}
//---------------------------------------------------------------------------









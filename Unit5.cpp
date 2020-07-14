//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TByzantGenerals *ByzantGenerals;
TStringGrid *PrTab;
bool Sved[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int Zased[4]={0,0,0,0};
int Polog=0;
class General
{
 protected:
 AnsiString action;
 int num;
 AnsiString Allpr[4];
 bool D;
 public:
 General(int g)
 {
  action="����� ������";
  D=0;
  num=g;
 }
 void Poluchpr(AnsiString prikaz)
 {
   action=prikaz;
   if (action=="���������")
     D=true;
   else
     D=false;
 }
 void tallpr(General &X, AnsiString pr)
 {
    X.Allpr[num]=pr;
 }
 void showpr(TStringGrid *T)
 {
   T->Cells[0][num]=Allpr[0];
   T->Cells[1][num]=Allpr[1];
   T->Cells[2][num]=Allpr[2];
   T->Cells[3][num]=Allpr[3];
 }
};
class Commander: public General
{
 bool ListGetPr[4];
 AnsiString ListPr[4];
 public:
 void  SendPrikaz (AnsiString prikaz, int gen, General &G)
 {
   General: G.Poluchpr(prikaz);
   ListPr[gen]= prikaz;
 }
 Commander(int g): General ( g)
 {
   ListPr[0]="����� ������";
   ListPr[1]="����� ������";
   ListPr[2]="����� ������";
   ListPr[3]="����� ������";
    for (int i=0; i<4; i++)
      ListGetPr[i]=0;
 }
};
General G1(0);
General G2(1);
General G3(2);
General G4(3);
Commander G(4);

//---------------------------------------------------------------------------
__fastcall TByzantGenerals::TByzantGenerals(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TByzantGenerals::BitBtn2Click(TObject *Sender)
{
Edit1->Text=Edit->Text;
:: G1.Poluchpr(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TByzantGenerals::BitBtn3Click(TObject *Sender)
{
Edit2->Text=Edit->Text;
:: G2.Poluchpr(Edit2->Text);
}
//---------------------------------------------------------------------------
void __fastcall TByzantGenerals::BitBtn4Click(TObject *Sender)
{
Edit3->Text=Edit->Text;
:: G3.Poluchpr(Edit3->Text);
}
//---------------------------------------------------------------------------
void __fastcall TByzantGenerals::BitBtn5Click(TObject *Sender)
{
Edit4->Text=Edit->Text;
:: G4.Poluchpr(Edit4->Text);
}
//---------------------------------------------------------------------------
void __fastcall TByzantGenerals::BitBtn6Click(TObject *Sender)
{
if ((Edit5->Text).Pos("2"))
:: G1.tallpr(:: G2, Edit1->Text);
if ((Edit5->Text).Pos("3"))
:: G1.tallpr(:: G3, Edit1->Text);
if ((Edit5->Text).Pos("4"))
:: G1.tallpr(:: G4, Edit1->Text);
/*:: G1.showpr(PrTab); :: G2.showpr(PrTab);
:: G3.showpr(PrTab); :: G4.showpr(PrTab); */
}
//---------------------------------------------------------------------------

void __fastcall TByzantGenerals::BitBtn7Click(TObject *Sender)
{
if ((Edit6->Text).Pos("1"))
:: G2.tallpr(:: G1, Edit2->Text);
if ((Edit6->Text).Pos("3"))
:: G2.tallpr(:: G3, Edit2->Text);
if ((Edit6->Text).Pos("4"))
:: G2.tallpr(:: G4, Edit2->Text);
/*:: G1.showpr(PrTab); :: G2.showpr(PrTab);
:: G3.showpr(PrTab); :: G4.showpr(PrTab); */
}
//---------------------------------------------------------------------------
void __fastcall TByzantGenerals::BitBtn8Click(TObject *Sender)
{
if ((Edit7->Text).Pos("1"))
:: G3.tallpr(:: G1, Edit3->Text);
if ((Edit7->Text).Pos("2"))
:: G3.tallpr(:: G2, Edit3->Text);
if ((Edit7->Text).Pos("4"))
:: G3.tallpr(:: G4, Edit3->Text);
/*:: G1.showpr(PrTab); :: G2.showpr(PrTab);
:: G3.showpr(PrTab); :: G4.showpr(PrTab); */
}
void __fastcall TByzantGenerals::BitBtn9Click(TObject *Sender)
{
if ((Edit8->Text).Pos("1"))
:: G4.tallpr(:: G1, Edit4->Text);
if ((Edit8->Text).Pos("2"))
:: G4.tallpr(:: G2, Edit4->Text);
if ((Edit8->Text).Pos("3"))
:: G4.tallpr(:: G3, Edit4->Text);
/*:: G1.showpr(PrTab); :: G2.showpr(PrTab);
:: G3.showpr(PrTab); :: G4.showpr(PrTab); */
}

void __fastcall TByzantGenerals::Button1Click(TObject *Sender)
{  :: G1.tallpr(:: G1, Edit1->Text);
   :: G2.tallpr(:: G2, Edit2->Text);
   :: G3.tallpr(:: G3, Edit3->Text);
   :: G4.tallpr(:: G4, Edit4->Text);
:: G1.showpr(PrTab); :: G2.showpr(PrTab);
:: G3.showpr(PrTab); :: G4.showpr(PrTab);

for (int i=0;i<4;i++)
 for (int j=0;j<4;j++)
 if ((PrTab->Cells[j][i]).Pos("���������"))
  Sved[i][j]=true; else Sved[i][j]=false;
}


//---------------------------------------------------------------------------

void __fastcall TByzantGenerals::BitBtn1Click(TObject *Sender)
{
 if (Sved[0][0])
   Zased[0]=1;
 else
   Zased[0]=0;
 if (Sved[0][1])
   Zased[1]=1;
 else
   Zased[1]=0;
 if (Sved[0][2])
   Zased[2]=1;
 else
   Zased[2]=0;
 if (Sved[0][3])
   Zased[3]=1;
 else
   Zased[3]=0;
 for (int i=0; i<3; i++)
 if (Sved[i][0] && !(Sved[i+1][0]) ||  Sved[i+1][0] && !(Sved[i][0]))
     Zased[0]=2;
 for (int i=0; i<3; i++)
 if (Sved[i][1] && !(Sved[i+1][1]) ||  Sved[i+1][1] && !(Sved[i][1]))
     Zased[1]=2;
 for (int i=0; i<3; i++)
 if (Sved[i][2] && !(Sved[i+1][2]) ||  Sved[i+1][2] && !(Sved[i][2]))
     Zased[2]=2;
 for (int i=0; i<3; i++)
  if (Sved[i][3] && !(Sved[i+1][3]) ||  Sved[i+1][3] && !(Sved[i][3]))
     Zased[3]=2;
  int k=0;
    for (int i=0; i<4; i++)
         if (Zased[i]==2)
          k++;
    if (k>1)
     Polog=4;
    if (k==1)
    {
     Polog=3;
     goto m;
    }
    for (int i=0; i<3; i++)
      if  (Zased[i]==0 && Zased[i+1]!=0 || Zased[i+1]==0 && Zased[i]!=0)
      {
       Polog=2;
       goto m;
      }
    if (Zased[0]==1 &&  Zased[1]==1 && Zased[2]==1 && Zased[3]==1)
     Polog=1;
     else if (Zased[0]==0 &&  Zased[1]==0 && Zased[2]==0 && Zased[3]==0)
     Polog=0;
m:
   if (Polog==4) {
    Or->Caption="�������� �� ������ ������������.";
    Pr->Caption="���������� ���������. � ������� ����������.";
    Itog->Caption="����� �������������.";
    }
   if (Polog==3)
   {
    if (Zased[0]==2)
      Pr->Caption="������� 1 - ���������.";
    else if (Zased[1]==2)
      Pr->Caption="������� 2 - ���������.";
    else if (Zased[2]==2)
      Pr->Caption="������� 3 - ���������.";
    else if (Zased[3]==2)
      Pr->Caption="������� 4 - ���������.";
     if (Zased[0]==1 && Zased[1]==1  &&  Zased[2]==1 ||
     Zased[0]==1 && Zased[2]==1  &&  Zased[3]==1 ||
     Zased[1]==1 && Zased[2]==1  &&  Zased[3]==1 ||
     Zased[0]==1 && Zased[1]==1  &&  Zased[3]==1)
     {
        Or->Caption="������-���������!";
        Itog->Caption="������ �������� ����������.";
     }
     else
     {
        Or->Caption="������-���������!";
        Itog->Caption="������� �������� ���������, ����� ��������� �����.";
     }
   }
   if (Polog==2)
   {
     Pr->Caption="����������������� �������� - ���������.";
     if (Zased[0]==1 && Zased[1]==1  &&  Zased[2]==1 ||
     Zased[0]==1 && Zased[2]==1  &&  Zased[3]==1 ||
     Zased[1]==1 && Zased[2]==1  &&  Zased[3]==1 ||
     Zased[0]==1 && Zased[1]==1  &&  Zased[3]==1)
     {
        Or->Caption="������-���������!";
        Itog->Caption="������ �������� ����������.";
     }
     else
     {
        Or->Caption="������-���������!";
        Itog->Caption="������� �������� ���������, ����� ��������� �����.";
     }
   }
   if (Polog==1)
   {
     Pr->Caption="��� �������� �����.";
     Or->Caption="������-���������!";
     Itog->Caption="������ �������� ����������.";
   }
   if (Polog==0)
   {
     Pr->Caption="��� �������� �����.";
     Or->Caption="������-���������!";
     Itog->Caption="������� �������� ���������, ����� ��������� �����.";
   }
   if ((Edit1->Text).Pos("����� ������") || (Edit2->Text).Pos("����� ������")
   || (Edit3->Text).Pos("����� ������") || (Edit4->Text).Pos("����� ������"))
   {
    Or->Caption="����� �������.";
    Pr->Caption="������������.";
    Itog->Caption="����� ������ ������� ���� ��������� � ���� �� ���������� ����������.";
   }
   if (!((Edit1->Text).Pos("���������")) && !((Edit1->Text).Pos("���������"))
   || !((Edit2->Text).Pos("���������")) && !((Edit2->Text).Pos("���������"))
   || !((Edit3->Text).Pos("���������")) && !((Edit3->Text).Pos("���������"))
   || !((Edit4->Text).Pos("���������")) && !((Edit4->Text).Pos("���������")))
    { Or->Caption="����� �������.";
    Pr->Caption="������������.";
    Itog->Caption="����� ������ ������� ���� ��������� � ���� �� ���������� ����������.";
    }
}
//---------------------------------------------------------------------------


void __fastcall TByzantGenerals::Button2Click(TObject *Sender)
{
ByzantGenerals->Close();
Mainmenu->Show();
}
//---------------------------------------------------------------------------


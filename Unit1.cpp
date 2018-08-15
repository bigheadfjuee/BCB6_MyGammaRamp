//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "gammaramp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

	//Example for changing the brightness with CGammaRamp class:
	//Be aware that this exmaple may not work properly in all
	//Video cards.
CGammaRamp GammaRamp;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
  // Max : 128 => Normal
	GammaRamp.SetBrightness(NULL, ScrollBar1->Position);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnDarkClick(TObject *Sender)
{
  ScrollBar1->Position = ScrollBar1->Min; // Dark
  GammaRamp.SetBrightness(NULL, ScrollBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnResetClick(TObject *Sender)
{
  ScrollBar1->Position = ScrollBar1->Max; // Reset
  GammaRamp.SetBrightness(NULL, ScrollBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  GammaRamp.SetBrightness(NULL, ScrollBar1->Max); // Normal
}
//---------------------------------------------------------------------------


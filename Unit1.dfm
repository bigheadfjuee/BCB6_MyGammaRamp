object Form1: TForm1
  Left = 663
  Top = 193
  Width = 392
  Height = 156
  Caption = 'CGammaRamp'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 120
  TextHeight = 16
  object ScrollBar1: TScrollBar
    Left = 16
    Top = 24
    Width = 337
    Height = 25
    Max = 128
    PageSize = 0
    Position = 128
    TabOrder = 0
    OnChange = ScrollBar1Change
  end
  object btnDark: TButton
    Left = 16
    Top = 64
    Width = 75
    Height = 33
    Caption = 'Dark'
    TabOrder = 1
    OnClick = btnDarkClick
  end
  object btnReset: TButton
    Left = 280
    Top = 64
    Width = 75
    Height = 33
    Caption = 'Reset'
    TabOrder = 2
    OnClick = btnResetClick
  end
end

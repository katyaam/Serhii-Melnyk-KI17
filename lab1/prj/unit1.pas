unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls, Validator;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Edit1: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure Label2Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Edit1Change(Sender: TObject);
begin

end;

procedure TForm1.Button1Click(Sender: TObject);
var
  rand: integer;
  bukvi: array [0..17] of string = ( 'Є', 'Ж', 'З', 'И', 'І', 'Ї', 'Й',
  'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф');
begin
  randomize;
  rand:=random(17);
  Edit1.Text:=bukvi[rand];

end;


procedure TForm1.Button2Click(Sender: TObject);
var mon, day, year : word;
begin
  DecodeDate (Date, year, mon, day);
  Edit1.Text := IntToStr(day) + '.' + IntToStr(mon) + '.' + IntToStr(year);
end;


procedure TForm1.Button3Click(Sender: TObject);
var str, wd : string;
   bool : boolean;
   y : byte;
begin
  str := Label1.Caption;
  wd := Edit1.Text;
  bool := Valid(wd);
  if (bool = true) then begin
     y := pos(wd, str);
       if y > 0 then Edit1.Text := 'Слово присутнє!'
       else Edit1.Text := 'Слово відсутнє!';
       end
       else Edit1.Text := 'Некоректно введені дані';
end;


procedure TForm1.Label2Click(Sender: TObject);
begin

end;

end.


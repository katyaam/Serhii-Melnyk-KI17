unit unit2;

{$mode objfpc}{$H+}

interface

uses
  Validator1_2, Math, Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Edit2Change(Sender: TObject);
    procedure Edit3Change(Sender: TObject);
    procedure Edit4Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Image1Click(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure Label2Click(Sender: TObject);
    procedure Label3Click(Sender: TObject);
    procedure Label4Click(Sender: TObject);
    procedure Label5Click(Sender: TObject);
    procedure Label6Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.Image1Click(Sender: TObject);
begin

end;

procedure TForm1.Button1Click(Sender: TObject);
var x, y, z : String;
   q,t,r,x1, y1, z1: real;
  i:byte;
  //x1, y1, z1: integer;

begin
  x:=Edit1.Text;
  y:=Edit2.Text;
  z:=Edit3.Text;
  i:= valid1(x,y,z);
   if (i=0) then
   begin
   Edit4.Text:='Некоректно введені дані.';
   exit;
   end;
  x1:=strtofloat(x);
  y1:= strtofloat(y);
  z1:= strtofloat(z);
  t:= (sin(x1)) / (sqrt( Power(ln(abs(y1*z1)),4)));
  r:=  (sqr(z1)-(x1+y1));
  i:= valid2(z1,x1,y1);
   if (i=0) then
   begin
   Edit4.Text:='Некоректно введені дані.';
   exit;
   end;
   q := z1*(t/r)+3.5;
   Edit4.Text := FloatToStr(q);
end;

procedure TForm1.Edit1Change(Sender: TObject);
begin

end;

procedure TForm1.Edit2Change(Sender: TObject);
begin

end;

procedure TForm1.Edit3Change(Sender: TObject);
begin

end;

procedure TForm1.Edit4Change(Sender: TObject);
begin

end;

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Label2Click(Sender: TObject);
begin

end;

procedure TForm1.Label3Click(Sender: TObject);
begin

end;

procedure TForm1.Label4Click(Sender: TObject);
begin

end;

procedure TForm1.Label5Click(Sender: TObject);
begin

end;

procedure TForm1.Label6Click(Sender: TObject);
begin

end;

end.


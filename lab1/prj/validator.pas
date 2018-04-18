unit Validator;

{$mode objfpc}{$H+}

interface
  function Valid (wd : string):boolean;

implementation
  function Valid (wd : string) : boolean;
  var leng, i, x: byte;
  begin
    i := 1;
    leng := length(wd);
    while (i <= leng) do
      begin
        x := ord(wd[i]);
        if (x >= 122) and (x <= 250){ (x>32) and (x<44) or (x>46) and (x<48) or (x>=58) and (x<=127)}then Valid := true
                                    else begin
                                           Valid := false;
                                           break;
                                         end;
        inc(i);
      end;
  end;

end.


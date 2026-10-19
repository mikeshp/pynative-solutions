(* 
 * Exercise 51: Append Data To A File 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program AppendData;
uses	SysUtils;

var
	datafile: text;
	message: string;
	today: string;
	newline: string;

procedure append_line(var f: text; line: string);
begin
	Append(f);
	writeln(f, line);
	Close(f);
end;

begin

	message := 'Successfully appended.';
	today   := DateToStr(Date);

	Assign(datafile, 'data.txt');

	//FORMING DATE
	newline := 'Date Appended: ' + today; 
	append_line(datafile, newline);

	//FORMING STATUS
	newline := 'Status: ' + message;
	append_line(datafile, newline);

end.

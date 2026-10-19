(* 
 * Exercise 50: Read And Display File Content 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ReadAndDisplay;

var
	lines: array of string;
	human_data: TextFile;
	i: integer;

procedure display_lines(var lines: array of string);
var i: integer;
begin
	for i:=1 to Length(lines) do
	writeln(lines[i - 1]);
end;

begin

	i := 0;

	Assign(human_data, 'data.txt');
	Reset(human_data);
		
		while not EOF(human_data) do
		begin
			inc(i);
			SetLength(lines, i);
			readln(human_data, lines[i - 1]);
		end;
		
	Close(human_data);

	display_lines(lines);

end.

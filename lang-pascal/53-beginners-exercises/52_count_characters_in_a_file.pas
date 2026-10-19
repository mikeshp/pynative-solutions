(* 
 * Exercise 52: Count Characters In A File 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CountCharacters;

var
	datafile: text;
	filename: string;
	count: integer;

function count_characters(var f: text): integer;
var
	ch: char;
	result: integer;
begin
	Result := 0;
	ch := ' ';
	Reset(f);
		while not EOF(f) do
		begin
			read(f, ch);
//			if (ch = #10) or (ch = #13) then continue;
			inc(Result);
		end;
	Close(f);
	count_characters := result;
end;

begin

	filename := 'data.txt';
	Assign(datafile, filename);

	count := count_characters(datafile);
	writeln('Total number of characters in the file: ', count);

end.

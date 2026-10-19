(* 
 * Exercise 53: Count Lines In A File 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program NumberOfLines;

var
	filename: string;
	datafile: text;
	count: integer;

function count_lines(var datafile: text): integer;
var
	result: integer;
begin
	result := 0;
	Reset(datafile);

	while not EOF(datafile) do
	begin
		readln(datafile);
		inc(result);
	end;
	
	Close(datafile);
	count_lines := result;
end;

begin

	write('Enter name of the file: > ');
	readln(filename);

	Assign(datafile, filename);

	count := count_lines(datafile);

	writeln('There are exactly ', count, ' lines in ', filename, '!');

end.

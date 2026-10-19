(* 
 * Exercise 32: String Length Calculation 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program StringLength;

var
	input	: string;
	strLen	: integer;

function calculate_length(const str: AnsiString): integer;
var
	pstring	: PAnsiChar;
	i		: integer = 0;
begin
	pstring := PAnsiChar(str);

	while pstring[i] <> #0
	do i += 1;

	calculate_length := i;
end;

begin

	write('Enter a string: ');
	readln(input);

	strLen := calculate_length(input);
	writeln('The length of the string is: ', strLen);

end.

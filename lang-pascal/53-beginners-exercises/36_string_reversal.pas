(* 
 * Exercise 36: String Reversal 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program	StringReversal;

var
	sentence: string;
	reversed: string;

function reverse_string(const source: string): string;
var
	destination: string;
	i, strlen: integer;
begin
	strlen := length(source);
	destination := '';

	for i := 0 to strlen - 1 do
	destination += source[strlen - i];

	reverse_string := destination;
end;

begin

	write	('Enter a sentence: ');
	read	(sentence);

	reversed := reverse_string(sentence);

	writeln	('Reversed string: ', reversed);

end.

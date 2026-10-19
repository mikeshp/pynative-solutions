(* 
 * Exercise 34: Vowels And Consonants 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program VowelsAndConsonants;

var
	input	: string;
	cntVows	: integer = 0;
	cntCons	: integer = 0;

function isVow(ch: char): boolean;
begin
	if (ch = 'a') or (ch = 'e') or (ch = 'i') or (ch = 'o') or (ch = 'u')
	then isVow := TRUE
	else isVow := FALSE;
end;

procedure count_vows_and_cons(const str: string; var vow: integer; var con: integer);
var
	i: integer;
begin
	for i := 1 to length(str) do
	begin
		if (str[i] >= 'a') and (str[i] <= 'z') then
		begin
			if isVow(str[i]) 
			then vow += 1
			else con += 1;
		end;
	end;
end;

begin

//	input	:= 'Programming in Pascal is fun.';

	write	('Enter a string: ');
	readln	(input);

	count_vows_and_cons(lowercase(input), cntVows, cntCons);

	writeln	(input);
	writeln	('Total Vowels: ', cntVows);
	writeln	('Total Consonants: ', cntCons);

end.

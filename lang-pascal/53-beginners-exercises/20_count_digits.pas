(* 
 * Exercise 20: Count Digits 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CountDigits;
uses	crt;

var
	number: integer;

function countDigits(number: integer): integer;
var
	counter: integer;
begin
	counter	:= 0;

	if	number = 0
	then
		counter := 1
	else
		repeat
			number	:= number div 10;
			counter	:= counter + 1;
		until number = 0;

	countDigits := counter;
end;

begin

	writeln	('Enter a number:');
	write	('> ');
	read	(number);

//	number	:= 3456;

	writeln	('The number ', number, ' has ', countDigits(number), ' digits!');

end.

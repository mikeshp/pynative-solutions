(* 
 * Exercise 09: Check Even Odd 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CheckEvenOdd;
uses	crt;

var
	num: integer;

function isNumberEven(num: integer): boolean;
begin
	if	(num mod 2 <> 0)
	then
		isNumberEven := FALSE
	else
		isNumberEven := TRUE;
end;

begin

	write	('Enter a number: ');
	readln	(num);

	if	(isNumberEven(num))
	then
		writeln('Number ', num, ' is EVEN!')
	else
		writeln('Number ', num, ' is ODD!');
end.

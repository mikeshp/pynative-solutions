(* 
 * Exercise 15: Sum Of Natural Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SumOfNaturalNumbers;
uses	crt;

var
	num: integer;

function sum(num: integer): integer;
var
	s, i: integer;
begin
//	if 	num = 1
//	then
//		sum:= 1
//	else
//		sum:= num + sum(num - 1);
	s := 0;
	for i := 1 to num do s += i;
	sum := s;
end;

begin

//	num := 10;

	write	('Enter max number: ');
	read	(num);

	writeln	('Sum of ', num, ' first natural numbers: ', sum(num));

end.

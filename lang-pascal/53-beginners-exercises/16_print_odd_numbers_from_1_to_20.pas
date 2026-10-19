(* 
 * Exercise 16: Print Odd Numbers From 1 To 20 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program PrintOddNumbers;
uses	crt;

var
	num: integer;

begin

	num := 1;

	repeat
		write(num, ' ');
		num := num + 2;
	until num >= 20;

	writeln();

end.

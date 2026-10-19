(* 
 * Exercise 30: Function For Even Odd 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FunctionEvenOdd;

var
	num_a, num_b: integer;

function isNumberEven(number: integer): boolean;
begin
	if number mod 2 = 0
	then isNumberEven := TRUE
	else isNumberEven := FALSE;
end;

procedure check_even_odd(number: integer);
begin
	if isNumberEven(number)
	then writeln(number, ' is EVEN')
	else writeln(number, ' is ODD');
end;

begin

	write	('Enter number A: ');
	readln	(num_a);
	write	('Enter number B: ');
	readln	(num_b);

	writeln;

	check_even_odd(num_a);
	check_even_odd(num_b);

end.

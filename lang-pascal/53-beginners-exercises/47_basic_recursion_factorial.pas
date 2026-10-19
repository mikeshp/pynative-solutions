(* 
 * Exercise 47: Basic Recursion Factorial 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FactorialRecursion;

var
	number: uint16;
	UserInput: string;
	error: integer;

function factorial(number: uint64): uint64;
begin
	if (number = 0)
	then factorial := 1
	else factorial := number * factorial(number - 1);
end;

begin

//	number := 5;

	repeat
		write('Enter a positive number: ');
		readln(UserInput);
		val(UserInput, number, error);
	until error = 0;

	writeln('Factorial of number ', number, '! is ', factorial(number));

end.

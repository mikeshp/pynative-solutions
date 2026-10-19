(* 
 * Exercise 44: Function With Pointer Pass By Reference 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FunctionPointerReference;

var
	number: int64;

function square_value(var number: int64): int64;
begin
	square_value := number * number;
end;

begin

	number := 5;

	writeln('Original value of x: ', number);

	number := square_value(number);

	writeln('Value of x after function call: ', number);

end.

(* 
 * Exercise 03: Arithmetic Operations 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program
	ArithmeticOperations;
uses
	crt;
var
	a, b: integer;
begin

	a := 10;
	b := 20;

	writeln('Sum: ', b, ' + ', 1, ' = ', a+b);
	writeln('Difference: ', b, ' - ', a, ' = ', b-a);
	writeln('Product: ', a, ' * ', b, ' = ', a*b);
	writeln('Quotent: ', b, ' : ', a, ' = ', (b/a):0:2);

end.

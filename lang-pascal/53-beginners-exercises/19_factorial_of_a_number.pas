(* 
 * Exercise 19: Factorial Of A Number 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program Factorial;
uses	crt;

var
	num, i: integer;
	fac: uint64;

begin

//	num := 5;
	fac := 1;

	write('Enter a number: ');
	read (num);

	for i := 2 to num do fac *= i;	

	writeln('The factorial of ', num, ' is: ', fac);

end.

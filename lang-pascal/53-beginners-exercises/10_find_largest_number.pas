(* 
 * Exercise 10: Find Largest Number 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program FindLargestNumber;
uses	crt;

var
	numA, numB, numC: integer;

begin

//	numA := 10;
	numA := 50;
	numB := 30;
//	numC := 20;
	numC := 40;

	if	(numA >= numB) and (numA >= numC)
	then
		write('A (', numA, ') ')
	else
		begin
			if (numB >= numA) and (numB >= numC)
			then
				write('B (', numB, ') ')
			else
				write('C (', numC, ') ');
		end;

	writeln('is the largest number');

end.

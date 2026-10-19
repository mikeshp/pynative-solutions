(* 
 * Exercise 07: Swap Without Third Variable 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SwapWithoutTemp;
uses	crt;

var
	numA, numB: integer;

procedure swap_numbers();
begin
	numA := numA + numB;
	numB := numA - numB;
	numA := numA - numB;
end;

begin

	numA := 10;
	numB := 20;

	writeln('--- Before Swap ---');
	writeln('A = ', numA, ', B = ', numB);

	swap_numbers();

	writeln('--- After Swap ---');
	writeln('A = ', numA, ', B = ', numB);

end.

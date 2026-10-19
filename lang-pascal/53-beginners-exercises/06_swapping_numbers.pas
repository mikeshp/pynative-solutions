(* 
 * Exercise 06: Swapping Numbers 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program SwappingNumbers;
uses	crt;

var
	temp, numA, numB: integer;

procedure swap_numbers();
begin
	temp := numA;
	numA := numB;
	numB := temp;
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

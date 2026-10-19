(* 
 * Exercise 46: Compare Pointers 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ComparePointers;

type
	IntPointer = ^integer;

var
	intA: integer;
	intB: integer;
	ptrA: IntPointer;
	ptrB: IntPointer;

procedure compare_pointers(A: IntPointer; B: IntPointer);
begin
	if (A^ > B^)
	then writeln('A is larger (Value: ', A^,').')
	else writeln('B is larger (Value: ', B^,').');
end;

begin

	intA := 75;
	intB := 92;
	ptrA := @intA;
	ptrB := @intB;

	writeln('Variable A holds: ', ptrA^);
	writeln('VAriable B holds: ', ptrB^);
	compare_pointers(ptrA, ptrB);

end.

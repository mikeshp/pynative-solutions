(* 
 * Exercise 43: Modifying Value Via Pointer 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ModifyingValue;

var
	data: integer;
	data_ptr: ^integer;

begin

	data := 100;

	writeln('Initial value of data: ', data);

	data_ptr  := @data;
	data_ptr^ := 250;

	writeln('New value of data (modified via pointer): ', data_ptr^);

end.

(* 
 * Exercise 42: Basic Pointer Declaration And Dereference 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program BasicPointer;

var
	num: integer;
	ptr: ^integer;
//	adr_num: word;
	adr_ptr: ^word;

begin

	num := 42;
	ptr := @num;
//	adr_num := addr(@num);	//catnnot?
	adr_ptr := addr(ptr);

	writeln('Value of num: ', num);
//	writeln('Address of num: ', adr_num);
	writeln('Value stored in ptr (address): ', adr_ptr^);
	writeln('Value retrieved by ptr^: ', ptr^);

end.

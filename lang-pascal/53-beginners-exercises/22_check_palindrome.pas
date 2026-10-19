(* 
 * Exercise 22: Check Palindrome 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CheckPalindrome;
uses	sysutils;

var
	input: uint64;
	input_str, rev_str: string;

function reverse_integer(input: uint64): uint64;
var
	temp : uint64;
begin
	temp := 0;

	while (input <> 0) do
	begin
		temp := (temp * 10) + (input mod 10);
		input:= input div 10;
	end;

	reverse_integer	:= temp;
end;

begin

	write	('Enter an integer number: > ');
	readln	(input);

	input_str	:= IntToStr(input);
	rev_str		:= IntToStr(reverse_integer(input));

	if	input_str = rev_str
	then
		writeln(input, ' is a palindrome!')
	else
		writeln(input, ' is NOT a palindrome!');

end.

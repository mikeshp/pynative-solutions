(* 
 * Exercise 21: Reverse Number 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program ReverseNumber;
uses	sysutils;

var
	number: uint64;

function revNumber(number: uint64): string;
var
	revers: uint64;
	zeros, i: integer;
	revStr: string;
begin

	if number <> 0
	then
		begin
			revers	:= 0;
			zeros	:= 0;
			revStr	:= '';

			repeat
				revers	:= (revers * 10) + (number mod 10);
				if revers = 0 then zeros += 1;
				number	:= number div 10;
			until number = 0;

			if	zeros > 0 then
			begin
				for i := 1 to zeros do
				revStr := revStr + '0';
			end;

			revStr := revStr + IntToStr(revers);
		end
	else
		revStr := '0';

	revNumber := revStr;
end;

begin

	writeln	('Enter a number:');
	write	('> ');
	read	(number);

	writeln	('The reverse of ', number, ' is: ', revNumber(number));

end.

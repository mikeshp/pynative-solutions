(* 
 * Exercise 11: Leap Year Check 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program LeapYearCheck;
uses	crt;

var
	year: integer;

function isLeap(year: integer): boolean;
begin
	if (year mod 400 = 0) or ((year mod 4 = 0) and (year mod 100 <> 0))
	then
		isLeap := TRUE
	else
		isLeap := FALSE;
end;

begin

	write('Enter a year: ');
	read(year);

	if	(isLeap(year))
	then
		writeln(year, ' IS a leap year!')
	else
		writeln(year, ' IS NOT a leap year!');

end.

(* 
 * Exercise 12: Calculator Case 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CalculatorSwitch;
uses	crt;

var
	oper: char;
	num1, num2, result: real;

begin

	write	('Enter operator (+,-,*,/): ');
	read	(oper);

	write	('Enter two numbers (A B): ');
	read	(num1, num2);

	case (oper) of
		'+':
			result := num1 + num2;
		'-':
			result := num1 - num2;
		'*':
			result := num1 * num2;
		':','/':
			if (num2 = 0)
			then
				begin
					writeln('Cannot devide by zero!');
					result := 0;
				end
			else
				result := num1 / num2;
	end;

	writeln	(num1:0:2, ' ', oper, ' ', num2:0:2, ' = ', result:0:2);

end.

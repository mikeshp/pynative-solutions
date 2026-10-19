(* 
 * Exercise 37: Character Frequency Count 
 * https://pynative.com/c-programming-exercises-for-beginners
 *)

program CharacterFrequencyCount;

var
	input: string;

procedure char_count(input: string);
var
	alphabet: array[1..26] of integer;
	i: integer;
begin
	for i := 1 to 26 do alphabet[i] := 0;

	for i := 1 to length(input) do
	if (input[i] >= 'A') and (input[i] <= 'Z') or
	   (input[i] >= 'a') and (input[i] <= 'z') then
	alphabet[ord(LowerCase(input[i])) - 96] += 1;

	for i := 1 to 26 do
	if alphabet[i] > 0 then
	writeln(chr(i + 96), ': ', alphabet[i]);
end;

begin

	write('Enter a string: ');
	read(input);

	writeln('Character Frequences:');
	char_count(input);

end.

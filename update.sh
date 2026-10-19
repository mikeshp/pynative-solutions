#/bin/bash

PY_NATIVE=pynative.com
HOME_PATH=$HOME/Documents/Learn
FLDR_ORIG=("21-variables-and-data-type" \
           "22-structures-and-unions" \
           "25-functions-exercises" \
           "26-file-handling-exercises" \
           "30-loop-exercises" \
           "30-pointers-exercises" \
           "30-string-exercises" \
           "40-array-exercises" \
           "45-intermediate-exercises" \
           "53-beginners-exercises")
LINK_ORIG=("c-programming-variables-data-types-exercises" \
           "c-programming-structures-unions-exercises" \
           "c-programming-functions-exercises" \
           "c-programming-file-handling-exercises" \
           "c-programming-loops-exercises" \
           "c-programming-pointers-exercises" \
           "c-programming-string-exercises" \
           "c-programming-arrays-exercises" \
           "intermediate-c-programming-exercises" \
           "c-programming-exercises-for-beginners")

echo -e "\nChoose the language to update solutions:"
echo
echo -e "\t 1. - C"
echo -e "\t 2. - PHP"
echo -e "\t 3. - Pascal"
echo
read -p "> " USER_SELECT

# C constants
if   [[ $USER_SELECT -eq 1 ]]; then
	LANG_PATH=LearnC
	LANG_FLDR=lang-c
	LANG_EXTN=c
	OPEN_HEAD='/* PYnative.com C Exercise Solutions'
	  OPN_COM=' * '
	  MID_COM=' * '
	  CLS_COM=' */'
# PHP constants
elif [[ $USER_SELECT -eq 2 ]]; then
	LANG_PATH=LearnPHP
	LANG_FLDR=lang-php
	LANG_EXTN=php
	OPEN_HEAD='<?php\ndeclare(strict_types=1);\n\n/* PYnative.com C Exercise Solutions'
	  OPN_COM=' * '
	  MID_COM=' * '
	  CLS_COM=' */'
# Pascal constants
elif [[ $USER_SELECT -eq 3 ]]; then
	LANG_PATH=LearnPASCAL
	LANG_FLDR=lang-pascal
	LANG_EXTN=pas
	OPEN_HEAD='(* PYnative.com C Exercise Solutions'
	  OPN_COM=' * '
	  MID_COM=' * '
	  CLS_COM=' *)'
else
	echo -e "Wrong input"
	exit
fi

echo -e "Looking for solutions..."

FLDR_INDX=${#FLDR_ORIG[@]}

for (( INDX=0; INDX<$FLDR_INDX; INDX++ )); do

	CRNT_FLDR=${FLDR_ORIG[$INDX]}
	CRNT_LINK=${LINK_ORIG[$INDX]}

	mkdir -p $LANG_FLDR/$CRNT_FLDR

	for FILE_NAME in $( ls -1 $HOME_PATH/$LANG_PATH/$PY_NATIVE/$CRNT_FLDR \
	                  | grep "\.$LANG_EXTN"$ ); do

		FILE_ORIG=$HOME_PATH/$LANG_PATH/$PY_NATIVE/$CRNT_FLDR/$FILE_NAME
		FILE_DEST=$LANG_FLDR/$CRNT_FLDR/$FILE_NAME

		if [[ -f $FILE_DEST ]]; then
#			echo -e "DEBUG: File already exists: $FILE_DEST"
			continue
		fi

		EX_NUMBER=$( echo $FILE_NAME | awk -F'_' '{ print $1 }' )
		EX_PROMPT=$( echo $FILE_NAME | cut -d'.' -f1 \
		           | awk -F'_' '{ for (i=2; i<=NF; i++) {printf "%s ",$i} }' \
		           | sed 's/[a-z]*/\u&/g' )
		LINE_NAME="Exercise $EX_NUMBER: $EX_PROMPT"
		LINE_LINK="https://pynative.com/$CRNT_LINK"

		echo -e "$OPEN_HEAD\n$MID_COM" > $FILE_DEST
		echo -e "$OPN_COM$LINE_NAME\n$MID_COM$LINE_LINK\n$CLS_COM" >> $FILE_DEST
		cat $FILE_ORIG | sed '1,/\*\//d' >> $FILE_DEST

	done

done

echo -e "All done"

# todo
#	maintain counters and prompt on exit:
#	files in a language: C
#	files added: N
#	files already existed: N

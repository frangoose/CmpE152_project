//grammar for the language unbreakable

grammar Unbreakable;

prog: (stat NEWLINE)+ ;


stat:	expr ';'
	|	ID '=' expr ';' 						//assignment statement
	|	varDeclar ';'							//variable declaration
	|	'if' ('(' expr ')') stat ('else' stat) //if-else statement 
	;

expr:	expr ('*'| '/') expr
	|	expr ('+' | '-') expr
	|	DIGIT
	|	ID
	|	'(' expr ')'
	;

varDeclar:	ID primitiveType	
	;
	
primitiveType
	:	'BitVector'
	|	'String'
	|	'16Key'
	|	'32Key'
	|	'64Key'
	|	'128Key'
	|	'Integer'
	;

ID : [a-zA-Z0-9]+ ;

DIGIT : [0-9]+ ;


NEWLINE : '/r'? '\n' ;


WS : [ \t]+ -> skip ;

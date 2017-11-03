//grammar for the language unbreakable

grammar Unbreakable;

prog: stat+ ;

varDeclar:	IDENTIFIER primitiveType	
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

stat:	if_stat
	|	assignment_stat
	|	expr ';' 						
	|	varDeclar ';'	
	;

assignment_stat:
	IDENTIFIER '=' expr
	;	

if_stat:	
	IF ('(' expr ')') stat (ELSE stat)? //if-else statement 
	;

expr:	expr mul_div_op expr
	|	expr add_sub_op expr
	|	expr rel_op expr
	|	number
	|	IDENTIFIER
	|	'(' expr ')'
	;

variable: IDENTIFIER ;
number: sign? DIGIT ;
sign: '+' | '-' ;

mul_div_op:	MUL_OP | DIV_OP ;
add_sub_op:	ADD_OP | SUB_OP ;
rel_op:	EQ_OP | NEQ_OP ; 

//TOKENS

IF: 'if' ;
ELSE: 'else' ;

MUL_OP: '*' ;
DIV_OP: '/' ;
ADD_OP: '+' ;
SUB_OP: '-' ;

EQ_OP:	'==' ;
NEQ_OP:	'!=' ;

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
DIGIT : [0-9]+ ;
NEWLINE : '/r'? '\n' -> skip;
WS : [ \t]+ -> skip ;

# HTML-Parser
The grammar has been created based on the assumption that HTML has a basic structure of 

<html>

<head>

(other tags)

...

</head>

<body>

(other tags)

...

</body> 

</html>

This is the only valid format of an html page.

Errors are reported in the following cases

1)Invalid tags

2)If the above basic format is not followed

3)Absence of closing tags

**Executing instructions:**

Execute the following commands on terminal -

lex -i html_parser.l

yacc -d html_parser.y

gcc y.tab.c -lfl -ly

./a.out

A demo i/p file has been provided named input.txt.

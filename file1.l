%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h" 
  extern int yylval; 
%} 
  
/* Rule Section */
%% 
"<html>" return DOC_START;
"</html>" return DOC_END;
"<head>" return HEAD_START;
"</head>" return HEAD_END;
"<body>" return BODY_START;
"</body>" return BODY_END;
"<h1>" return H1_START;
"</h1>" return H1_END;
"<b>" return BF_START;
"</b>" return BF_END;
"<i>" return IT_START;
"</i>" return IT_END;
"<ul>" return UL_START;
"</ul" return UL_END;
"<ol>" return OL_START;
"</ol" return OL_END;
"<li>" return LI_START;
"</li>" return LI_END;
"<title" return TITLE_START;
"</title" return TITLE_END;
"<a href="\"[a-zA-Z0-9]+\"">" return HREF_START;
"</a>" return HREF_END;
[ \n]  { yylineno = yylineno + 1;}
%%

int yywrap() 
{ } 
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
"<h2>" return H2_START;
"</h2>" return H2_END;
"<h3>" return H3_START;
"</h3>" return H3_END;
"<h4>" return H4_START;
"</h4>" return H4_END;
"<b>" return BF_START;
"</b>" return BF_END;
"<u>" return UF_START;
"</u>" return UF_END;
"<em>" return EM_START;
"</em>" return EM_END;
"<tt>" return TT_START;
"</tt>" return TT_END;
"<strong>" return STRONG_START;
"</strong>" return STRONG_END;
"<small>" return SMALL_START;
"</small>" return SMALL_END;
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
"<font size="\"[1-7]\"">" return FONT_START;
"</font>" return FONT_END;
"<center>" return CENTER_START;
"</center>" return CENTER_END;
"<dl>" return DL_START;
"</dl>" return DL_END;
"<dt>" return DT_START;
"</dt>" return DT_END;
"<dd>" return DD_START;
"</dd>" return DD_END;
[.*\n]  { yylineno = yylineno + 1;}
. ; // else do nothing 
%%

int yywrap() 
{ } 
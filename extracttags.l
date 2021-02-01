/* Declaration section*/
%{ 
    #include<stdio.h> 
    #include<string.h> 
    char line[100]; 
%} 

%% 
"<"[^>]*> {strcpy(line,yytext);
            fprintf(yyout,"%s\n",line); 
            printf("%s\n", yytext); } /* if anything enclosed in 
									these < > occur print text*/
. ; // else do nothing 
%%	 

int yywrap(){} 
	
int main(int argc, char*argv[]) 
{ 
    extern FILE *yyin, *yyout; 
        /* open the source file  
           in read mode */
    yyin=fopen("input.txt","r"); 
     
        /* open the output file  
           in write mode */
    yyout=fopen("output.txt","w"); 

	// The function that starts the analysis 
	yylex(); 

	return 0; 
} 

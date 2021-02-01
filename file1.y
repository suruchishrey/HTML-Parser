%{ 
   /* Definition section */
    #include<stdio.h> 
    #include<stdlib.h> 
    #include<string.h>
    #include <limits.h>
    #define SIZE 40

    int curr_id=0;

    struct node {
    int vertex;
    char data[20];
    int noOfChild;
    struct node* next;
    };

    struct queue {
    struct node items[SIZE];
    int front;
    int rear;
    };
    
    struct node* createNode(int dataVertex,char*dataValue);
    void pushNode(char*name);
    void popNode();
    int isEmptyStack(struct node* root);
    void push(struct node** root, int dataVertex,char* dataValue);
    int pop(struct node** root,char*data);
    int top(struct node* root,char*data);
    struct queue* createQueue();
    void enqueue(struct queue* q, int, char*);
    int dequeue(struct queue* q, char*);
    void display(struct queue* q);
    int isEmpty(struct queue* q);
    void printQueue(struct queue* q);

    struct node* createNode(int,char*);

    struct Graph {
      int numVertices;
      int numEdges;
      struct node** adjLists;
      int* visited;
    };
    struct Graph* createGraph(int vertices);
    struct queue* createQueue();
    void bfs(struct Graph* graph, int startVertex, char* startValue);
    void addEdge(struct Graph* graph, int src, int dest, char* srcValue, char* destValue);
    void yyerror(char *msg); 
    struct Graph* graph;
    struct node* root = NULL;
    struct node temp;
    struct node*temp_ptr=&temp;
%} 

%token DOC_START 
%token DOC_END 
%token HEAD_START 
%token HEAD_END
%token BODY_START 
%token BODY_END 
%token BF_START 
%token BF_END 	
%token IT_START 
%token IT_END
%token UL_START 
%token UL_END 
%token OL_START 	
%token OL_END
%token LI_START 
%token LI_END
%token H1_START
%token H1_END
%token TITLE_START
%token TITLE_END
%token HREF_START
%token HREF_END
  
/* Rule Section */
%% 
Doc 	  :   Wspace 
            DOC_START{
                          push(&root,curr_id,"<html>");
                          curr_id++;
                      } 

            Wspace 
            Head 
            Wspace 
            Body 
            Wspace 
            DOC_END {
                      popNode();
                      printf("\n\nValid\n");
                      bfs(graph,0,"<html>");
                    }  
;
Head 	  :   HEAD_START{
                        pushNode("<head>");
                      } 

            Title 
                        
            HEAD_END{
                      popNode();
                    }
          | HEAD_START{
                        pushNode("<head>");
                      }

            HEAD_END{
                      popNode();
                    }
;
Body 	  :   BODY_START{
                        pushNode("<body>");
                      } 
            Html 
            BODY_END{
                      popNode();
                    }
;
Title   :   TITLE_START{
                          pushNode("<title>");
                        } 
            TITLE_END{
                        popNode();
                      }
;  
Wspace 	  :   /* empty */
            |   ";"
;
Html 	  :   /* empty */
            | Item Html
  |   ";"
;
Item 	  : H1_START{
                      pushNode("<h1>");
                  }  
          Html 
          H1_END{
                  popNode();
                } 
  |   HREF_START{
                  pushNode("<a href>");
                }  
      Html 
      HREF_END{
                popNode();
              } 
  |   BF_START{
                pushNode("<b>");
              }   
      Html  
      BF_END{
              popNode();  
            }
  |   IT_START{
                pushNode("<i>");
              }  
      Html  
      IT_END{
              popNode();
            }
  |   List
  |   Other
;
List 	  :   UL_START{
                      pushNode("<ul>");
                    }   
            Wspace   
            ItemList  
            Wspace   
            UL_END{
                    popNode();
                  }
        |   OL_START{
                      pushNode("<ol>");
                    }   
            Wspace   
            ItemList  
            Wspace   
            OL_END{
                    popNode();
                  }
;
ItemList 	  :   ItemList  Wspace   OneItem
                |   OneItem
;
OneItem 	  :   LI_START{
                          pushNode("<li>");
                        }
                Html  
                LI_END{
                        popNode();
                      }
;
Other 	  : /* empty */
            | ";"
;
%% 
  
#include"lex.yy.c" 

void pushNode(char*name)
{
  temp_ptr->vertex=top(root,temp_ptr->data);
  addEdge(graph,temp_ptr->vertex,curr_id,temp_ptr->data,name);
  push(&root,curr_id,name);
  curr_id++;
}

void popNode()
{
  temp_ptr->vertex=pop(&root,temp_ptr->data);
  //curr_id--;
}

int isEmptyStack(struct node* root)
{
    return !root;
}
 
void push(struct node** root, int dataVertex, char* dataValue)
{
    struct node* node = createNode(dataVertex,dataValue);
    node->next = *root;
    *root = node;
    //printf("%d->%s pushed to stack\n", dataVertex,dataValue);
}
 
int pop(struct node** root,char*data)
{
    if (isEmptyStack(*root))
        return INT_MIN;
    struct node* temp = *root;
    *root = (*root)->next;
    int popped = temp->vertex;
    strcpy(data,temp->data);
    free(temp);
    //printf("%d->%s popped from stack\n", popped,data);
    return popped;
}
 
int top(struct node* root, char*data)
{
    if (isEmptyStack(root))
        return INT_MIN;
    else{
      strcpy(data,root->data);
      return root->vertex;
    }    
}
 
// BFS algorithm
void bfs(struct Graph* graph, int startVertex, char* startValue) {
  struct queue* q = createQueue();
  int level=1,queuedVertices=0;
  
  graph->numVertices = graph->numEdges+1;
  graph->visited[startVertex] = 1;
  enqueue(q, -20, "null");
  enqueue(q, startVertex, startValue);
  queuedVertices++;

  while (!isEmpty(q)) {
    printQueue(q);
    char currentString[20];
    int currentVertex = dequeue(q,currentString);
    if(currentVertex==-20)
    {
        printf("\nLevel %d:\n",level);
        level++;
        if(queuedVertices<graph->numVertices)
        enqueue(q, -20, "null");
    }
    else{
        printf("Visited %d -> %s\n", currentVertex, currentString);

        struct node* temp = graph->adjLists[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;
            char adjString[20];
            strcpy(adjString,temp->data);

            if (graph->visited[adjVertex] == 0) {
                graph->visited[adjVertex] = 1;
                enqueue(q, adjVertex, adjString);
                queuedVertices++;
            }
            temp = temp->next;
        }
    }
    
  }
}

// Creating a node
struct node* createNode(int v, char* data) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->vertex = v;
  newNode->next = NULL;
  newNode->noOfChild = 0;
  strcpy(newNode->data,data);
  return newNode;
}

// Creating a graph
struct Graph* createGraph(int vertices) {
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertices = vertices;
  graph->numEdges = 0;
  graph->adjLists = malloc(vertices * sizeof(struct node*));
  graph->visited = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++) {
    graph->adjLists[i] = NULL;
    graph->visited[i] = 0;
  }

  return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest, char* srcValue, char* destValue) {
  // Add edge from src to dest
  struct node* newNode = createNode(dest,destValue);
  newNode->next = graph->adjLists[src];
  newNode->noOfChild++;
  graph->adjLists[src] = newNode;

  // Add edge from dest to src
  newNode = createNode(src,srcValue);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;

  printf("\nAdded edge from %s to %s",srcValue,destValue);
  graph->numEdges++;
}

// Create a queue
struct queue* createQueue() {
  struct queue* q = malloc(sizeof(struct queue));
  q->front = -1;
  q->rear = -1;
  return q;
}

// Check if the queue is empty
int isEmpty(struct queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

// Adding elements into queue
void enqueue(struct queue* q, int value, char* data) {
  if (q->rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear].vertex = value;
    strcpy(q->items[q->rear].data,data);
  }
}

// Removing elements from queue
int dequeue(struct queue* q,char* str) {
  int item;
  if (isEmpty(q)) {
    printf("Queue is empty");
    item = -1;
  } else {
    item = q->items[q->front].vertex;
    strcpy(str,q->items[q->front].data);
    q->front++;
    if (q->front > q->rear) {
      //printf("Resetting queue ");
      q->front = q->rear = -1;
    }
  }
  return item;
}

// Print the queue
void printQueue(struct queue* q) {
  int i = q->front;

  if (isEmpty(q)) {
    printf("Queue is empty");
  } else {
    /*printf("\nQueue contains \n");
    for (i = q->front; i < q->rear + 1; i++) {
      printf(" %d->%s ", q->items[i].vertex,q->items[i].data);
    }*/
  }
}

void yyerror(char *msg) 
{ 
  printf("\nError in format!!\n");
  printf("Error | Line: %d\n%s\n",yylineno,msg); 
  exit(0); 
} 

/*
  html - 0
  head - 1
  title - 2
  body - 3
  h1 - 4
*/
//driver code 
int main()  
{ 
    extern FILE *yyin, *yyout;
    graph = createGraph(10); 
        /* open the source file  
           in read mode 
           lex file1.l
           yacc file1.y -d
           gcc y.tab.c -lfl -ly
           ./a.out
           */
    yyin=fopen("output.txt","r"); 
    //printf("Enter:\t");

    yyparse(); 
    printf("\nEND\n"); 
    return 0; 
} 

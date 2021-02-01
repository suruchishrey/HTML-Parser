#include<stdio.h> 
    #include<stdlib.h> 
#include<string.h>
    #define SIZE 40

    struct node {
    int vertex;
    char data[20];
    struct node* next;
  };

    struct queue {
    struct node items[SIZE];
    int front;
    int rear;
    };

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

  // BFS algorithm
void bfs(struct Graph* graph, int startVertex, char* startValue) {
  struct queue* q = createQueue();
  int level=1,queuedVertices=0;

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
  strcpy(newNode->data,data);
  return newNode;
}

// Creating a graph
struct Graph* createGraph(int vertices) {
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertices = vertices;

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
  graph->adjLists[src] = newNode;

  // Add edge from dest to src
  newNode = createNode(src,srcValue);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;
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

int main() {
  struct Graph* graph = createGraph(5);
  addEdge(graph, 0, 1, "html", "head");
  addEdge(graph, 0, 2, "html", "body");
  addEdge(graph, 1, 3, "head", "title");
  addEdge(graph, 2, 4, "body", "h1");

  bfs(graph, 0, "html");

  return 0;
}
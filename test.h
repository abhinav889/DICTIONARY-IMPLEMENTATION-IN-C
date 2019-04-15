struct dict
{
	struct dict *left,*right;
	char word[10],meaning[20];
}*Root;

typedef struct dict dictionary;

int check(char[],char[]);

void insert(dictionary *);

void Search();

void view(dictionary *);
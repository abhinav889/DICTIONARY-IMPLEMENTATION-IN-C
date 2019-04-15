#include <stdio.h>
#include <stdlib.h>
#include "test.h"

int main(int argc, char const *argv[])
{
	int ch;
	dictionary *temp;
	Root=NULL;
	//dictionary* root=NULL;
	while(ch!=4)
	{
		printf("\n1.Search\n2.Insert\n3.View\n4.Exit\nYour choice please..");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				Search();break;
			case 2:
				temp=(dictionary*)malloc(sizeof(dictionary));
				temp->left=NULL;
				temp->right=NULL;
				printf("\nInsert word:\n");
				scanf("%s",temp->word);
				printf("\nInsert meaning:\n");
				scanf("%s",temp->meaning);
				insert(temp);
				break;
			case 3:
				view(Root);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}
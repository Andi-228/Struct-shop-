#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <vector>

struct Clothes
{
	char styleName[100];
	char brandName[50];
	int size;
	float price;
};

int writeFile(char fname[], char catalog[], int size);
int readFile(char fname[], std::vector<Clothes> & site);
void printCatalog (std::vector<Clothes> & cloth);

int main() {

	char fileName[] = "catalog.txt";

	const int size = 10;

	cloth Clothes[] = {
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
		{},
	};

	system("pause");
	return 0;
}


int writeFile(char fname[], char catalog[], int size)
{
	FILE* f;
	
	f = fopen(fname, "w");

	for (int i = 0; i < size; i++) {
		fprintf(f, "%s | %s | %d | % f\n", cloth[i].styleName, size[i].brandName, size[i].size, size[i].price);
	}
	fclose(f);

	return 0;
}

int readFile(char fname[], std::vector<Clothes>& site)
{
	FILE* f;

	f = fopen(fname, "r");

	char buff[300];

	while (fgets(buff, 300, f) != NULL) {
		Clothes b;
		printf("%s", buff);
		//styleName
		char* subStr = strtok(buff, "|\n");
		strcpy (b.styleName, subStr);
		//brandName
		subStr = strtok(NULL, "|\n");
		strcpy(b.brandName, subStr);
		//size
		subStr = strtok(NULL, "|\n");
		int pageNumber = atoi(subStr);
		b.size = pageNumber;
		//price
		subStr = strtok(NULL, "|\n");
		float price = atof(subStr);
		b.price = price;
		
		Clothes.push_back(b);
	}
	fclose(f);

	return 0;
}

void printCatalog(std::vector<Clothes>& site)
{
	for (int i = 0; i < Clothes.size; i++) {
		printf ("Style: %s, Brand: %s, Size: %d, Price: %f", cloth[i].title, size[i].author, Clothes[i].pageNumber, Clothes[i].price);
	}

}

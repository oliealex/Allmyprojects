#include <iostream>
#include <string>

using namespace std;

int main()
{
	char Asve[28] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z','å','ä','ö' };
	int ciphertext[] = {15,5,21,0,19,21,18,14,9,13,4,27,14,25};
	//int ciphertext[] = {18,4,25,20,3,19,11};
	int plaintext[28][14];
	int key = 0, next;

	for (int i = 0; i < 28; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (j == 0)
			{
				next = (ciphertext[j] - i) % 28;
			}
			else
			{
				next = (ciphertext[j] - next) % 28;
			}
			if (next < 0)
				next = next + 28;

			plaintext[i][j] = next;
		}
	}
	
	for (int i = 0; i < 28; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			cout << Asve[plaintext[i][j]];
		}
		cout << endl;
	}
	getchar();


	return 0;
}
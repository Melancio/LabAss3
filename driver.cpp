#include <iostream>

#include <stdio.h>

#include <stdlib.h>

#include <string>

#include <vector>

using namespace std;
using std::string;

class memory
{
    private:


    public:

    int *mem =  new int [100];

    memory (int size = 100);

    void store (int address, int value);
    int retrieve (int address);
    void copy (int start, int size, int dest);
    int dump (int start, int last);
    int dump ();

};

void memory::store (int address, int value)
	{
    mem[address] = value;
	}

int memory:: retrieve (int address)
	{
	return mem[address];
	}

void memory:: copy (int start, int size, int dest)
	{
	for (int i = 0; i < size; i++)using namespace std;
using std::string;
		{
		mem[dest++] = mem[start++];
		}
	}

int memory:: dump ()
	{
	for (int i = 0; i < sizeof(mem); i++)
		{
		cout << mem[i] << endl;
		}
	}

int memory:: dump (int start, int last)
	{
	for (int i = start; i < last; i++)
		{
		cout << mem[i] << endl;
		}
	}using namespace std;
using std::string;


int main()
{

memory myMem;
myMem.dump();

return 0;
}

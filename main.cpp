#include <stdio.h>

class oya
{
public:
	virtual void Voice() {
		printf("あにまる¥n");
	};
};

class kodomoA : public oya
{
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class kodomoB : public oya
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	oya* koll[2] = { new kodomoA,new kodomoB };

	koll[0]->Voice();
	koll[1]->Voice();

	delete koll[0];
	delete koll[1];

	return 0;
}


#include<iostream>

class base{
public:
	base(){
		std::cout << "base construct" << std::endl;
	};
	
	virtual ~base(){
		std::cout << "base destruct" << std::endl; 
	};
	
	virtual void play(); //virtual ¹Ø¼ü×Ö Ğé·½·¨ 
}; 

class child : public base{
public:
	child(){
		std::cout << "child construct" << std::endl;
	};
	
	~child(){
		std::cout << "child destruct" << std::endl;
	};
	
	void play();
};

void base::play()
{
	std::cout << "base play" << std::endl;
}

void child::play()
{
	std::cout << "child play" << std::endl;
}

main()
{
	base *p = new child;
	p->play();
	delete p; 
}

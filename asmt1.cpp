#include<iostream> 
#include<string>
#include<iomanip>

double computePi(int x){
/*
3.1415926535897932384626433832795028841971
*/

double pi = 3.1415926535897932384626433832795028841971;
std::cout << std::setprecision(x) << pi << std::endl;
return pi;
}

double computeE(int x){
/*
handle cases up to three and less than 0
Then, starting at 2, add each iteration to n (which initially stores 2) until you've reached x
create factorial(int i) function. 
return e.
*/
double e = 0;
	
	for(int i = 0; i <= x; ++i){
		double nfactorial = 1;
		if(i != 1){
			for(int j = i; j>1;--j){
				nfactorial *= j;
			}
		}
		e += 1/nfactorial; 
	}
std::cout << std::setprecision(15) << e << std::endl;
return e;
}

int computeFibonacci(int x){
/*
fibonacci 1 1 2 3 5 8 13 21 
*/
	int first = 1;
	int second = 1;
	std::cout << first << " " << second << " ";
	int next = 0;
	for(int i = 0; i < x-2; ++i){
		next = first + second;
		std::cout << next << " ";
		first = second;
		second = next;
	}
	std::cout << std::endl;


return 0;
}

void standardErrorMessage(){
	std::cout << "Expected arguments:" << std::endl;
	std::cout << "-fib [n] computes fibonacci of [n]" <<std::endl;
	std::cout << "-e [n] computes e to [n] iteration" << std::endl;
	std::cout << "-pi [n] displayes pi to [n] digits" << std::endl;
return;
}

int main(int argc, char* argv[])
{
	if(argc != 2){
		standardErrorMessage();
		return 1;
	}

	std::string argument = "no";
	int num = 0;
	try{argument = argv[1];}
		catch(...){
			std::cout << "unexpected argument!" << std::endl;
			standardErrorMessage();
			return 1;
		} //pass the argument to a string for comparison.
	try{num = std::stoi(argv[2]);}
		catch(...){
			std::cout << "unexpected argument!" << std::endl;
			standardErrorMessage();
			return 1;
		}
	if(argument == "-fib"){
		computeFibonacci(num);
	}
	else if(argument == "-e"){
		computeE(num);
	}
	else if(argument == "-pi"){
		computePi(num);
	}
	else{
		standardErrorMessage();
	}		
	
return 0;
}


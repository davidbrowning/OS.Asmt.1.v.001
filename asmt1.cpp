#include<iostream> 
#include<string>
#include<iomanip>

double computePi(int x){
/*

*/
return 0.0;
}

double factorial(int i){
	int j = i;
	std::cout << i << " factorial is: ";
	while(j > 1){
		i *= (j-1);
		--j;
	}
	std::cout << i << std::endl << std::endl;

	return i;
}

double computeE(int x){
/*
handle cases up to three and less than 0
Then, starting at 2, add each iteration to n (which initially stores 2) until you've reached x
create factorial(int i) function. 
return e.
*/
double e = 0;
	if(x < 3){
		if (x <= 0){
			std::cout << "undefined" << std::endl;
		}
		else if(x == 1){
			e = 1;
		}
		else if (x == 2){
			e = 2;
		}
	}	
	else{
		e = 2;
		for(int i = 2; i <= x; ++i){
			e += (1/factorial(i));
		}
	
	}

std::cout  << (1/.7) << std::endl;
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
	for(int i = 0; i < x; ++i){
		next = first + second;
		std::cout << next << " ";
		first = second;
		second = next;
	}



return 0;
}

int main(int argc, char* argv[])
{
	int optionNumber = 0;
	std::string argument = argv[1]; //pass the argument to a string for comparison.
	int num = std::stoi(argv[2]);
    	if (argc > 3) {
        	std::cout << argv[3] <<" is invalid and will be skipped!" << std::endl;
    	}

	if(argument == "fib"){
		optionNumber = 1;
		//std::cout << optionNumber;
	}
	else if(argument == "e"){
		optionNumber = 2;
		//std::cout << optionNumber;
	}
	else if(argument == "pi"){
		optionNumber = 3;
		//std::cout << optionNumber; used for refrence.
	}
	else std::cout << "error! unexpedted arguments: " << argv[1] << "/" << argv[2] << std::endl;

	if(argc >= 3){
		std::cout << argv[1] << " will be computed with: " << argv[2] << "." << std::endl;
		switch(optionNumber){
			case(1): computeFibonacci(num);
			 break;
			case(2): {double ans = computeE(num);
				std::cout << "e = " << std::setprecision(30) <<  ans << std::endl;
			}
			 break;
			case(3): computePi(num);
			 break;
			default: std::cout << "invalid argument" << std::endl;
		}
	}
return 0;
}

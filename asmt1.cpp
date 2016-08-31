#include<iostream> 
#include<string>

double computePi(int x){
/*

*/
return 0.0;
}

double computeE(int x){
/*

*/
return 0.0;
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
			case(2): computeE(num);
			 break;
			case(3): computePi(num);
			 break;
			default: std::cout << "invalid argument" << std::endl;
		}
	}
return 0;
}

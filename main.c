#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "myheader.h"

// Command line arguments are optional. 
// If argument is not given, input files will be generated. 
int main(int argc, char const* argv[]){
    //If arguments are given, struct values are updated with input values.
	// input file will contain size in first line 
	//command line arguments will contain input filename and fileinputtype.
	if(argc>3){
		fputs("Invalid input", stderr);
        return 1;
	}//If one or two arguents are given
	else if(argc>1 && argc<=3){
		char *buf;
		buf=strstr(argv[1],".txt");
		if(strcmp(buf,".txt")!=0){
			fputs("Invalid filename input, should be '.txt'", stderr);
        	return 1;
		}
		strcpy(o.filename,argv[1]);
		//appendFile(o.filename);		
		//modifySizeLine(o.filename,1100);
		createAscOrderFile(o.filename);

		
		//If second argument is given:
		if(argc==3){
			if(strcmp(argv[2],"random")==0 || strcmp(argv[2],"asc")==0 || strcmp(argv[2],"desc")==0){
				strcpy(o.fileinputtype,argv[2]);
			}else{
				fputs("Give 'random', 'asc', or 'desc' as second argument, or nothing at all.", stderr);
        		return 1;
			}
		}else{
			strcpy(o.fileinputtype,"undefined");
		}
		
		//Calls menu function
		menu();

	}
	//If no arguments are given:
	else if(argc==1){
		createFile(); //Create randomlist.txt with 10000 numbers.
		strcpy(o.filename,"randomlist.txt");
		o.size=10000;
		strcpy(o.fileinputtype,"random");
		while (o.size<=100000){
			createAscOrderFile(o.filename); //Corresponding ascending and descending order files are created.
			createDescOrderFile(o.filename);
			printf("%s\n",o.filename);

			allAlgorithms();// Execute all algorithms on random list

			strcpy(o.filename,"ascorder.txt");
			strcpy(o.fileinputtype,"asc");
			printf("%s\n",o.filename);

			allAlgorithms();// Execute all algorithms on ascending order input file

			strcpy(o.filename,"descorder.txt");
			strcpy(o.fileinputtype,"desc");
			printf("%s\n",o.filename);

			allAlgorithms();//Execute all algorithms on descending order input file

			strcpy(o.filename,"randomlist.txt");
			appendFile(o.filename); // Add 500 random numbers to randomlist
			o.size=o.size+500;
			modifySizeLine(o.filename,o.size); //Change the first line of random list to new size
			strcpy(o.fileinputtype,"random");
		}		
	}
}
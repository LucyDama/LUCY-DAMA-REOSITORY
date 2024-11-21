#include<stdio.h> //fprintf(),printf(),scanf(),fclose(),fgets()
#include<stdlib.h> //exit()
#include<string.h> 

 int main (){
	//Function to prompt user to enter sentence and write it to a file (char*filename){
char [MAX_LENGTH];
	FILE * file;
	
	//Prompt a user to enter a sentence
	printf("Enter a sentence: ");
	fgets(sentence, MAX_LENGTH,stdin);
	
	//Open file for writing 
	file = fopen(filename,"w");
	if(file == NULL);{
		printf("Error: Unable to open file for writing \n");
		return;
	}
	//Write sentence to file
	fprint(file, "%s", sentence);
	printf("Sentence written to file \n");
	
	 //Close file
	 fclose("file");
	 }
	 
	 //Function to read content from file and display it on screen
	 void read_from_file(char*filename){
	 	FILE*file;
	 	char*content;
	 	
	// Open file for reading
	file = fopen(filename, "r");
	if(file == NULL){
		printf("Error : Unable to open file for reading \n");
		return;
	}
	
	//Read content from file
	content = (char*)malloc(size of (char) * (MAX_LENGTH +1));
	if(content == NULL){
		printf("Error: Unable to allocate memory for content \n");
		return ;
	}
	
	fread(content,sizeof(char), MAX_LENGHT, FILE);
	content[MAX_LENGHT] = '\0'; // Add null terminator
	printf("Content of files: \n%s", content);
	
	// Free allocated memory free(content);
	//close file
	fclose(file);
}
// Function to append a sentence to a file without overwriting the oiginal content
_append_to_file(char*filename, char*sentence){
	FILE;
	tempFile;
	char*content;
	
	// file = fopen(filename, "r");
	if(file == NULL){
		printf("Error: Unable to open the file for reading \n");
		return ;
	}
	
	//Read content from file
	content = (char*)malloc(size of (char)*(MAX_LENGHT,file));
	if (content == NULL){
		printf("Error : Unable to allocate memory for content \n");
		return;
	}
	
	fread(content, size of (char), MAX_LENGHT,file);
	content[MAX_LENGHT]= "\0"; //Add null terminator
	printf("Original content of file:\n%s", content);
	
	//Create a temporary file to uphold the updated content
	tempFile = fopen("temp.txt","w");
	if(tempFile == NULL){
		printf("Error: Unable to create temporary file \n");
		return;
	}
	
	//Write original content to temporary file
	fprintf(tempFile, "%s", content);
	
	//Write new sentence to a temporary file 
	fprintf(tempFile, "%s", sentence);
	printf("New sentence appended to file \n");
	
	//Close original file
	fclose(File);
	
	//Close temporary file
	fclose(tempFile);
	
	//Rename temporary file to original file name
	renme("temp.txt", filename);
	printf("File updated successfully \n");
}

int main(){
	char file name[] = "data.txt";
	Write a sentence to a file 
	write_to_file(filename);
	//Read content file
	_from_file(filename);
	//Append a new sentence to file
	strcpy(sentence,"This is a new sentence.");
	append_to_file(filename,sentence);
	
	return 0;
}
	
	
	
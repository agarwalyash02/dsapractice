# include <stdio.h>
# include <string.h>
int main( ){
	FILE *filePointer ;
	char dataToBeWritten[50]= "Welcome to C File I/O";
	filePointer = fopen("test.c", "w") ;
	if ( filePointer == NULL ) {
		printf( "test.c file failed to open." ) ;
	}
	else {
		printf("File opened.\n");
		if ( strlen ( dataToBeWritten ) > 0 ) {
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;
		printf("The file is now closed.") ;
	}
	return 0;
}
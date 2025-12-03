#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


int main() {
    printf("\t\t\t TEST YOUR TYPING SPEED \t\t\t \n\n\n");

    printf("Get\t");
    fflush(stdout);  //from stdio lib that force to print immediately 
    sleep(1);

    printf("Set\t");
    fflush(stdout);  
    sleep(1);

    printf("Go\t\n\n\n");
    sleep(1);
    
    
    printf("Start Typing:\n\n");
    
    char data[500];
    
    long start = (long)time(NULL); //used time.h library stores the latest time
    
   fgets(data, sizeof(data), stdin); //scanf was not taking the words after space so we used fgets

    

    data[strcspn(data, "\n")] = '\0';  // remove newline

    
    
    
    long end = (long)time(NULL);//same as above
    
    long timeTaken = end-start; //diffrence between them to get the exact diffrence
    
    
    printf("\n\nTime Took %ld seconds \n",timeTaken);
    
    int words =1; //started with one cause usually we dont hit space at last , we can check to if its there 
    
    int letters = strlen(data)-1;
    
    for(int i=0; i<=letters; i++){
        if(data[i] ==' '){
            words++;
        }
    }
    
    printf("You Typed %d Words\n",words);
    
    int WPM = words*60/timeTaken;
    
    printf("Your WPM is %d Approx \n",WPM); // used int so approxed
    
    printf("\t\t\t*** Thanks ***\t\t\t");
    
    

    return 0;
}

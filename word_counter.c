#include <stdio.h>
#include <stdlib.h>

void word_counter(char []);

int main()
{
    
    char sentence[1000];
    
    printf("Please enter the sentence;\n");
    
//getting sentence from user;

    fgets(sentence, 1000, stdin);
    
    word_counter(sentence);

    return 0;
}

void word_counter(char sentence[]){
    
    int i = 0, b = 0;

    //At this point, we delete spaces -if there is- from the beginning of sentence;

    for(i=0;sentence[i]==' ';i++){
        
        
        
    }

    //If reach to the last character which is '\0' loop breaks;

    while(sentence[i] != '\0'){
            
        //If we reach a empty space, there is a character left behind, and so a word;

        if(sentence[i] == ' '){
                
            b++;
            
            i++;
            
            //In case if there is multiple spaces between words, we delete those spaces;

            while(sentence[i]==' '){
                
                i++;
                
            }
                
        }
        i++;

    }

    //This program can't see the last word. So, in order to check the last word, we first delete last 2 characters and they are '\n' and '\0';

    i-= 2;
            
    //Then because of we already deleted empty spaces in while loop, we must check if the word is contains characters below;

    if((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= '0' && sentence[i] <= '9')){
        
        b++;
        
    }

    //As you can see, there is a problem. If the last character of last word is {!'^} or etc. program can't see that. But I don't really care.

    
    printf("\nSentence contains %d words.\n", b);
    
}

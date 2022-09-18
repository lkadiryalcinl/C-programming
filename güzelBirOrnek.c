#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum{
	male,
	female
}Gender;

typedef struct{
	int *age;
	char *name;
	char *charGender;
	Gender gender;
}Person;

int main(){
	Person *person;
	person = (Person *)malloc(sizeof(Person)*10);
	
	const char *maleNames[] = {"Hasan","Ahmet","Mehmet","Tuna","Veli","Talat","Yaman","Vakkas"};
	const char *femaleNames[] = {"Sila","Emine","Turkan","Sureyya","Kader","Zeliha","Yasemin","Sabiha"};
		
	int genderChooser;
	int nameChooser;
	int ageChooser;
	
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		genderChooser = rand()%2;
			
			if(genderChooser==0){
				
				nameChooser = rand()%8;
				ageChooser = rand()%5+15;
					person[i].name = maleNames[nameChooser];
					person[i].age = ageChooser;
					person[i].charGender = "male";
				
			}
			
			else if(genderChooser==1){
				
				nameChooser = rand()%8;
				ageChooser = rand()%5+15;
					person[i].name = femaleNames[nameChooser];
					person[i].age = ageChooser;
					person[i].charGender = "female";
				
			}
		printf("name : %s	age : %d	gender : %s\n",person[i].name,person[i].age,person[i].charGender);
	}
		
}

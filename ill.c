#include <stdio.h>
#include <string.h>


struct contact {
    int phonenumber;
    char name[20];
    char countrycode[3];


};
int main () {

    struct contact contact1;

    printf("Enter the name of ur contact:");
    fgets(contact1.name,sizeof(contact1.name), stdin);
    contact1.name[strcspn(contact1.name, "\n")] = 0;
     if (strlen(contact1.name) == 0) {
        printf("invalid name");
        return 0;
    }

    printf("Choose country code: (tz,ke)\n");
    fgets(contact1.countrycode, sizeof(contact1.countrycode), stdin);
    contact1.countrycode[strcspn(contact1.countrycode, "\n")] = 0;

    if (strcmp(contact1.countrycode, "ke") == 0 || strcmp(contact1.countrycode, "KE") == 0) {
        printf("Enter phone number:\n");
        scanf("%d", &contact1.phonenumber);

    }
    else if (strcmp(contact1.countrycode, "TZ") == 0 || strcmp(contact1.countrycode, "tz") == 0) {
        printf("Enter phone number:\n");
        scanf("%d", &contact1.phonenumber);
        
    }
    else {
        printf("Invalid Countrycode Try Again\n");
        return 0;
    }


    if (strcmp(contact1.countrycode, "ke") == 0 || strcmp(contact1.countrycode, "KE") == 0) {
        printf("summary:\nphonenumber:+254%d\nname:%s\n", contact1.phonenumber,contact1.name);
    }
    else if (strcmp(contact1.countrycode, "TZ") == 0 || strcmp(contact1.countrycode, "tz") == 0) {
        printf("summary:\nphonenumber:+255%d\nname:%s\n", contact1.phonenumber,contact1.name);
        return 0;
    }

   

    return 0;
}

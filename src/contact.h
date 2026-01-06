#ifndef CONTACT_H
#define CONTACT_H

#define NAME_LEN 50
#define PHONE_LEN 15
#define EMAIL_LEN 50

typedef struct {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
    char email[EMAIL_LEN];
} Contact;

#endif

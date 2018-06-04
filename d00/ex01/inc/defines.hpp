#ifndef _DEFINES_HPP
#define _DEFINES_HPP

/*
** The maximum number of contacts.
*/
#define MAX_CONTACTS 8

/*
** Number of fileds to be printed after SEARCH command.
** Definition — index, first name, last name and nickname. 0-3
*/
#define SHORT_FIELDS 3

/*
** Total number of the contact fields.
** Definition: — index, first name, last name, nickname, login, postal address,
** email address, phone number, birthday date, favoritemeal,
** underwear color, and darkest secret. 0-11
*/
#define MAX_FIELDS 11

/*
** The maximum length of each field.
*/
#define FILED_STATIC_LEN 200

/*
** ANSI colour codes
*/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET_COLOR "\033[0m"

#endif
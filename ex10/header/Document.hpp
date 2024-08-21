#ifndef __DOCUMENT__
#define __DOCUMENT__

#include <string>
#include <iostream>

class Document {
	public:
		std::string myString;
		Document() {

		}
		Document(std::string st) {
			this->myString = st;
		}
		/*Calculate Character in this Document*/
		int calcChar();
		/*Calculate given Character in this Document*/
		int calcChar(const char given_char);
		/*Check if Given String is correct*/
		bool isCorrect();
		/*Optimize Given String*/
		void optimizeString();
		/*Display the Document*/
		void display();
};

#endif
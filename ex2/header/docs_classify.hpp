#ifndef __DOCS_CLASSIFY__
#define __DOCS_CLASSIFY__
#endif

#include <iostream>
#include <vector>
#include <string>
/*Documents*/
class Documents {
	public:
		std::string id;
		std::string publisher_name;
		int publish_counter;
		Documents(std::string _id, std::string _publisher_name, int _publish_counter) {
			this->id = _id;
			this->publisher_name = _publisher_name;
			this->publish_counter = _publish_counter;
		}
		virtual void display() = 0;
		virtual const std::string getType() = 0;
		virtual ~Documents(){

		}
};

/*Books*/
class Books :public Documents{
	public:
		std::string author;
		int num_page;
		Books(std::string _id, std::string _publisher_name, int _publish_counter, std::string _author, int _num_page) :Documents(_id, _publisher_name
			, _publish_counter) {
			this->author = _author;
			this->num_page = _num_page;
		}
		void display() {
			std::cout << "ID: " << this->id << " | " << "Publisher Name: " << this->publisher_name << " | " << "Number of doc published: " << this->publish_counter << " | " << "Author: " << this->author << " | " << "Num page: " << this->num_page << std::endl;

		}
		const std::string getType() { return "Books"; }
		~Books() {

		}
};

/*Magazines*/
class Magazines :public Documents {
	public:
		int publish_num_version;
		int month_publish;
		Magazines(std::string _id, std::string _publisher_name, int _publish_counter, int _publish_num_version, int _month_publish) :Documents(_id, _publisher_name
			, _publish_counter) {
			this->publish_num_version = _publish_num_version;
			this->month_publish = _month_publish;
		}
		void display() {
			std::cout << "ID: " << this->id << " | " << "Publisher Name: " << this->publisher_name << " | " << "Number of doc published: " << this->publish_counter << " | " << "Number of Published Version: " << this->publish_num_version << " | " << "Month publish: " << this->month_publish << std::endl;
		}
		const std::string getType() { return "Magazines"; }
		~Magazines() {

		}
};

/*Newspapers*/
class Newspapers :public Documents {
	public:
		std::string date_publish;
		Newspapers(std::string _id, std::string _publisher_name, int _publish_counter, std::string _date_publish) :Documents(_id, _publisher_name
			, _publish_counter) {
			this->date_publish = _date_publish;
		}
		void display() {
			std::cout << "ID: " << this->id << " | " << "Publisher Name: " << this->publisher_name << " | " << "Number of doc published: " << this->publish_counter << " | " << "Date published: " << this->date_publish;
		}
		const std::string getType() { return "Newspapers"; }
		~Newspapers() {

		}
};


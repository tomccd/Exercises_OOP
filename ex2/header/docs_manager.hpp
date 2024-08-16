#include "docs_classify.hpp"

class Library_Manager {
	private:
		std::vector<Documents*>doc_lists;
	public:
		/*Insert Document Method*/
		bool insertDocument(Documents* doc);
		/*Search Document by publisher name, and type*/
		Documents* searchDocument(const std::string typeOfObj,std::string _publisher_name);
		/*Search Document by id*/
		Documents* searchDocument(std::string _id);
		/*Delete Document Method by id*/
		bool deleteDocument(std::string _id);
		/*Display all Documents in Library*/
		void displayDocument();
		/*Display once*/
		void displayDocument(Documents* doc);
		~Library_Manager() {
			for (auto x : doc_lists) {
				delete x;
			}
		}
};
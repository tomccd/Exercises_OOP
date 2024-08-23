#ifndef __MANAGER__

#include "./Student_Classify.hpp"

class Candidate_Manager {
	private:
		std::vector<Student*>list_candidate;
		std::vector<Student*>pass_candidate;
		int	number_passed = 0; // number candidate passed
		int countTypeStudent(std::string type) {
			int counter = 0;
			for (auto candidate : list_candidate) {
				if (candidate->getType() == type) {
					counter++;
				}
			}
			return counter;
		}
	public:
		int number_expected;
		Candidate_Manager() {

		}
		/*Clear Candidate*/
		void clearCandidate() {
			list_candidate.clear();
		}
		/*Clear num_passed*/
		void clearNumPassed() {
			number_passed = 0;
		}
		/*Insert new Candidate*/
		void insertCandidate(Student *candidate);
		
		/*Insert new passCandidate*/
		void insertPassCandidate();
		
		/*Display all Passed Candidate*/
		void displayAllPassedCandidate();
		
		/*Check if the Date is Valid*/
		bool isDateValid(int _date, int _month, int _year);
		
		/*Check if the Name is Valid*/
		bool isNameValid(std::string _name);
		
		/*Check if the phone number is Valid*/
		bool isPhoneNumberValid(std::string _phone_number);
		
		~Candidate_Manager() {
			for (auto candidate : list_candidate) {
				delete(candidate);
			}
		}
};

#endif
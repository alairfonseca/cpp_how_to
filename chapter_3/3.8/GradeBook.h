#include <string>

using std::string;

class GradeBook {
 public:
  GradeBook(string name);

  void setCourseName(string name);
  string getCourseName();

  void displayMessage();

 private:
  string courseName;
};
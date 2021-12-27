#include <iostream>
#include <string>

/** Declaring the class */
class Date {
    private: 
      int m_year;
      int m_month;
      int m_day;
    public: 
      Date(int year, int month, int day);

      void setDate(int year, int month, int day);

      std::string getDate();

      int getYear() { return m_year; }
};

/** Implementing its member functions */
Date::Date(int year, int month, int day) {
    setDate(year, month, day);
}

void Date::setDate(int year, int month, int day) {
  m_year = year;
  m_month = month;
  m_day = day;
}

std::string Date::getDate() {
    return std::to_string(m_day) +"/"+ std::to_string(m_month) +"/"+ std::to_string(m_year);
}

/** Using the class */
int main() {
    Date date {2021, 10, 15};
    std::cout << "Date: " << date.getDate() << std::endl;
    std::cout << "Year: " << date.getYear() << std::endl;
}

/**
 Output: 
   Date: 15/10/2021
   Year: 2021
 */




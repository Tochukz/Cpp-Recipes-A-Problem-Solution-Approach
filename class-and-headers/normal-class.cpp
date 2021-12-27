#include <iostream>
#include <string>

class Date {
    private:
       int m_year;
       int m_month; 
       int m_day;

    public: 
        Date(int year, int month, int day) {
            setDate(year, month, day);
        }

        void setDate(int year, int month, int day) {
            m_year = year;
            m_month = month;
            m_day = day;
        }

        std::string getDate() {
           return std::to_string(m_day) +"/"+ std::to_string(m_month) + "/" + std::to_string(m_year);
        }

        int getYear() {
            return m_year;
        }
 
};

int main() {
    Date date {2021, 10, 21};
    std::cout << "Date : " << date.getDate() << std::endl;
    std::cout << "Year: " << date.getYear() << std::endl;
}

/**
 Output:
   Date : 21/10/2021 
   Year: 2021  
*/
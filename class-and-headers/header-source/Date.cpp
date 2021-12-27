#include <string>
#include "Date.h"

Date::Date(int year, int month, int day) {
  setDate(year, month, day);
}

void Date::setDate(int year, int month, int day) {
  m_year = year;
  m_month =  month;
  m_day = day;
}

std::string Date::getDate() {
  return std::to_string(m_day) +"/"+ std::to_string(m_month) +"/"+ std::to_string(m_year);
}



#pragma once
#include <string>
#include <vector>
#include <map>
using namespace std;


namespace yazi{

namespace json{

class Json{

public:
	enum Type{
		json_null = 0,
		json_bool,
		json_int,
		json_double,
		json_string,
		json_array,
		json_object
	};
	Json();
	Json(bool value);
	Json(int value);
	Json(double value);
	Json(const char* value);
	Json(const string& value);
	Json(Type type);
	Json(const Json& other);

	//
	operator bool();
	operator int();
	operator double();
	operator string();


	Json& operator[](int index);
	void append(const Json& other);

	string str() const;
private:
	union Value{
		bool m_bool;
		int m_int;
		double m_double;
		std::string *m_string;
		std::vector<Json> *m_array;
		std::map<string,Json> *m_object;
	};

	Type m_type;
	Value m_value;
};


}
}
//
// Created by weiguow on 18-10-24.
//

#ifndef STUDENTSMANAGE_CHINESEFACTORY_H
#define STUDENTSMANAGE_CHINESEFACTORY_H

#include <iostream>
#include <memory>
#include <string>
#include <ostream>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::ostream;

class ChineseFactory {
protected:
    shared_ptr<string> c_type;
    shared_ptr<string> c_name;
    unsigned int c_id;
    int c_age;

public:

    ChineseFactory() = delete;

    explicit ChineseFactory(shared_ptr<string> type, shared_ptr<string> name, unsigned int id, int age);

    friend ostream &operator<<(ostream &output, const ChineseFactory &c) {
        output << "Type:" << *c.c_type << ";;ID:" << c.c_id << ";;Name:" << *c.c_name << ";;age:" << c.c_age << endl;
        return output;
    };
};

#endif //STUDENTSMANAGE_CHINESEFACTORY_H

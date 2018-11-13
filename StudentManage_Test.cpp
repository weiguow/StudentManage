/*
 * 作者：weiguow
 * 单位：中国科学院深圳先进技术研究院数字所异构智能中心
 * 日期：2018-10-17
 * */

//系统库头文件
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <memory>

//引入头文件
#include <Chinese.h>
#include <Teacher.h>
#include <Student.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::shared_ptr;
using std::make_shared;

int main() {

    //设置小明的数据
    cout << "##########################" << endl;
    cout << "学生模块测试" << endl;
    string name = "xiao_ming";
    shared_ptr<string> my_name = make_shared<string>(name);
//     shared_ptr<string> my_name (new string("xiao_ming"));
    unsigned int my_id = 1;
    int age = 24;

    //小明的信息构造函数
    Chinese xiao_ming(my_name, my_id, age);

    shared_ptr<string> xiao_ming_name = xiao_ming.get_name();
    cout << *xiao_ming_name << endl;

    //get,set新的名字
    string new_name = "xiao_ming_dong";
    shared_ptr<string> new_name_1 = make_shared<string>(new_name);
    xiao_ming.set_name(new_name_1);
    cout << *xiao_ming.get_name() << endl;

    //get,set获取学生ID
    cout << xiao_ming.get_id() << endl;
    xiao_ming.set_id(667);
    cout << xiao_ming.get_id() << endl;

    // 拷贝构造函数测试
    cout << "拷贝构造函数测试" << endl;
    Chinese xiao_ming_copy(xiao_ming);
    cout << xiao_ming_copy << endl;

    //赋值运算符测试
    cout << "赋值运算符测试" << endl;
    Chinese xiao_ming_operate = xiao_ming;
    cout << xiao_ming_operate << endl;

    //移动构造函数测试
    cout << "移动构造函数测试" << endl;
    Chinese xiao_ming_move = Chinese(my_name, my_id, age);
    cout << xiao_ming_move << endl;


    cout << "#######################" << endl;
    cout << "教师模块测试" << endl;
    string name_t = "teacher_li";
    shared_ptr<string> t_name = make_shared<string>(name_t);
    unsigned int t_id = 2;
    int t_age = 24;

    vector<string> t_subjects;
    t_subjects.push_back("Math");
    t_subjects.push_back("Chemistry");
    Teacher teacher_li(t_name, t_id, t_age, t_subjects);
    cout << teacher_li << endl;

    string career = "I am a teacher\n";
    shared_ptr<string> t_career = make_shared<string>(career);

    //测试 虚函数
    cout << "虚函数测试" << endl;
    teacher_li.set_career(t_career);
    cout << *teacher_li.get_career() << endl;

    //测试Teacher拷贝构造
    cout << endl;
    cout << "测试拷贝构造函数" << endl;
    Teacher teacher_li_copy(teacher_li);
    cout << teacher_li_copy << endl;

    //测试Teacher赋值运算符
    cout << endl;
    cout << "测试赋值运算符构造函数" << endl;
    Teacher teacher_li_assign = teacher_li;
    cout << teacher_li_assign << endl;
    cout << "-------------------" << endl;


    cout << "#######################" << endl;
    cout << "学生测试模块" << endl;
    vector<string> xiao_comp_subjects;
    xiao_comp_subjects.push_back("English");
    xiao_comp_subjects.push_back("Computer");

    vector<string> xiao_ele_subjects;
    xiao_ele_subjects.push_back("basketball");
    xiao_ele_subjects.push_back("swimming");

    Student xiao_student(xiao_ming.get_name(), xiao_ming.get_id(), xiao_ming.get_age(), xiao_comp_subjects,
                         xiao_ele_subjects);
    string career_t = "I'm a student";
    shared_ptr<string> xiao_career = make_shared<string>(career_t);
    xiao_student.set_career(xiao_career);
    cout << xiao_student << endl;
    cout << *xiao_student.get_career() << endl;

    Student wang_student = xiao_student;
    string name_3 = "weiguow";
    shared_ptr<string> wang_name = make_shared<string>(name_3);
    wang_student.set_name(wang_name);
    cout << wang_student << endl;

    cout << "########################" << endl;
    cout << "班级测试" << endl;
    auto comp_subjects = xiao_comp_subjects;
    auto ele_subjects = xiao_ele_subjects;
    string name_4 = "makun";
    shared_ptr<string> name_5 = make_shared<string>(name_4);
    Student *other_student = new Student(name_5, 2, 23, comp_subjects, ele_subjects);
    shared_ptr<Student> other_s_student = shared_ptr<Student>(other_student);
    cout << *other_s_student << endl;
    string career_3 = "I'm a university student";
    shared_ptr<string> career_4 = make_shared<string>(career_3);
    other_s_student->set_career(career_4);
    cout << other_student->get_career() << endl;


    cout << "回调函数测试" << endl;

    //定义学生
    string name_6 = "weiguow";
    shared_ptr<string> name_7 = make_shared<string>(name_6);
    Student *weiguow = new Student(name_7, 6, 24);

    //定义老师
    string t_name_1 = "yu_zhi_bin";
    shared_ptr<string> name_8 = make_shared<string>(t_name_1);
    Teacher head(name_8,t_id,t_age,t_subjects);

    //学生是老师的学生
    shared_ptr<Teacher> weiguoTeacher = make_shared<Teacher>(head);
    weiguow->setHead(weiguoTeacher);
    weiguow->print_student_and_head_relationship();

    return 0;
}

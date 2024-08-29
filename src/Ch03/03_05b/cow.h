#pragma once
#ifndef COW_H
#define COW_H

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};


#endif //COW_H
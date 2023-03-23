#ifndef SCHEDULER_H
#define SCHEDULER_H

#define MAX_COURSES 12
#define MAX_STUDENTS 210

#include "csp.h"

typedef unsigned int course_id;
typedef unsigned int student_id;

class Student {
    private:
    student_id id;
    course_id courses[MAX_COURSES];

    public:
    student_id get_id();

};

#endif
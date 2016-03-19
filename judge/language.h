#ifndef LANGUAGE_H
#define LANGUAGE_H




enum language_type {
    LANG_C = 1,
    LANG_CPP = 2,
    LANG_JAVA = 3
};

const char language_filename[][20] = {
    "",
    "code.c",
    "code.cpp",
    "Main.java"
};

const char language_execname[][20] = {
    "",
    "code",
    "code",
    "Main.class"
};



#endif

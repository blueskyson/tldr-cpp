#pragma once

#include <vector>
#include <iostream>
#include <sstream>
#include <regex>
#include <algorithm>

#include "global.h"
#include "opts.h"

class Example {
    public:
        string description;
        string command;
};

class Page {
    private:
        int pos = 0;
        string getLine();
    public:
        string name;
        string description;
        string content;
        std::vector<Example> examples;
        string platform;

        Page(string content);
        Page();

        void print();
        void format();
        void formatBackticks(string & str);
        static void formatTokenSyntax(string & str);
};
#ifndef ABSTRACTEXPRESSION_H
#define ABSTRACTEXPRESSION_H

#include <iostream>
#include <list>

#define SAFE_DELETE(p) if(p) { delete p; p=nullptr;}
using namespace std;

list<string> split(const string& str, const string& pattern)
{
    list<string> ret;
    if (pattern.empty()) return ret;
    size_t start=0,index=str.find_first_of(pattern,0);
    while(index!=str.npos)
    {
        if(start!=index)
            ret.push_back(str.substr(start,index-start));
        start=index+1;
        index=str.find_first_of(pattern,start);
    }
    if(!str.substr(start).empty())
        ret.push_back(str.substr(start));
    return ret;
}

class AbstractExpression
{
public:
    virtual ~AbstractExpression() {}
    virtual string Interpret(string context) = 0;
};


// Òô½×
class Scale_NonTerminalExpression : public AbstractExpression
{
public:
    virtual string Interpret(string context) {
        if ( context == "1")
            return "Do";
        else if ( context == "2")
            return "Re";
        else if ( context == "3")
            return "Mi";
        else if ( context == "4")
            return "Fa";
        else if ( context == "5")
            return "Sol";
        else if ( context == "6")
            return "La";
        else
            return "Xi";
    }
};

// Òô·û
class Note_NonTerminalExpression : public AbstractExpression
{
public:
    virtual string Interpret(string context) {
        if ( context == "1")
            return "È«Òô·û";
        else if ( context == "1/2")
            return "¶þ·ÖÒô·û";
        else if ( context == "1/4")
            return "ËÄ·ÖÒô·û";
        else
            return "°Ë·ÖÒô·û";
    }
};

class TerminalExpression : public AbstractExpression {
public:
    TerminalExpression() : m_scale(new Scale_NonTerminalExpression), m_note(new Note_NonTerminalExpression) {}
    ~TerminalExpression() { SAFE_DELETE(m_scale); SAFE_DELETE(m_note); }

    virtual string Interpret(string context) {
        list<string> split_result = split(context," ");
        if (split_result.size() != 2) return "";

        string scale = m_scale->Interpret(split_result.front());
        string note = m_note->Interpret(split_result.back()) ;
        return scale + " " + note;
    }

private:
    Scale_NonTerminalExpression * m_scale;
    Note_NonTerminalExpression * m_note;
};


#endif // ABSTRACTEXPRESSION_H

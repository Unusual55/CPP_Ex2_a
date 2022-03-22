#ifndef NOTE_H
#define NOTE_H
#include "Direction.hpp"
#include <string>
using namespace std;
namespace ariel
{
    class Notebook
    {
    public:
        Notebook(){}
        ~Notebook(){}
        bool write(int pageIndex, int rowIndex, int colIndex, ariel::Direction dir, std::string text){return true;}
        bool erase(int pageIndex, int rowIndex, int colIndex, ariel::Direction dir, int length){return true;}
        std::string read(int pageIndex, int rowIndex, int colIndex, ariel::Direction dir, int length){return "";}
        std::string show(int pageIndex){return "";}
    };
};
#endif
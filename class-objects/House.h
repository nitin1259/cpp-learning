#ifndef HOUSE_H
#define HOUSE_H



#include <string>

using namespace std;

class House {

    public:
        House();
        House(string color, int story);
        ~House();
        void setColor(string color);
        void setStory(int story);
        string getColor() const;
        int getStory() const;
        void printHouseData() const;
    private:
        string color;
        int story;
}; //end of House class

#endif
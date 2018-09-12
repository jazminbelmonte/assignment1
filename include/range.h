//TODO: Class Range defined
#ifndef RANGE_H
#define RANGE_H
#include <vector>

template <class R>
class Range {
    public:
        std::vector<std::int> values(){ return data; }
        int      length() const { return lengthOf; }
        double      sum() const
        double      average() const;
        double      max() const;
        double      min() const;
        double      values() const;
        friend	    ostream& operator<<(ostream& out, Range& r);
    private:
        //implementing vector of data
        std::vector<std::string> data;
        std::int startNum;
        std::int endNum;
        std::int step;
};

ostream& operator<<(ostream& out, lentgh& len)
{
    out << values() << endl;

    return out;
}

#endif //RANGE_H
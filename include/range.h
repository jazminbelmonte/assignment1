//TODO: Class Range defined
#ifndef RANGE_H
#define RANGE_H
#include <vector>

template <class T>
class Range {
    public:
        std::vector<T> values(){ return rdata; }
        int length() const {
            return rdata.size();
        }

        T sum() const {
            for(T v : values()) {

                std::cout << i << std::endl;
            }
        }

        T average() const { return average; }

        T max() const { return max; }

        T min() const { return min; }

        friend std::ostream&(std::ostream& out, Range& range2) {
            for (Range* r : rdata.values()) {
                out << r;
            }
            return out;

        }


    private:
        //implementing vector of data
        std::vector<T> rdata;
        int startNum;
        int endNum;
        int step;
};


#endif //RANGE_H

//●length()​: returns the number of values in the range.
//●sum()​: returns the number of values in the range.
//●average()​: returns the number of values in the range.
//●max()​ and ​min():​ return the maximum and the minimum value of the
//range respectively.
//●values()​:  return the maximum and the minimum value of the
// Range<int> r(3, 12, 2);
// cout << r;                   prints :   3  5  7  9  11
// cout is part of the ostream class, on the right hand side
// "r" is part of Range<int>

//figure out how to loop through the values and then apply them to all the functions
//*this.sum()
//this->sum

/*std::string Range::operator<<(double startNum, double endNum, double step) {
            while (startNum < endNum) {
                startNum =+ step;
                if (startNum > endNum) {
                    startNum =- step;
                    std::cout << startNum;
                } else {
                    std::cout << startNum;
                }
            }
        }*/


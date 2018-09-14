#include <vector>
#include <iostream>

#ifndef RANGE_H
#define RANGE_H



template <typename T>
class Range {
    public:

        std::vector<T>& values(){ return nums; }

        Range(T start, T end, T step = 1): start(start), end(end), step(step) {
            for ( T i = start; start < end ? i <= end : i >= end; i += step) {
                nums.push_back(i);
            }
        }

        int length() const { return nums.size(); }

        T sum() const {
            T x = 0;
            for(T v : nums) {
                x += v;
            } return x;
        }

        double average() const {
            return static_cast<double>(sum()) / static_cast<double>(nums.size());
        }

        T max() const {
            T x = 0;
            for(T v : nums) {
                if (v > x) {
                    x = v;
                }
            } return x;
        }

        T min() const {
            T x = start;
            for(T v : nums) {
                if (v < x) {
                    x = v;
                }
            } return x;
        }

        friend std::ostream& operator<<(std::ostream& out, Range& range)
        {
            for(T v : range.nums) {
                out << v << " ";
            }
            out << std::endl;
            return out;
        }

    private:
        std::vector<T> nums;
        T start;
        T end;
        T step;

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



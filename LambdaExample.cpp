#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool is_greater_than_5(int value)
{
      return (value > 5);
}

bool is_negative_number(int value) {
    return (value < 0);
}


int main()
{
    vector<int> numbers { -1, 2, 3, -4, 5, -10, 15, 20, -25, 35, 45, 0, 50 };

    auto greater_than_5_count = count_if(numbers.begin(), numbers.end(),is_greater_than_5);
    auto negative_numbers_count = count_if(numbers.begin(), numbers.end(), is_negative_number);

    cout << "Count of numbers greater than 5: " << greater_than_5_count << endl;
    cout << "Count of negative numbers: " << negative_numbers_count << endl;

    // now do with Lambda
    cout << "Count of numbers greater than 5 w/ lambda: " << count_if(numbers.begin(), numbers.end(), [](int x) { return (x > 5); })  << endl;
    cout << "Count of negative numbers w/ lambda: " << count_if(numbers.begin(), numbers.end(), [](int value) { return (value < 0); }) << endl;
}


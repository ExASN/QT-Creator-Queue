#include <QCoreApplication>

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> numbers;
    numbers.push("zero");
    numbers.push("one");
    numbers.push("two");
    numbers.push("three");
    numbers.push("four");
    numbers.push("five");
    numbers.push("six");
    numbers.push("seven");
    numbers.push("eigth");
    numbers.push("nine");

   cout << "The size of queue is: " << numbers.size() << endl;
   cout << "The number in front of the queue is: " << numbers.front() << endl;
   cout << "The number behind the queue is: " << numbers.back() << endl;

    return 0;
}

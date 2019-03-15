#include <iostream>

using namespace std;

void checkEqual(const string& left, const string& right)
{
    string concStr;

    if(left != right) {
        concStr = left + " != " + right;
        throw runtime_error(concStr);
    }
}


int main()
{
    string strA, strB;

    cout << "set first string" << endl;
    cin >> strA;

    cout << "set second string" << endl;
    cin >> strB;

    try {
        checkEqual(strA, strB);
    }
    catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
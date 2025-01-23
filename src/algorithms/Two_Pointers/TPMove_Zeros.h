#ifndef TPMOVE_ZEROS_H
#define TPMOVE_ZEROS_H
#include <vector>
#include <string>
using namespace std;

class TPMove_Zeros {
    private:
        vector<int> data;
        int size;
    public:
        TPMove_Zeros(const vector<int>& data);
        void move_zeros();
        vector<int> getData();
        int getDataSize();
        void printData();
};

#endif //TPMOVE_ZEROS_H
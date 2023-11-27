#include <stdexcept>

class List {
    private:
        int len = 0;
        int* data = new int[len];
    public:
        void append(int num){
            int new_len = len+1;
            int* temp = new int[new_len];
            int* for_dell;
            for (int i = 0; i < len;i++){
                *(temp + i) = *(data + i);
            }
            *(temp + len) = num;
            len = new_len;
            for_dell = data;
            data = temp;    
            delete for_dell;                                                              
        }

        void append_arr(int num[],int num_values){
            for (int i = 0;i<num_values;i++){
                this->append(num[i]);
            }                                                                  
        }

        int value_in_index(int index){
            if (index>=len) throw std::invalid_argument("Index outside range.");
            return *(data+index);
        }

        int index_of_value(int value){
            for (int i =0;i<len;i++){
                if (*(data+i)==value){
                    return i;
                }
            }
            return -1;
        }

        int pop(int index = -1){
            if (index>=len) throw std::invalid_argument("Index outside range.");
            int new_len = len-1;
            int* temp = new int[new_len];
            int* for_dell;
            int ofset = 0;

            if (index == -1){
                index = new_len;
            }

            for (int i = 0; i < len;i++){
                if (i == index){
                    *(temp + i-ofset) = *(data + i);
                } else ofset++;
            }
            len = new_len;
            int value = *(data+new_len);
            for_dell = data;
            data = temp;    
            delete for_dell;  
            return value;
        }

        int lenght(){
            return len;
        }

};
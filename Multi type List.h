#include <stdexcept>

class Multi_List {
    private:
        int len = 0;
        void** data=new void*[len];
    public:
        void append(void* value){
            int new_len = len+1;
            void** temp = new void*[new_len];
            void** for_dell;
            for (int i = 0; i < len;i++){
                *(temp + i) = *(data + i);
            }

            *(temp + len) = value;
            len = new_len;
            for_dell = data;
            data = temp;    
            delete for_dell;                                                              
        } 

        void* value_in_index(int index){
            if (index>=len) throw std::invalid_argument("Index outside range.");
            return *(data+index);
        }

        int index_of_value(void* value){
            for (int i =0;i<len;i++){
                if (*(data+i)==value){
                    return i;
                }
            }
            return -1;
        }

        void* pop(int index = -1){
            if (index>=len) throw std::invalid_argument("Index outside range.");
            int new_len = len-1;
            void** temp = new void*[new_len];
            void** for_dell;
            int ofset = 0;

            if (index == -1){
                index = new_len;
            }

            for (int i = 0; i < len;i++){
                if (i != index){
                    *(temp + i-ofset) = *(data + i);
                } else ofset++;
            }
            len = new_len;
            void* value = *(data+new_len);
            for_dell = data;
            data = temp;    
            delete for_dell;  
            return value;
        }

        int lenght(){
            return len;
        }

        void clear() {
            void** temp = new void*[0];
            void** for_del;

            len = 0;
            for_del = data;
            data = temp;
            delete for_del;
        }

};
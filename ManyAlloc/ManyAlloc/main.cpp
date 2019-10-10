//
//  main.cpp
//  ManyAlloc
//
//  Created by Abbas Gussenov on 10/9/19.
//

#include <iostream>
#include <cstdlib>
#include <unistd.h>

int const KB = 1024;
int const MB = KB * KB;

typedef struct Data_ {
    int i[MB / sizeof(int)];
} Data;

int main(int argc, const char * argv[]) {
    int const max = 60;
    for (int s = 0; s < max; ++s) {
        Data *ptr = new Data;
        
        //usleep(1000);       // will sleep for 1 ms
        //usleep(1);          // will sleep for 0.001 ms
        usleep(1000000);  // will sleep for 1 s
        
        delete ptr;
    }
    return 0;
}

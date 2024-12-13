#include<iostream>
#include<thread>
using namespace std;

void first_thread_fun(){
    cout << "first thread" << endl;
}

void second_thread_fun(){
    cout << "second thread" << endl;
}

int main(){
    thread first_thread(first_thread_fun);
    thread second_thread(second_thread_fun);

    first_thread.join();
    second_thread.join();
    
    return 0;
}
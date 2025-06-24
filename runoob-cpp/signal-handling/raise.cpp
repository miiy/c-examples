#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";
    // Cleanup and close up stuff here
    // Terminate program
    exit(signum);
}

int main() {
    int i = 0;
    signal(SIGINT, signalHandler); // Register signal handler for SIGINT

    while(++i) {
        cout << "Going to sleep..." << endl;
        if (i == 3) {
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}
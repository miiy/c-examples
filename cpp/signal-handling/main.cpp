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
    signal(SIGINT, signalHandler); // Register signal handler for SIGINT

    while(1) {
        cout << "Going to sleep..." << endl;
        sleep(1);
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Logger {
private:
    string filename;

public:
    Logger(string file) {
        filename = file;
    }

    void log(string level, string message) {
        ofstream logFile(filename, ios::app);
        if (!logFile) {
            cout << "Unable to open the log file." << endl;
            return;
        }

        logFile << level << ": " << message << endl;
        logFile.close();
    }
};

int main() {
    Logger logger("simple_log.txt");

    logger.log("INFO", "This is an info log.");
    logger.log("WARNING", "This is a warning log.");
    logger.log("ERROR", "This is an error log.");

    return 0;
}

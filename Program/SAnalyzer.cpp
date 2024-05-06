#include "Header_SA.h"

class SAnalyzer
{
private:
    string incoming_to_analyze;
    string checking_str;
public: 
    void analyzeMessage();
    void setChecking(string inc_s);
    string getChecking();
};
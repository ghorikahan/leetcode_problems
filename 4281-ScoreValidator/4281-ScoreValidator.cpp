// Last updated: 8/5/2026, 5:54:48 PM
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int totalScore = 0;
        int counter = 0;
        vector<int> res;

        for (int i = 0; i < events.size(); i++) {
            if (counter == 10) {
                res.push_back(totalScore);
                res.push_back(counter);

                return res;
            } else if (events[i] == "W") {
                counter++;
            } else if (events[i] == "WD" || events[i] == "NB") {
                totalScore++;
            } else if (events[i] == "0" || events[i] == "1" ||
                       events[i] == "2" || events[i] == "3" ||
                       events[i] == "4" || events[i] == "6") {
                totalScore += stoi(events[i]);
            }
        }

        res.push_back(totalScore);
        res.push_back(counter);

        return res;
    }
};
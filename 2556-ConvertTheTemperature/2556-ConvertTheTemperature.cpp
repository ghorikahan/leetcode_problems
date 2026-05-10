// Last updated: 5/10/2026, 6:42:23 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        vector<double> ans = {kelvin, fahrenheit};

        return ans;
    }
};
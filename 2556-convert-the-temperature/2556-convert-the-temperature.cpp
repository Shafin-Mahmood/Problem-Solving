class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        vector<double> ans ;
        
        if(celsius>=0)
        {
             double Kelvin = celsius + 273.15 ;
             double Fahrenheit = celsius * 1.80 + 32.00;

             ans.push_back(Kelvin);
             ans.push_back(Fahrenheit);



        }
        return ans ;
    }
};
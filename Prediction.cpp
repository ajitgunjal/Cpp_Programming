#include <iostream>
using namespace std;

string predictWeather(float temp, float humidity, float wind) {
    if (temp > 35 && humidity < 40)
        return "Hot and Dry";
    else if (temp > 30 && humidity > 60)
        return "Hot and Humid";
    else if (temp < 15)
        return "Cold Weather";
    else if (humidity > 80 && wind < 10)
        return "Possibility of Rain";
    else if (wind > 25)
        return "Windy Weather";
    else
        return "Normal Weather";
}

int main() {
    float temperature, humidity, windSpeed;

    cout << "Enter temperature (°C): ";
    cin >> temperature;

    cout << "Enter humidity (%): ";
    cin >> humidity;

    cout << "Enter wind speed (km/h): ";
    cin >> windSpeed;

    string weather = predictWeather(temperature, humidity, windSpeed);

    cout << "\nPredicted Weather: " << weather << endl;

    return 0;
}


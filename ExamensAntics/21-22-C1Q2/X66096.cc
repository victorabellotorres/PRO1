/*
    Annual worldwide CO2 emission data can be downloaded from https://ourworldindata.org.
    For instance, data of greenhouse gas emissions in gigatons of last five years is: 
    2021   36.4
    2020   34.81
    2019   36.7
    2018   36.65
    2017   35.93

    Remember that 1 gigaton is 109 tones, or 1012 kg.
    Bill Gates claims in his book How to avoid a climate disaster that there are five activity areas involved in CO2 emissions
    and provides the following table that shows the pollution contribution of each activity as a percentage:
    making things 31%
    pluggin in 27% 
    growing things 19%
    getting around 16%
    keeping warm and cold 7%

    Write a program that given the gas emissions of a year and an activity, outputs the amount of emissions due to the activity during the year.

    The input consist of three data. First, an integer representing a year. Second, a double with the amount of gas emissions in
    gigatons during the year and finally, a string denoting an activity. The string is always one in the list making_things, pluggin_in,
    growing_things, getting_around, keeping_warm_and_cold.

    A sentence providing the emissions in gigatons due to the activity in the year. See the examples below. Write the gigaton value using two decimal places.

    To write double values using two decimal places, insert the following two lines at the beginnnig of the main().
*/
#include <iostream>
using namespace std;

int main() {
    int year;
    double total_CO2;
    string activity;

    cin >> year >> total_CO2 >> activity;

    if (activity == "making_things") {
        total_CO2 *= 0.31;
        activity = "Making things";
    }
    else if (activity == "pluggin_in") {
        total_CO2 *= 0.27;
        activity = "Pluggin in";
    }
    else if (activity == "growing_things") {
        total_CO2 *= 0.19;
        activity = "Growing things";
    }
    else if (activity == "getting_around") {
        total_CO2 *= 0.16;
        activity =  "Getting around";
    }
    else {
        total_CO2 *= 0.07;
        activity = "Keeping warm and cold";
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << activity << " produced " << total_CO2 << " CO2 Gt in " << year << endl;
}
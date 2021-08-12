#include "function_Server.h"

using namespace rapidjson;

static size_t my_write(void* buffer, size_t size, size_t nmemb, void* param)
{
    string& text = *static_cast<string*>(param);
    size_t totalSize = size * nmemb;
    text.append(static_cast<char*>(buffer), totalSize);
    return totalSize;
}

// Countries: https://coronavirus-19-api.herokuapp.com/countries
string getWorldData() {
    string result;
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://coronavirus-19-api.herokuapp.com/countries");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

        res = curl_easy_perform(curl);

        if (CURLE_OK != res)
        {
            cout << "CURL error: " << res << endl;
        }
    }

    curl_global_cleanup();

    return result;
}

// world: https://coronavirus-19-api.herokuapp.com/all
string world()
{
    string result;
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://coronavirus-19-api.herokuapp.com/all");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

        res = curl_easy_perform(curl);

        if (CURLE_OK != res)
        {
            cout << "CURL error: " << res << endl;
        }
    }

    curl_global_cleanup();

    return result;
}

void savefileJson()
{
    // current date/time based on current system
    time_t now = time(0);

    tm* ltm = localtime(&now);

    ofstream f;
    f.open("Data\\CovidData\\world.txt", ios::out);
    f << world();
    f.close();

    string savefileName;
    string day = (ltm->tm_mday < 10) ? ("0" + to_string(ltm->tm_mday)) : (to_string(ltm->tm_mday));
    string month = (ltm->tm_mon + 1 < 10) ? ("0" + to_string(1 + ltm->tm_mon)) : (to_string(1 + ltm->tm_mon));
    savefileName = day + "-" + month + "-" + to_string(1900 + ltm->tm_year) + ".txt";
    fstream fileSave("Data\\CovidData\\" + savefileName, ios_base::out);
    fileSave << getWorldData();
    fileSave.close();
}

string getWorld()
{
    ifstream f;
    f.open("Data\\CovidData\\world.txt", ios::in);

    Document d;
    string line;
    getline(f, line);
    d.Parse(line.c_str());

    string Result = to_string(d["cases"].GetInt64()) + "|" + to_string(d["deaths"].GetInt64()) + "|" + to_string(d["recovered"].GetInt64());
    return Result;
}

string getData(string date, string countryName)
{
    ifstream f;
    f.open("Data\\CovidData\\" + date + ".txt", ios::in);

    if (!f.is_open()) return "100";
    
    Document d;

    string data;
    getline(f, data);

    d.Parse(data.c_str());
    f.close();
    
    string Result = "101";
    for (int i = 0; i < d.Size(); i++)
    {
        if (d[i]["country"].GetString() == countryName)
        {
            int cases = d[i]["cases"].GetInt64();
            int caseToday = d[i]["todayCases"].GetInt64();
            int deaths = d[i]["deaths"].GetInt64();
            int deathsToday = d[i]["todayDeaths"].GetInt64();
            int recoverd = d[i]["recovered"].IsInt64() ? (d[i]["recovered"].GetInt64()) : 0;
            Result = to_string(cases) + "|" + to_string(caseToday) + "|" + to_string(deaths) + "|" + to_string(deathsToday) + "|" + to_string(recoverd);
            
            return Result;
        }
    }
    return Result;
}
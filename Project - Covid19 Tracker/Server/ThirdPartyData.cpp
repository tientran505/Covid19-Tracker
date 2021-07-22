#include "Server.h"

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
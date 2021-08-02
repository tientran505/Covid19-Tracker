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

void savefileJson()
{
    // current date/time based on current system
    time_t now = time(0);

    tm* ltm = localtime(&now);

    string savefileName;
    savefileName = to_string(ltm->tm_mday) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(1900 + ltm->tm_year) + ".txt";
    fstream fileSave(savefileName, ios_base::out);
    fileSave << getWorldData();
    fileSave.close();
}

bool checkPass(std::string inputname, std::string passkey)
{
    std::string k;
    std::fstream fileUsers(k, std::ios_base::in);
    if (fileUsers.fail())
    {
        std::cout << "File is not existed";
        return true;
    }
    std::string user;
    std::string username;
    std::string password;
    while (!fileUsers.eof())
    {
        getline(fileUsers, username, ',');
        if (username.compare(inputname) == 0)
        {
            getline(fileUsers, password);
            if (password.compare(passkey) == 0)
            {
                fileUsers.close();
                return true;
            }
            else
            {
                fileUsers.close();
                return false;
            }
        }
        else
        {
            getline(fileUsers, user);
        }
    }
    fileUsers.close();
    return false;
}

bool checkExistedUsername(std::string inputname)
{
    std::string k;
    std::fstream fileUsers(k, std::ios_base::in);
    if (fileUsers.fail())
    {
        std::cout << "File is not existed";
        return true;
    }

    std::string username;
    std::string user;
    while (!fileUsers.eof())
    {
        getline(fileUsers, username, ',');
        if (username.compare(inputname) == 0)
        {
            fileUsers.close();
            return false;
        }
        else
        {
            getline(fileUsers, user);
        }
    }
    fileUsers.close();
    return true;
}

void SaveinUserfile(std::string inputname, std::string passkey)
{
    if (checkExistedUsername(inputname) == 0)
    {
        std::string k;
        std::fstream fileUsers(k, std::ios_base::in);
        fileUsers.seekg(0, ios_base::end);
        fileUsers << inputname;
        fileUsers << ',';
        fileUsers << passkey;
        fileUsers << endl;
        fileUsers.close();
    }
    else
    {
        if (checkPass(inputname, passkey) == 1)
        {
            std::cout << "Success";
        }
        else std::cout << "Wrong password";
    }
}


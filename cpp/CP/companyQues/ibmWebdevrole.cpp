#include <iostream>
#include <vector>
#include <sstream>
#include <regex>

bool isValidCSRFToken(const std::string &csrfToken)
{
    // Validating CSRF token for POST requests
    std::regex csrfRegex("^[a-z0-9]{8,}$");
    return std::regex_match(csrfToken, csrfRegex);
}

std::vector<std::string> getResponse(const std::vector<std::string> &validAuthTokens, const std::vector<std::vector<std::string>> &requests)
{
    std::vector<std::string> results;

    for (const auto &request : requests)
    {
        
            std::string requestType = request[0];
            std::string url = request[1];

            // Extracting parameters from the URL
            size_t pos = url.find('?');
            if (pos != std::string::npos)
            {
                std::string paramsString = url.substr(pos + 1);
                std::istringstream paramsStream(paramsString);
                std::string param;
                std::vector<std::string> params;

                while (std::getline(paramsStream, param, '&'))
                {
                    params.push_back(param);
                }

                // Validating authentication token
                bool isValidAuthToken = false;
                for (const auto &param : params)
                {
                    if (param.compare(0, 6, "token=") == 0)
                    {
                        std::string authToken = param.substr(6);
                        if (std::find(validAuthTokens.begin(), validAuthTokens.end(), authToken) != validAuthTokens.end())
                        {
                            isValidAuthToken = true;

                            if (requestType == "POST")
                            {
                                // Validating CSRF token for POST requests
                                pos = param.find('=') + 1;
                                std::string csrfToken = param.substr(pos);
                                if (isValidCSRFToken(csrfToken))
                                {
                                    results.push_back("VALID, " + paramsString);
                                }
                                else
                                {
                                    results.push_back("INVALID");
                                }
                            }
                            else
                            {
                                results.push_back("VALID, " + paramsString);
                            }
                            break;
                        }
                    }
                }

                if (!isValidAuthToken)
                {
                    results.push_back("INVALID");
                }
            }
            else
            {
                results.push_back("INVALID");
            }
        
    }

    return results;
}

int main()
{
    std::vector<std::string> validAuthTokens = {"token1", "token2"};
    std::vector<std::vector<std::vector<std::string>>> requests = {
        {{"GET", "example.com/page?token=token1&param1=value1&param2=value2"}},
        {{"POST", "example.com/action?token=token2&csrf_token=abc123&param3=value3"}}};

    std::vector<std::string> result = getResponse(validAuthTokens, requests);

    for (const auto &res : result)
    {
        std::cout << res << std::endl;
    }

    return 0;
}
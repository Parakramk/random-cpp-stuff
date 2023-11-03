#include<iostream>
#include<HTTPRequest.hpp>

/*
can only send http requests not https
*/

int main() {
    try {

        http::Request request{ "http://httpbin.org/anything" };

        // send a get request
        const auto response = request.send("GET");
        std::cout << std::string{ response.body.begin(), response.body.end() } << '\n'; // print the result
    }
    catch (const std::exception& e) {
        std::cerr << "Request failed, error: " << e.what() << '\n';
    }
}
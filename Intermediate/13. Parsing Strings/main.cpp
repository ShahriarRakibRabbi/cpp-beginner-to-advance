#include <iostream>
#include <sstream>

using namespace std;

struct Movie {
    string title;
    int releaseYear;
};

Movie parseMovie(string str) {
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.releaseYear;

    return movie;
}

int main(void) {
    string movieInfo = "Terminator 1, 1984";
    Movie movie = parseMovie(movieInfo);
    cout << "Title : " << movie.title << "\nRelease year : " << movie.releaseYear;
    return 0;
}
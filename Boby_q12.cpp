#include <iostream>  
using namespace std;

int main() {
    // 1. Define a string variable with your favorite TV show/movie/video game/book
    string favorite = "My favorite movie is Harry Potter";

    // 2. Define a pointer variable that refers to the memory location of your string variable
    string* favoritePtr = &favorite;

    // 3. Print the string variable
    cout << "Favorite (string variable): " << favorite << endl;

    // 4. Print the pointer variable (memory address of the string variable)
    cout << "Pointer (memory address): " << favoritePtr << endl;

    // 5. Print the dereferenced pointer value (the value stored at the memory address)
    cout << "Dereferenced pointer value: " << *favoritePtr << endl;

    // 6. Modify the string variable to be your second-favorite TV show/movie/video game/book
    favorite = "My favorite author is Agatha Christie";

    // 7. Repeat requirements 3-5
    cout << "\nAfter modification:\n";
    cout << "Favorite (string variable): " << favorite << endl;
    cout << "Pointer (memory address): " << favoritePtr << endl;
    cout << "Dereferenced pointer value: " << *favoritePtr << endl;

    return 0;
}

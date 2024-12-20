#include <iostream>
#include <ctime>

// function
void happyBirthday(std::string name){
    std::cout << "Happy Birthday "<< name << "\n";
}
double square(double length){
    return length * length;
}
double volumeOfCube(double width, double height, double length){
    return width * height * length;
}
std::string concatString(std::string string1, std::string string2){
    return string1.append(string2);
}
int main(){
    happyBirthday("Bro");
    std::cout << square(3.5) << std::endl;
    std::cout << volumeOfCube(3, 4, 5)<<std::endl;
    std::cout << concatString("Hello ", "Phong");
}
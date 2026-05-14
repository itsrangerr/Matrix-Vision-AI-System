#include <iostream>
#include <string>
#include <cmath>
int trichXuatDiem(std::string config, std::string metricName){

    std::string metric = metricName + ":";
    size_t pos = config.find(metric);
    if (pos != std::string::npos) {
        size_t start = pos + metric.length();
        size_t end = config.find(",", start);
        if (end == std::string::npos) {
            end = config.length();
        }
        return std::stoi(config.substr(start, end - start));
    }
    return -1; 
}
int **taoMaTran(int n){
    int **matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        *(matrix+i) = new int[n];
    }
    return matrix;

}
void nhapMaTran(int **matran, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            std::cin >> *(*(matran+i)+j);
        }
    }
}
int tinhDoLech(int **matran, int n){
    int tongC = 0 , tongP = 0;
    for (int i = 0; i < n; i++)
    {
        tongC += abs(*(*(matran+i)+i));
        tongP += abs(*(*(matran+i)+n-1-i));
    }
    return abs(tongC - tongP);
}
int nhiPhanSangThapPhan(int binary, int power = 0){
    if (binary == 0) {
        return 0;
    }
    int lastDigit = binary % 10;
    return lastDigit * pow(2, power) + nhiPhanSangThapPhan(binary / 10, power + 1);
}
int main() {
    
    std::string config = "Mode:V-Shape,Jawline:85,EyeSymmetry:92,Skin:70";
    std::string metricName = "EyeSymmetry";
    int diem = trichXuatDiem(config, metricName);

    std::cout << "Diem cua " << metricName << ": " << diem << std::endl;

    int n;
    std::cout << "Nhap kich thuoc ma tran vuong: ";
    std::cin >> n;
    int **matran = taoMaTran(n);
    nhapMaTran(matran, n);
    std::cout<< "Do lech giua duong cheo chinh va duong cheo phu: " << tinhDoLech(matran, n) << std::endl;
    int binary;
    std::cout << "Nhap so nhi phan: ";
    std::cin >> binary;
    std::cout << "Gia tri thap phan: " << nhiPhanSangThapPhan(binary) << std::endl;
    for (int i = 0; i < n; i++)
    {
        delete[] matran[i];
    }
    delete[] matran;
    matran = nullptr;



    system("pause");
    return 0;
}
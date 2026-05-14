# 👁️ Looksmaxxing AI Core Engine (V10)

Hệ thống lõi (Core Engine) xử lý thuật toán phân tích điểm ảnh khuôn mặt. Dự án tập trung vào việc quản lý bộ nhớ Heap (Heap Memory Management), xử lý chuỗi động và tối ưu hóa thuật toán tính toán ma trận bằng C++.

## ✨ Tính năng cốt lõi (Core Features)
- **Dynamic Config Extractor:** Module tự động bóc tách dữ liệu từ chuỗi cấu hình linh hoạt (VD: `Mode:V-Shape,Jawline:85...`). Thao tác trích xuất dữ liệu trực tiếp bằng cơ chế `std::string::find` và `substr`, đảm bảo tốc độ parsing dữ liệu thời gian thực.
- **Facial Asymmetry Calculation:** Khởi tạo và xử lý ma trận vuông cấp $N$ động để mô phỏng bản đồ điểm ảnh khuôn mặt. Thuật toán tính độ lệch khuôn mặt (Asymmetry) được tối ưu chỉ với $O(N)$ bằng cách quét đồng thời 2 đường chéo ma trận.
- **Binary Decoder (Recursive):** Thuật toán giải mã điểm số tổng kết từ hệ Nhị phân sang Thập phân bằng Đệ quy (Recursion), loại bỏ hoàn toàn các vòng lặp truyền thống.
- **Memory Safety:** Kiến trúc Zero Memory Leak. Toàn bộ ma trận đa chiều được cấp phát và giải phóng an toàn tuyệt đối, khóa chốt bằng `nullptr` để chống lỗi Dangling Pointer.

## 🛠️ Công nghệ & Kỹ thuật
- **Ngôn ngữ:** C++ (Standard)
- **Thư viện:** `<iostream>`, `<string>`, `<cmath>`
- **Kỹ thuật:** 2D Dynamic Arrays (Pointers to Pointers), String Manipulation, Mathematical Recursion.

## 🚀 Hướng dẫn biên dịch (How to run)
1. Clone repository này về máy cục bộ:
   ```bash
   git clone [https://github.com/your-username/Looksmaxxing-AI-Core-Engine.git](https://github.com/your-username/Looksmaxxing-AI-Core-Engine.git)
2. Compile file mã nguồn bằng GCC hoặc bất kỳ trình biên dịch C++ nào:
  ```bash
  g++ main.cpp -o LooksmaxxingEngine
./LooksmaxxingEngine
```
3. Nhập các thông số mô phỏng (kích thước ma trận điểm ảnh, giá trị nhị phân...) theo hướng dẫn trên màn hình console.

👨‍💻 Tác giả
Phùng Tấn Khánh Đăng

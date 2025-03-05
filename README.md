
# Image Transformation Tool  

## 📌 Overview  
The **Image Transformation Tool** is a **command-line utility** written in C that allows users to **rotate, flip, and scale** a **binary matrix image (1s & 0s)**. It uses **matrix transformations** to apply modifications, making it useful for basic **image processing and visualization**.  

## 🎯 Features  
✅ **Rotate the image** (90° clockwise & 90° anticlockwise)  
✅ **Flip the image** (vertically & horizontally)  
✅ **Scale the image** using ASCII representation  
✅ **Menu-based CLI for user interaction**  

## 🛠️ Technologies Used  
- **C Programming Language**  
- **2D Arrays & Matrix Transformations**  
- **Control Flow & Loops**  
- **System Calls** (`system("clear")` for real-time updates)  

## 🚀 How to Install & Run  

### 🔹 1. Clone the Repository  
```bash
git clone https://github.com/YourUsername/Image-Transformation-Tool.git
cd Image-Transformation-Tool
```

### 🔹 2. Compile the program  
```bash
gcc image_transformation.c -o image_tool
```

### 🔹 3. Run the program  
```bash
./image_tool
```

## Sample Output
```bash
Original Image:

⬛⬛⬛⬛⬛⬛  
⬛⬜⬛⬛⬜⬛  
⬛⬛⬛⬛⬛⬛  
⬛⬜⬛⬛⬜⬛  
⬛⬜⬜⬜⬜⬛  
⬛⬛⬛⬛⬛⬛  

Menu:
1. Rotate 90° Clockwise  
2. Rotate 90° Anticlockwise  
3. Flip Vertically  
4. Flip Horizontally  
5. Scale Image  
0. Exit  
```

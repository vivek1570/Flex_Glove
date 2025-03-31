## FlexGlove: Arduino-Based Sign Language to Speech Converter

---

### **Flex Sensor Bending Notation**

- **Straight (Unbent)** = **Low Value (~59-70)**
- **Partially Bent (90° Bend)** = **Mid Value (~128-150)**
- **Fully Bent (Closed)** = **High Value (~200-256)**

---

### **ISL Alphabets & Corresponding Finger Movements**

| Letter | Index Finger       | Middle Finger      | Ring Finger        | Little Finger      |
| ------ | ------------------ | ------------------ | ------------------ | ------------------ |
| **A**  | **Fully Bent**     | **Fully Bent**     | **Fully Bent**     | **Fully Bent**     |
| **B**  | **Straight**       | **Straight**       | **Straight**       | **Straight**       |
| **C**  | **Partially Bent** | **Partially Bent** | **Partially Bent** | **Partially Bent** |
| **D**  | **Straight**       | **Fully Bent**     | **Fully Bent**     | **Fully Bent**     |
| **E**  | **Fully Bent**     | **Straight**       | **Straight**       | **Straight**       |
| **F**  | **Fully Bent**     | **Fully Bent**     | **Straight**       | **Straight**       |
| **G**  | **Fully Bent**     | **Straight**       | **Straight**       | **Fully Bent**     |
| **H**  | **Straight**       | **Fully Bent**     | **Fully Bent**     | **Straight**       |
| **I**  | **Fully Bent**     | **Fully Bent**     | **Fully Bent**     | **Straight**       |
| **J**  | **Straight**       | **Straight**       | **Straight**       | **Fully Bent**     |
| **K**  | **Fully Bent**     | **Straight**       | **Fully Bent**     | **Straight**       |
| **L**  | **Partially Bent** | **Straight**       | **Straight**       | **Straight**       |
| **M**  | **Straight**       | **Straight**       | **Partially Bent** | **Partially Bent** |
| **N**  | **Straight**       | **Partially Bent** | **Partially Bent** | **Straight**       |
| **O**  | **Partially Bent** | **Straight**       | **Straight**       | **Partially Bent** |
| **P**  | **Straight**       | **Fully Bent**     | **Straight**       | **Straight**       |
| **Q**  | **Straight**       | **Straight**       | **Straight**       | **Partially Bent** |
| **R**  | **Partially Bent** | **Partially Bent** | **Straight**       | **Straight**       |
| **S**  | **Partially Bent** | **Straight**       | **Partially Bent** | **Partially Bent** |
| **T**  | **Partially Bent** | **Fully Bent**     | **Partially Bent** | **Partially Bent** |
| **U**  | **Straight**       | **Straight**       | **Fully Bent**     | **Fully Bent**     |
| **V**  | **Straight**       | **Straight**       | **Partially Bent** | **Partially Bent** |
| **W**  | **Straight**       | **Partially Bent** | **Partially Bent** | **Partially Bent** |
| **X**  | **Partially Bent** | **Partially Bent** | **Partially Bent** | **Partially Bent** |
| **Y**  | **Partially Bent** | **Straight**       | **Partially Bent** | **Straight**       |
| **Z**  | **Partially Bent** | **Partially Bent** | **Straight**       | **Partially Bent** |

**Key**:

- **Fully Bent**: Finger sensor value < 70 (180° bend)
- **Partially Bent**: Finger sensor value < 150 (90° bend)
- **Straight**: Finger sensor value > 200 (0° bend)
- _Thumb column removed as per your code's logic_

![alt text](<63613b20-cea6-43c2-958f-5f31ed29ad60(1).png>)

notes:

- while uploading the code unplug 0 and 1 of blutooth,
- use the app provided, first connect via blutooth
- can change the code accoringly and reupload as you need
  ![alt text](<WhatsApp Image 2025-03-31 at 22.50.39(1).jpeg>) ![alt text](<WhatsApp Image 2025-03-31 at 22.50.42(1).jpeg>) ![alt text](<WhatsApp Image 2025-03-31 at 22.50.41.jpeg>)

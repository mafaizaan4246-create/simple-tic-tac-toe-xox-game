# simple-tic-tac-toe-xox-game
I've made a simple tic tac toe or xox game using c programming language

---

# Tic-Tac-Toe in C

A lightweight, terminal-based **Tic-Tac-Toe** game implemented in C. This project demonstrates basic game logic, 2D arrays, and win-condition checking in a command-line environment.

## 🎮 Features

* **Two-player gameplay:** Play locally with a friend (Player X and Player O).
* **Input Validation:** Prevents players from overwriting occupied spots.
* **Automatic Win Detection:** Checks rows, columns, and diagonals after every move.
* **Draw Detection:** Recognizes when the board is full without a winner.

---

## 🚀 How to Run

### Prerequisites

You will need a C compiler installed on your system (such as `gcc` or `clang`).

### Steps

1. **Clone the repository:**
```bash
git clone https://github.com/your-username/tic-tac-toe-c.git
cd tic-tac-toe-c

```


2. **Compile the code:**
```bash
gcc main.c -o tictactoe

```


3. **Run the game:**
```bash
./tictactoe

```



---

## 🕹️ How to Play

1. The board is a $3 \times 3$ grid indexed from **0 to 2**.
2. On your turn, enter the **row** and **column** numbers separated by a space (e.g., `1 1` for the center).
3. The first player to get three marks in a row (horizontal, vertical, or diagonal) wins!

### Board Coordinates Reference

|  | Col 0 | Col 1 | Col 2 |
| --- | --- | --- | --- |
| **Row 0** | (0,0) | (0,1) | (0,2) |
| **Row 1** | (1,0) | (1,1) | (1,2) |
| **Row 2** | (2,0) | (2,1) | (2,2) |

---

## 🛠️ Code Structure

* `resetBoard()`: Initializes the 2D array with empty spaces.
* `printBoard()`: Renders the current state of the game to the console.
* `checkWin()`: Contains the logic to determine if the current player has met a win condition.
* `main()`: Handles the game loop, player switching, and user input.

---

## 📝 License

This project is open-source and available under the [MIT License](https://www.google.com/search?q=LICENSE).

---

Would you like me to add a section on how to implement a simple "AI" (random move generator) for a single-player mode?

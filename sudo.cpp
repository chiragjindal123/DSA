#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <vector>
#include "daa.cpp" // Your Sudoku solver code

class SudokuSolverGUI : public QWidget {
    Q_OBJECT

public:
    SudokuSolverGUI(QWidget* parent = nullptr) : QWidget(parent) {
        setupUI();
    }

private slots:
    void solveSudoku() {
        // Retrieve the Sudoku puzzle from the input fields and store it in a data structure.
        std::vector<std::vector<char>> board(9, std::vector<char>(9));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                QString input = cells[i][j]->text();
                if (input.length() == 1 && input[0].isDigit()) {
                    board[i][j] = input[0].toLatin1();
                } else {
                    board[i][j] = '.';
                }
            }
        }

        // Call your Sudoku solver to solve the puzzle.
        Solution solver;
        solver.solveSudoku(board);

        // Update the grid with the solution.
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cells[i][j]->setText(QString(board[i][j]));
            }
        }
    }

    void clearSudoku() {
        // Clear the input fields and the grid.
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cells[i][j]->clear();
            }
        }
    }

private:
    QGridLayout* layout;
    QLineEdit* cells[9][9];
    QPushButton* solveButton;
    QPushButton* clearButton;

    void setupUI() {
        layout = new QGridLayout(this);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cells[i][j] = new QLineEdit();
                cells[i][j]->setFixedWidth(40);
                layout->addWidget(cells[i][j], i, j);
            }
        }

        solveButton = new QPushButton("Solve");
        connect(solveButton, &QPushButton::clicked, this, &SudokuSolverGUI::solveSudoku);

        clearButton = new QPushButton("Clear");
        connect(clearButton, &QPushButton::clicked, this, &SudokuSolverGUI::clearSudoku);

        layout->addWidget(solveButton, 9, 0, 1, 4);
        layout->addWidget(clearButton, 9, 5, 1, 4);

        setLayout(layout);
    }
};

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    SudokuSolverGUI window;
    window.setWindowTitle("Sudoku Solver");
    window.show();

    return app.exec();
}

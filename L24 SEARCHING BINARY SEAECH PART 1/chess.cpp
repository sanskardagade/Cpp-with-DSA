#include <iostream>
#include <vector>

using namespace std;

// Constants to represent chess pieces
enum class Piece { EMPTY, PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING };

// Constants to represent player colors
enum class Color { WHITE, BLACK };

// A structure to represent a chess square
struct Square {
    Piece piece;
    Color color;
};

// A class to represent a chess board
class ChessBoard {
private:
    Square board[8][8];

public:
    ChessBoard() {
        // Initialize the board with empty squares
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                board[i][j].piece = Piece::EMPTY;
            }
        }

        // Setup the initial position
        // You can customize this part for your initial board setup
        // For simplicity, this example only sets up a few pieces
        board[0][0] = {Piece::ROOK, Color::WHITE};
        board[0][1] = {Piece::KNIGHT, Color::WHITE};
        board[0][2] = {Piece::BISHOP, Color::WHITE};
        board[0][3] = {Piece::QUEEN, Color::WHITE};
        board[0][4] = {Piece::KING, Color::WHITE};
        board[0][5] = {Piece::BISHOP, Color::WHITE};
        board[0][6] = {Piece::KNIGHT, Color::WHITE};
        board[0][7] = {Piece::ROOK, Color::WHITE};
        
        board[7][0] = {Piece::ROOK, Color::BLACK};
        board[7][1] = {Piece::KNIGHT, Color::BLACK};
        board[7][2] = {Piece::BISHOP, Color::BLACK};
        board[7][3] = {Piece::QUEEN, Color::BLACK};
        board[7][4] = {Piece::KING, Color::BLACK};
        board[7][5] = {Piece::BISHOP, Color::BLACK};
        board[7][6] = {Piece::KNIGHT, Color::BLACK};
        board[7][7] = {Piece::ROOK, Color::BLACK};
        
        for (int i = 0; i < 8; i++) {
            board[1][i] = {Piece::PAWN, Color::WHITE};
            board[6][i] = {Piece::PAWN, Color::BLACK};
        }
    }

    // Function to print the chessboard
    void printBoard() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                // Print piece based on its type
                switch (board[i][j].piece) {
                    case Piece::EMPTY:
                        cout << ".";
                        break;
                    case Piece::PAWN:
                        cout << "P";
                        break;
                    case Piece::ROOK:
                        cout << "R";
                        break;
                    case Piece::KNIGHT:
                        cout << "N";
                        break;
                    case Piece::BISHOP:
                        cout << "B";
                        break;
                    case Piece::QUEEN:
                        cout << "Q";
                        break;
                    case Piece::KING:
                        cout << "K";
                        break;
                }
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ChessBoard board;
    board.printBoard();

    return 0;
}

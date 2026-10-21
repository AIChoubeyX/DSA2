// Mars Rover
int finalPosition(int matrixSize, vector<string> commands) {
    int row = 0;
    int col = 0;

    for (int i = 0; i < commands.size(); i++) {
        if (commands[i] == "UP" && row > 0) {
            row--;
        }
        else if (commands[i] == "DOWN" && row < matrixSize - 1) {
            row++;
        }
        else if (commands[i] == "LEFT" && col > 0) {
            col--;
        }
        else if (commands[i] == "RIGHT" && col < matrixSize - 1) {
            col++;
        }
    }

    return row * matrixSize + col;
}

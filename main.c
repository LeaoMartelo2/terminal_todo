#include <ncurses.h>

int main(void) {

    initscr();
    int term_height, term_width;
    getmaxyx(stdscr, term_height, term_width);

    WINDOW *win = newwin(term_height, term_width, 0, 0);
    box(win, 0, 0);
    wrefresh(win);

    while (true) {
        wrefresh(win);
    }

    return 0;
}

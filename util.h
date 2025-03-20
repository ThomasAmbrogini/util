namespace coco {

inline bool isDigit(char character) {
    return ((character >= '0') && (character <= '9'));
}

inline bool isAlpha(char character) {
    return (((character >= 'a') && (character <= 'z')) || ((character >= 'A') && (character <= 'Z')));
}

inline bool isAlphaNum(char character) {
    return (isDigit(charater) || isAlpha(character));
}

} /* namespace coco */


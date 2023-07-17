int getRealFloor(int f) {
    (f>0 && f<13)?f--:(f>=13)?f-=2:f;
    return f;
}
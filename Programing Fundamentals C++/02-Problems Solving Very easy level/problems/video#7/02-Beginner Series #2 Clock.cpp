int past(int h, int m, int s) {
  int milliseconds=((((h*60)+m)*60)+s)*1000;
  return milliseconds;
}
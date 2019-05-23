import 'dart:math';

main() {
 int years = 1000000;
 double perc = 1 + (0.001 / 100);
 double start = 0.00001;
 for (int i = 0; i < years; i++) {
  print("Years: $i\n${start * pow(perc, i)}");
 }
}

// dart dart.dart 
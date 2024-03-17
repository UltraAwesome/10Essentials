#include <iostream>
#include <string>
// e# means essential # whatever
using namespace std;
int e1() {
  string answer1;
  cin >> answer1;
  if (answer1 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer1 == "No") {
    cout << "You need to get a First Aid Kit" << endl << "Do you have one?" << endl;
    e1();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e1();
  }
  return 0;
}
int e2() {
  string answer2;
  cin >> answer2;
  if (answer2 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer2 == "No") {
    cout << "You need to get a Flashlight" << endl << "Do you have one?" << endl;
    e2();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e2();
  }
  return 0;
}
int e3() {
  string answer3;
  cin >> answer3;
  if (answer3 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer3 == "No") {
    cout << "You need to get Trail Food" << endl << "Do you have some?" << endl;
    e3();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e3();
  }
  return 0;
}
int e4() {
  string answer4;
  cin >> answer4;
  if (answer4 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer4 == "No") {
    cout << "You need to get a Fire Starter" << endl << "Do you have one?" << endl;
    e4();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e4();
  }
  return 0;
}
int e5() {
  string answer5;
  cin >> answer5;
  if (answer5 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer5 == "No") {
    cout << "You need to get Sun Protection" << endl << "Do you have some?" << endl;
    e5();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e5();
  }
  return 0;
}
int e6() {
  string answer6;
  cin >> answer6;
  if (answer6 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer6 == "No") {
    cout << "You need to get a Whistle" << endl << "Do you have one?" << endl;
    e6();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e6();
  }
  return 0;
}
int e7() {
  string answer7;
  cin >> answer7;
  if (answer7 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer7 == "No") {
    cout << "You need to get Rain Gear" << endl << "Do you have some?" << endl;
    e7();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e7();
  }
  return 0;
}
int e8() {
  string answer8;
  cin >> answer8;
  if (answer8 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer8 == "No") {
    cout << "You need to get a Water Bottle" << endl << "Do you have one?" << endl;
    e8();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e8();
  }
  return 0;
}
int e9() {
  string answer9;
  cin >> answer9;
  if (answer9 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer9 == "No") {
    cout << "You need to get a Map and Compass" << endl << "Do you have one?" << endl;
    e9();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e9();
  }
  return 0;
}
int e10() {
  string answer10;
  cin >> answer10;
  if (answer10 == "Yes") {
    cout << "Great! Lets move on to the next question" << endl;
  } else if (answer10 == "No") {
    cout << "You need to get a Pocket Knife" << endl << "Do you have one?" << endl;
    e10();
  } else {
    cout << "I don't understand" << endl << "Answer again" << endl;
    e10();
  }
  return 0;
}
int main() {
  cout << "Hello" << endl << "Would you like to see if you have all 10 essentials" << endl << "Yes or No" << endl;
    string answer;
    cin >> answer;
  if (answer == "Yes"){
    cout << "Great! Lets get started" << endl << "#1: Do you have a First Aid Kit?" << endl << "Yes or No" << endl;
  e1();
    cout << "#2: Do you have a Flashlight?" << endl << "Yes or No" << endl;
    e2();
    cout << "#3: Do you have Trail Food?" << endl << "Yes or No" << endl;
    e3();
    cout << "#4: Do you have a Fire Starter?" << endl << "Yes or No" << endl;
    e4();
    cout << "#5: Do you have Sun Protection?" << endl << "Yes or No" << endl;
    e5();
    cout << "#6: Do you have a Whistle?" << endl << "Yes or No" << endl;
    e6();
    cout << "#7: Do you have Rain Gear?" << endl << "Yes or No" << endl;
    e7();
    cout << "#8: Do you have a Water Bottle?" << endl << "Yes or No" << endl;
    e8();
    cout << "#9: Do you have a Map and Compass?" << endl << "Yes or No" << endl;
    e9();
    cout << "Last question" << endl << "#10: Do you have a Pocket Knife?" << endl << "Yes or No" << endl;
    e10();
    cout << "Thank you for using this program" << endl << "Have a nice day" << endl;
  } else if (answer == "No"){
    cout << "Okay, bye!";
  } else{
    cout << "I don't understand" << endl << "Answer again" << endl;
    main();
  }
  return 0;
}

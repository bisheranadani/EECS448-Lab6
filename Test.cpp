#include "Test.h"
using namespace std;

Test::Test(){
  cout << "Hello, World \n";
  passed = "passed";
  failed = "failed";
  temp = "";
  myTest();
}

void Test::myTest(){
  LinkedListOfInts myList;
  // cout << "Test works\n";
  cout << "Test starting..............\n";
  int size = myList.size();
  if(size == 0){
     temp = passed;
   }
   else{
     temp = failed;
   }
  cout << "Test 1 - Size is 0 at initializion: " + temp + "\n";
  bool empty = myList.isEmpty();
  if(empty == true){
     temp = passed;
   }
   else{
     temp = failed;
   }
  cout << "Test 2 - List is empty at initializion: " + temp + "\n";
  temp = passed;
  Test21();
  Test22();
  Test23();
  Test3();
  Test4();
  Test5();
  Test6();
  Test7();
}

void Test::Test21(){
  LinkedListOfInts myList;
  temp = passed;
  if(myList.removeBack()){
    temp = failed;
  }
  cout << "Test 2.1 - removeBack is false for empty list: " + temp + "\n";

}

void Test::Test22(){
  LinkedListOfInts myList;
  temp = passed;
  if(myList.removeFront()){
    temp = failed;
  }
  cout << "Test 2.2 - removeFront is false for empty list: " + temp + "\n";
}

void Test::Test23(){
  LinkedListOfInts myList;
  temp = passed;
  if( myList.search(-124223) || myList.search(354235) || myList.search(-234.234)){
    temp = failed;
  }
  cout << "Test 2.3 - search is false for empty list using random numbers: " + temp + "\n";

}

void Test::Test3(){
  LinkedListOfInts myList;
  int size = 5;
  int array[] = {11, 24, 10001, 53, -2224};

  for(int i=0; i < size; i++){
    int num = array[i];
    // cout << num << "\n";
    myList.addBack(num);
  }
  temp = passed;
  std::vector<int> tempVec = myList.toVector();
  for(int i=0; i<size; i++){
    // cout << tempVec[i] << "\n";
    if(array[i] != tempVec[i]){
      temp = failed;
      break;
    }

  }

  cout << "Test 3.1 - addBack added numbers properly: " + temp + "\n";
  if(myList.isEmpty()){
    temp = failed;
  }
  else{
    temp = passed;
  }
  cout << "Test 3.2 - The list is not empty after addBack: " << temp + "\n";
  if(myList.size() == size){
    temp = passed;
  }
  else{
    temp = failed;
  }
  cout << "Test 3.3 - The size of the list is the number of numbers added: " << temp + "\n";

}

void Test::Test4(){
  LinkedListOfInts myList;
  int size = 5;
  int array[] = {11, 24, 10001, 53, -2224};

  for(int i=0; i < size; i++){
    int num = array[i];
    // cout << num << "\n";
    myList.addFront(num);
  }
  temp = passed;
  std::vector<int> tempVec = myList.toVector();
  for(int i=0; i<size; i++){
    // cout << tempVec[i] << "\n";
    if(array[size-1-i] != tempVec[i]){
      temp = failed;
      break;
    }

  }

  cout << "Test 4.1 - addFront added numbers properly: " + temp + "\n";
  if(myList.isEmpty()){
    temp = failed;
  }
  else{
    temp = passed;
  }
  cout << "Test 4.2 - The list is not empty after addFront: " << temp + "\n";
  if(myList.size() == size){
    temp = passed;
  }
  else{
    temp = failed;
  }
  cout << "Test 4.3 - The size of the list is the number of numbers added: " << temp + "\n";

}

void Test::Test5(){
  LinkedListOfInts myList;
  int size = 5;
  int array[] = {11, 24, 10001, 53, -2224};

  for(int i=0; i < size; i++){
    int num = array[i];
    // cout << num << "\n";
    myList.addFront(num);
  }
  bool rem = myList.removeBack();
  // if(rem == false){
  //   cout << "false";
  // }
  // cout << rem;

  temp = passed;
  std::vector<int> tempVec = myList.toVector();
  for(int i=0; i<size-1; i++){
    // cout << tempVec[i] << "\n";
    if(array[size-1-i] != tempVec[i]){
      temp = failed;
      break;
    }

  }

  cout << "Test 5.1 - The list items still match after removeBack: " + temp + "\n";
  if(temp == passed){
    if(rem == false){
      temp = failed;
    }
  }
  cout << "Test 5.1.1 - removeBack returns true for case populated list: " + temp + "\n";

  if(myList.isEmpty()){
    temp = failed;
  }
  else{
    temp = passed;
  }
  cout << "Test 5.2 - The list is still not empty after removeBack: " << temp + "\n";
  // cout << myList.size();
  if(myList.size() == size-1){
    temp = passed;
  }
  else{
    temp = failed;
  }
  cout << "Test 5.3 - The size of the list is one less after removeBack: " << temp + "\n";


}

void Test::Test6(){
  LinkedListOfInts myList;
  int size = 5;
  int array[] = {11, 24, 10001, 53, -2224};

  for(int i=0; i < size; i++){
    int num = array[i];
    // cout << num << "\n";
    myList.addFront(num);
  }
  // cout << myList.size();

  bool rem = myList.removeFront();
  // if(rem == false){
  //   cout << "false";
  // }
  // cout << rem;
  temp = passed;
  std::vector<int> tempVec = myList.toVector();
  for(int i=0; i<size-1; i++){
    // cout << tempVec[i] << "\n";
    if(array[size-2-i] != tempVec[i]){
      temp = failed;
      break;
    }

  }

  cout << "Test 6.1  - The list items still match after removeFront: " + temp + "\n";
  if(temp == passed){
    if(rem == false){
      temp = failed;
    }
  }
  cout << "Test 6.1.1 - removeFront returns true for case populated list: " + temp + "\n";

  if(myList.isEmpty()){
    temp = failed;
  }
  else{
    temp = passed;
  }
  cout << "Test 6.2 - The list is still not empty after removeFront: " << temp + "\n";
  // cout << myList.size();
  if(myList.size() == size-1){
    temp = passed;
  }
  else{
    temp = failed;
  }
  cout << "Test 6.3 - The size of the list is one less after removeFront: " << temp + "\n";

}

void Test::Test7(){
  LinkedListOfInts myList;
  int size = 5;
  int array[] = {11, 24, 10001, 53, -2224};

  for(int i=0; i < size; i++){
    int num = array[i];
    // cout << num << "\n";
    myList.addFront(num);
  }
  // cout << myList.size();

  // if(rem == false){
  //   cout << "false";
  // }
  // cout << rem;
  temp = passed;
  std::vector<int> tempVec = myList.toVector();
  for(int i=0; i<size; i++){
    // cout << tempVec[i] << "\n";
    int num = tempVec[i];
    // cout << myList.search(num) << "\n";
    if(!myList.search(num)){
      temp = failed;
      break;
    }

  }

  if( myList.search(-124223) || myList.search(354235) || myList.search(-234.234)){
    temp = failed;
  }
  cout << "Test 7.1 - All items added were found using search and no false positives using random numbers: " + temp + "\n";

  if(myList.isEmpty()){
    temp = failed;
  }
  else{
    temp = passed;
  }
  cout << "Test 7.2 - List is still not empty after add and search: " << temp + "\n";
  // cout << myList.size();
  if(myList.size() == size){
    temp = passed;
  }
  else{
    temp = failed;
  }
  cout << "Test 7.3 - The list stays the same size after search: " << temp + "\n";

}




Test::~Test(){
  cout << "Goodbye...\n";
}

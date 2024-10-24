
int main() {

  var result = mergesort([2,1,4,3]);
  print(result);

}
List<int> mergesort(List<int> thelist) {
  if (thelist.length != 1) {
    int my = (thelist.length/2).round();
    List<int> list1 = mergesort(thelist.sublist(0,my));
    List<int> list2 = mergesort(thelist.sublist(my));
    return merge(list1, list2);
  } else {
    return thelist;
  }
}

List<int> merge(List<int> list1, List<int> list2) {
  int i = 0;
  int j = 0;
  int count = (list1.length + list1.length);
  List<int> sortedlist = [];

  for (int k = 0; k < count; k++) {
    if (list1[i] < list2[j]) {
      sortedlist.add(list1[i]);
      i++;
    } else {
      sortedlist.add(list2[j]);
      j++;
    }
  }
  return sortedlist;
}

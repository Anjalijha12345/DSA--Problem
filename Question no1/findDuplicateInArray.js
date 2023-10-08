const findDuplicate = (arr) => {
  // sort the array starting from the smallest;
  const sortedArray = arr.sort((a, b) => a - b);
  let duplicateItems = "";

  // find duplicate items from a sorted array using looping;
  for (let i = 0; i < sortedArray.length; i++) {
    // if the current index is equal to the length of the sorted array, looping process stop;
    if (sortedArray[i + 1] === sortedArray.length) break;

    // simple logic check the current index item is equal or not to the next index item / i+1,
    if (sortedArray[i] === sortedArray[i + 1]) {
      // if the item has been identified as duplicate then the looping process will continue,
      if (duplicateItems.includes(sortedArray[i])) continue;

      // if the item has not been identified as a duplicate then the item will be saved.
      duplicateItems += sortedArray[i];
    }
  }

  // if the duplicate array variable exists then it will return its value as an array, otherwise -1.
  return duplicateItems ? duplicateItems.split("").map((item) => +item) : -1;
};

// const arr = [0,3,1,2]; // output -1
// const arr = [2, 3, 1, 2, 3]; // output 2 3
const arr = [2, 3, 1, 2, 3, 33, 3, 1, 2, 2, 11, 21]; // output 1 2 3

console.log(findDuplicate(arr));

function twoSum(nums, target) {
    // Create a hash map to store numbers and their indices
    const numIndices = new Map();
   
  
    for (let i = 0; i < nums.length; i++) {
      const complement = target - nums[i];
  
      // If the complement exists in the hash map, return its index and the current index
      if (numIndices.has(complement)) {
        return [numIndices.get(complement), i];
      }
  
      // Otherwise, add the current number and its index to the hash map
      numIndices.set(nums[i], i);
      console.log(numIndices);
    }
  
    // If no solution is found, return an empty array (this should not happen
    // based on the problem statement assumption)
    return [];
  }
const nums = [2, 7, 11, 15];
const target = 9;
const result = twoSum(nums, target);
console.log(result);
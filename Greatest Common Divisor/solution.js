function findGreatestCommonDivisor(a, b) {
    if(b == 0)
        return a;
    else
        return findGreatestCommonDivisor(b, a % b);
}

console.log(findGreatestCommonDivisor(72, 9)); // 9
console.log(findGreatestCommonDivisor(54, 8)); // 2
console.log(findGreatestCommonDivisor(26, 5)); // 1
console.log(findGreatestCommonDivisor(2, 1));  // 1
console.log(findGreatestCommonDivisor(1, 1));  // 1